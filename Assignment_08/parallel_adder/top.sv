/* verilator lint_off UNUSED */
module top (
	//inputs
	input logic clk_i,
	input logic [7:0] M_i,
	input logic [7:0] N_i,
	//outputs
	output logic [8:0] result_o
);
    parallel_adder dut (
    	.M_i      (M_i),
    	.N_i      (N_i),
    	.result_o (result_o)
    );
endmodule : top
