/* verilator lint_off UNUSED */
module top (
     input logic clk_i,
     input logic [2:0] A_i,
     output logic [1:0] Y_o
);
     counterbit1 dut (
     	.A_i (A_i),
     	.Y_o (Y_o)
     );
endmodule : top
