/* verilator lint_off UNUSED */
module top (
    //input 
    input logic clk_i,
    input logic E1_ni,E2_ni,E3_i,
    input logic A0_i,A1_i,A2_i,
    //output
    output logic Q0_no,Q1_no,Q2_no,Q3_no,Q4_no,Q5_no,Q6_no,Q7_no
);
    dec3to8 dut (
    	.E1_ni   (E1_ni),
    	.E2_ni   (E2_ni),
    	.E3_i    (E3_i),
    	.A0_i    (A0_i),
    	.A1_i    (A1_i),
    	.A2_i    (A2_i),
    	.Q0_no   (Q0_no),
    	.Q1_no   (Q1_no),
    	.Q2_no   (Q2_no),
    	.Q3_no   (Q3_no),
    	.Q4_no   (Q4_no),
    	.Q5_no   (Q5_no),
    	.Q6_no   (Q6_no),
    	.Q7_no   (Q7_no)
    );
endmodule : top
