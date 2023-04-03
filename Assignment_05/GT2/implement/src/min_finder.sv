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
    logic [3:0]  count_i;
    logic [3:0]  count_k;
    logic [3:0]  tmp_min1;
    logic [3:0]  tmp_min2;
    logic [3:0]  tmp_index;
    logic [3:0]  array [10];
    logic [3:0]  contain [10];
    typedef enum logic [2:0] {
    	INIT      = 3'b000,
    	PRE       = 3'b001,
        SORT      = 3'b010,
        PRE_INDEX = 3'b011,
        INDEX     = 3'b100,
        MIN       = 3'b101,
    	SEND      = 3'b110
    } state_e;
    state_e current_state;
    //implement
    always_ff @(posedge clk_i) begin
        case (current_state)
            INIT: begin
                count_i       <= 4'b0000;
                count_k       <= 4'b0000;
                tmp_min1      <= 4'b0000;
                tmp_min2      <= 4'b0000;
                tmp_index     <= 4'b0000;
                current_state <= PRE;
            end
            PRE:  begin
                count_k       <= count_i;
                current_state <= SORT;
                contain[0:9]  <= {I0_i,I1_i,I2_i,I3_i,I4_i,I5_i,I6_i,I7_i,I8_i,I9_i};
                array[0:9]    <= {I0_i,I1_i,I2_i,I3_i,I4_i,I5_i,I6_i,I7_i,I8_i,I9_i};
            end
            SORT: begin
                if (count_i < 10) begin
                    if (count_k < (10 - count_i - 1)) begin
                        if (array[count_k] > array[count_k + 4'b0001]) begin
                            array[count_k] <= array[count_k + 4'b0001];
                            array[count_k + 4'b0001] <= array[count_k];
                            count_k <= (count_k + 4'b0001);
                        end
                        else begin
                            count_k <= (count_k + 4'b0001);
                        end
                    end
                    else begin
                        count_k <= 4'h0;
                        count_i <= (count_i + 4'b0001);
                    end
                end
                else begin
                    current_state <= PRE_INDEX;
                end
            end
            PRE_INDEX: begin
                count_i       <= 4'b0000;
                count_k       <= 4'b0000;
                current_state <= INDEX;
            end
            INDEX: begin
                if (count_i < 4'b1010) begin
                    if (array[0] == contain[count_i]) begin
                        tmp_index     <= count_i;
                        current_state <= MIN;
                    end
                end
                else begin
                    current_state <= MIN;
                end
                count_i <= count_i + 4'b0001;
            end
            MIN:  begin
                tmp_min1      <= array[0];
                tmp_min2      <= array[1];
                current_state <= SEND;
            end
            SEND: begin
                min1_o       <= tmp_min1;
                min2_o       <= tmp_min2;
                index_min1_o <= tmp_index;
            end 
            default: begin
                min1_o       <= 4'b0000;
                min2_o       <= 4'b0000;
                index_min1_o <= 4'b0000;                
            end
        endcase
    end              
    always_comb begin
        $display("MIN1:  %x",min1_o);
        $display("MIN2:  %x",min2_o);
        $display("INDEX: %x",index_min1_o);
    end     
endmodule : min_finder
