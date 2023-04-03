/* verilator lint_off UNUSED */
module top (
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
    min_finder dut (
        .clk_i      (clk_i),
    	.I0_i       (I0_i),
    	.I1_i       (I1_i),
    	.I2_i       (I2_i),
    	.I3_i       (I3_i),
    	.I4_i       (I4_i),
    	.I5_i       (I5_i),
    	.I6_i       (I6_i),
    	.I7_i       (I7_i),
    	.I8_i       (I8_i),
    	.I9_i       (I9_i),
    	.min1_o     (min1_o),
    	.min2_o     (min2_o),
    	.index_min1_o (index_min1_o)
    );
endmodule : top
