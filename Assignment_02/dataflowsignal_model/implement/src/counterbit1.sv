module counterbit1 (
    //inputs
    input logic [2:0] A_i,
    //outputs
    output logic [1:0] Y_o
);
    logic carry;
    logic sum;
    //implement code
    assign sum = (A_i[2] ^ A_i[1]) ^ (A_i[0]);
    assign carry = (A_i[2] & A_i[1]) | (A_i[1] & A_i[0]) | (A_i[2] & A_i[0]);
    //implement output
    assign Y_o[0] = sum;
    assign Y_o[1] = carry;
endmodule : counterbit1
