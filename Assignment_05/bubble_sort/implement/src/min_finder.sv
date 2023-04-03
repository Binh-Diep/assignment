/* verilator lint_off UNUSED*/
module bubble_sort (
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
    output logic flag_sort
);
    //variables
    logic [3:0]  count_i;
    logic [3:0]  count_k;
    logic [3:0]  contain [10];
    typedef enum logic [2:0] {
    	INIT        = 3'b000,
    	PRE         = 3'b001,
        SORT        = 3'b010,
    	SEND        = 3'b100
    } state_e;
    state_e current_state;
    //implement
    always_ff @(posedge clk_i) begin
        case (current_state)
            INIT: begin
                count_i       <= 4'h0;
                count_k       <= 4'h0;
                current_state <= PRE;
            end
            PRE:  begin
                count_k       <= count_i;
                current_state <= SORT;
                contain[0:9]  <= {I0_i,I1_i,I2_i,I3_i,I4_i,I5_i,I6_i,I7_i,I8_i,I9_i};
            end
            SORT: begin        
                if (count_i < 10) begin
	                if (count_k < (10 - count_i - 1)) begin
		                if (contain[count_k] > contain[count_k + 4'b0001]) begin
			                contain[count_k]           <= contain[count_k + 4'b0001];
			                contain[count_k + 4'b0001] <= contain[count_k]; 
			                count_k                    <= (count_k + 4'b0001);
		                end
		                else begin
		                    count_k <= (count_k + 4'b0001);
		                end
	                end
	                else begin
	                    count_k       <= 4'h0;
	                    count_i       <= (count_i + 4'b0001);
	                end
                end
                else begin
                    current_state <= SEND;
                end
            end
            SEND: begin
                flag_sort <= 1'b1;
            end
            default: begin
                flag_sort <= 1'b0;
            end
        endcase
    end              
	always_comb begin
	    $display("array = {%x,%x,%x,%x,%x,%x,%x,%x,%x,%x} --- count-i:  %x --- count-k: %x --- state: %b",contain[0],contain[1],contain[2],contain[3],contain[4],contain[5],contain[6],contain[7],contain[8],contain[9],count_i,count_k,current_state);
	end     
endmodule : bubble_sort
