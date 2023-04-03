/* verilator lint_off UNUSED*/
module min_finder (
    //inputs
    input logic clk_i,
    input logic [3:0] I0_i,
    input logic [3:0] I1_i,
    input logic [3:0] I2_i,
    input logic [3:0] I3_i,
    input logic [3:0] I4_i,
    input logic [3:0] I5_i,
    input logic [3:0] I6_i,
    input logic [3:0] I7_i,
    input logic [3:0] I8_i,
    input logic [3:0] I9_i,
    //outputs
    output logic [3:0] min1_o,
    output logic [3:0] min2_o,
    output logic [3:0] index_min1_o
);
    //variables
    logic [11:0] tmp_min;
    logic [3:0]  count;
    logic [3:0]  tmp_min1;
    logic [3:0]  tmp_min2;
    logic [3:0]  tmp_index;
    logic [3:0]  contain [10];
    typedef enum logic [1:0] {
    	INIT = 2'b00,
    	PRE  = 2'b01,
    	MIN  = 2'b10,
    	SEND = 2'b11
    } state_e;
    state_e current_state;
    assign contain[0] = I0_i;
    assign contain[1] = I1_i;
    assign contain[2] = I2_i;
    assign contain[3] = I3_i;
    assign contain[4] = I4_i;
    assign contain[5] = I5_i;
    assign contain[6] = I6_i;
    assign contain[7] = I7_i;
    assign contain[8] = I8_i;
    assign contain[9] = I9_i;
    //implement
    always_ff @(posedge clk_i) begin
        case (current_state)
            INIT: begin
                count         <= 4'b0000;
                tmp_min1      <= 4'b0000;
                tmp_min2      <= 4'b0000;
                tmp_index     <= 4'b0000;
                current_state <= PRE;
            end
            PRE:  begin
                tmp_min1      <= contain[0];
                tmp_min2      <= contain[1];
                current_state <= MIN;
            end
            MIN:  begin
                if (count < 4'b1010) begin
                    if (contain[count] < tmp_min1) begin
                        tmp_min2  <= tmp_min1;
                        tmp_min1  <= contain[count];
                        tmp_index <= count; 
                    end
                    else if ((contain[count] >= tmp_min1) && (contain[count] < tmp_min2)) begin
                        tmp_min2  <= contain[count];
                    end
                    count <= count + 4'b0001;
                end
                else begin
                    tmp_min       <= {tmp_min2,tmp_min1,tmp_index};
                    current_state <= SEND;
                end
            end
            SEND:  begin
                min2_o <= tmp_min[11:8];
                min1_o <= tmp_min[7:4];
                index_min1_o <= tmp_min[3:0];
            end 
        endcase 
    end
    always_comb begin
        $display("MIN1 : %x",min1_o);
        $display("MIN2 : %x",min2_o);
        $display("INDEX: %x",index_min1_o);
    end
endmodule : min_finder
