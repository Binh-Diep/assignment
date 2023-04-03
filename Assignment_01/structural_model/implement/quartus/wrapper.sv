module wrapper (
    //inputs
    input logic [5:0] SW,
    //outputs
    output logic [7:0] LEDR 
);
    //code
    dec3to8 dut (
    	.E1_ni   (SW[0]),
    	.E2_ni   (SW[1]),
    	.E3_i    (SW[2]),
    	.A0_i    (SW[3]),
    	.A1_i    (SW[4]),
    	.A2_i    (SW[5]),
    	.Q0_no   (LEDR[0]),
    	.Q1_no   (LEDR[1]),
    	.Q2_no   (LEDR[2]),
    	.Q3_no   (LEDR[3]),
    	.Q4_no   (LEDR[4]),
    	.Q5_no   (LEDR[5]),
    	.Q6_no   (LEDR[6]),
    	.Q7_no   (LEDR[7])
    );
endmodule : wrapper
