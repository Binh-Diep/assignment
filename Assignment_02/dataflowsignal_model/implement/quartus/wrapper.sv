module wrapper (
    //inputs
    input logic [2:0] SW,
    //outputs
    output logic [1:0] LEDR
);
    //code
    counterbit1 dut (
    	.A_i (SW[2:0]),
    	.Y_o (LEDR[1:0])
    );
endmodule : wrapper
