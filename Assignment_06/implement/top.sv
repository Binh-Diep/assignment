module top(
    //inputs
    input logic clk_i,
    input logic [15:0] x_i,
    //outputs
    output logic [8:0] y_o
);
    cal_log2 dut(
    	.clk_i (clk_i),
    	.x_i   (x_i),
    	.y_o   (y_o)
    );
endmodule : top
