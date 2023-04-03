module top (
    //inputs
    input logic clk_i,
    input logic rst_ni,
    input logic string_i,
    //outputs
    output logic valid_o
);
    mealy dut (
    	.clk_i    (clk_i),
    	.rst_ni   (rst_ni),
    	.string_i (string_i),
    	.valid_o  (valid_o)
    );
endmodule : top
