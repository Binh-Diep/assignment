/* verilator lint_off UNUSED */
module sqrt_sum (
    //inputs
    input  logic clk_i,
    input  logic [15:0] x_i,
    input  logic [15:0] y_i,
    //outputs
    output logic [21:0] sqrt_o //17bit: int and 5bit: fraction
);
    //variables
    logic [1:0]  couple;
    logic [5:0]  count;
    logic [24:0] sq_root;
    logic [31:0] sq_x;
    logic [31:0] sq_y;
    logic [32:0] result_add;
    logic [33:0] cur_val;
    logic [35:0] randicand;
    logic signed [33:0] test_sign;
    typedef enum logic [3:0] {
    	INIT       = 4'b0000,
    	SQUARE     = 4'b0001,
    	SUM        = 4'b0010,
    	PRE_ROOT   = 4'b0011,
    	ROOT1      = 4'b0100,
    	ROOT2      = 4'b0101,
    	ROOT3      = 4'b0110,
    	CHECK_SIGN = 4'b0111,
    	SEND       = 4'b1000
    } state_e;
    state_e current_state;
    //implement code
    always_ff @(posedge clk_i) begin
        case (current_state)
            INIT: begin
                count   <= 6'h0;
                sq_x    <= 32'h0;
                sq_y    <= 32'h0;
                sq_root <= 25'h0;
                current_state <= SQUARE;
            end
            SQUARE: begin
                sq_x <= x_i[15:0] * x_i[15:0];
                sq_y <= y_i[15:0] * y_i[15:0];
                current_state <= SUM;
            end
            SUM: begin
                result_add <= sq_x + sq_y; //33bits
                current_state <= PRE_ROOT;       
            end
            PRE_ROOT: begin   
                randicand <= {3'b000,result_add}; 
                current_state <= ROOT1;
            end
            ROOT1: begin
                randicand <= (randicand << 2);
                couple    <= randicand[35:34];
                current_state <= ROOT2;
            end
            ROOT2: begin
                cur_val   <= ((cur_val << 2) | {32'h0,couple});
                current_state <= ROOT3;
            end
            ROOT3: begin
                test_sign <= (cur_val - {7'h0,sq_root,2'b01});
                sq_root   <= (sq_root << 1);
                current_state <= CHECK_SIGN;
            end
            CHECK_SIGN: begin
	            if (count <= 25) begin
		            if (test_sign < 0) begin
		                count <= count + 6'b000001;
		            end
		            else begin
		                cur_val <= test_sign;
		                sq_root[0] <= 1'b1;
		                count <= count + 6'b000001;
		            end
		            if (count == 25) begin
		                current_state <= SEND;
		            end
		            else begin
		                current_state <= ROOT1;
		            end
		        end
		        else begin
		            current_state <= SEND;
		        end
            end
            SEND: begin
                sqrt_o <= sq_root[24:3];           
            end
            default: sqrt_o <= 22'h0;
        endcase
    end
    always_comb begin
        $display("result: %b.%b --- state: %b",sqrt_o[21:5],sqrt_o[4:0],current_state);
    end
endmodule : sqrt_sum
