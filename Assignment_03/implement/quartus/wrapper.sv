module wrapper (
    //inputs
    input logic clk_i,
    input logic [3:0] SW,
    //outputs
    output logic [3:0] LEDR
);
    //code
    upcounter4bit dut (
    	.clk_i (clk_i),
    	.N_i   (SW[3:0]),
    	.Q_o   (LEDR[3:0])
    );
endmodule : wrapper
