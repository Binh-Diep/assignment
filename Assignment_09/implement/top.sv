module top (
    //inputs
    input logic clk_i,
    input logic [7:0] M_i,
    input logic [7:0] N_i,
    //outputs
    output logic [15:0] result_o
);
    //code
    multiplier dut (
        .clk_i    (clk_i),
    	.M_i      (M_i),
    	.N_i      (N_i),
    	.result_o (result_o)
    );
endmodule : top
