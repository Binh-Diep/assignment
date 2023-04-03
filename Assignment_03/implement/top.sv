module top (
    //inputs
    input logic clk_i,
    input logic [3:0] N_i,
    //outputs
    output logic [3:0] Q_o
);
    upcounter4bit dut (
    	.clk_i (clk_i),
    	.N_i   (N_i),
    	.Q_o   (Q_o)
    );
endmodule: top
