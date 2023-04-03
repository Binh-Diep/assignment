module top (
    //inputs
    input  logic clk_i,
    input  logic [15:0] x_i,
    input  logic [15:0] y_i,
    //outputs
    output logic [21:0] sqrt_o
);
    sqrt_sum dut (
        .clk_i  (clk_i),
    	.x_i    (x_i),
    	.y_i    (y_i),
    	.sqrt_o (sqrt_o)
    );
endmodule : top
