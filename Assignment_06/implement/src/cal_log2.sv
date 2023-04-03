/* verilator lint_off UNUSED */
module cal_log2(
    //format of output
    //Floor number: 4bit
    //point number: 5bit
    //inputs
    input logic clk_i,
    input logic [15:0] x_i,
    //outputs
    output logic [8:0] y_o //Log2(x) = K + Log2(m)
);
    //variables
    logic  [3:0]  point;
    logic  [3:0]  count;
    logic  [15:0] tmp_y;
    logic  [15:0] tmp_x;       //tmp_x <= x_i
    logic  [15:0] log2_m;      //PHAN THAP PHAN - Log2(m)
    logic  [29:0] tmp_sq;
    logic signed [15:0] index; //PHAN NGUYEN    - K
    //Initialize values
    assign point = 4'b1100;
    typedef enum logic [2:0] {
    	IDLE           = 3'b000,
    	PRE_FIND_K     = 3'b001,
    	FIND_K         = 3'b010,
    	SQUARE         = 3'b011,
    	DIV_BIT        = 3'b100,
    	FIND_LOG2      = 3'b101,
        SEND           = 3'b110
    } state_e;
    state_e current_state;
    //implement code
    always_ff @(posedge clk_i) begin
        case (current_state)
            IDLE: begin
                count         <= (point - 4'b0001);
                index         <= 16'h0000;
                log2_m        <= 16'h0000;
                current_state <= PRE_FIND_K;
            end
            PRE_FIND_K: begin
                tmp_x         <= x_i;
                current_state <= FIND_K;
            end
            FIND_K: begin
                if ((tmp_x >> point) > 16'h0001) begin
                    tmp_x <= (tmp_x >> 1);
                    index <= (index + 16'h0001);
                end
                else if ((tmp_x >> point) == 16'h0000) begin
                    tmp_x <= (tmp_x << 1);
                    index <= (index - 16'h0001);
                end
                else begin
                    index <= (index <<< point);
                    current_state <= SQUARE;
                end
            end
            SQUARE: begin
                tmp_sq <= tmp_x[15:0]*tmp_x[15:0];
                current_state <= DIV_BIT;
            end
            DIV_BIT: begin
                tmp_x[15:12]  <= tmp_sq[27:24];
                tmp_x[11:0]   <= tmp_sq[23:12];
                current_state <= FIND_LOG2;
            end
            FIND_LOG2: begin
                if (count < point) begin
                    if ((tmp_x >> point) >= 16'h0002) begin                      
                        tmp_x         <= (tmp_x >> 1);
                        log2_m[count] <= 1'b1;
                    end
                    else begin
                        log2_m[count] <= 1'b0;                        
                    end
                    count <= (count - 4'b0001); 
                    current_state <= SQUARE;                   
                end
                if (count == 4'b1111) begin
                    tmp_y <= (index + log2_m);
                    current_state <= SEND;
                end
            end
            SEND: begin
                y_o <= tmp_y[15:7];
            end
            default: y_o <= 9'h0;
        endcase
    end
    always_comb begin
        $display("ket qua  :%b - count: %d",y_o,count);
    end
endmodule : cal_log2
