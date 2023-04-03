module dec3to8 (
    //inputs
    input logic E1_ni,E2_ni,E3_i,
    input logic A0_i,A1_i,A2_i,
    //outputs
    output logic Q0_no,Q1_no,Q2_no,Q3_no,Q4_no,Q5_no,Q6_no,Q7_no
);
    logic enable;
    logic neg_A0;
    logic neg_A1;
    logic neg_A2;
    logic tmp_Q0;
    logic tmp_Q1;
    logic tmp_Q2;
    logic tmp_Q3;
    logic tmp_Q4;
    logic tmp_Q5;
    logic tmp_Q6;
    logic tmp_Q7;
    logic neg_E1_ni;
    logic neg_E2_ni;
    not (neg_A0,A0_i);
    not (neg_A1,A1_i);
    not (neg_A2,A2_i);
    not (neg_E1_ni,E1_ni);
    not (neg_E2_ni,E2_ni);
    and (enable,neg_E1_ni,neg_E2_ni,E3_i);
    //implement output
    not (Q0_no,tmp_Q0);
    not (Q1_no,tmp_Q1);
    not (Q2_no,tmp_Q2);
    not (Q3_no,tmp_Q3);
    not (Q4_no,tmp_Q4);
    not (Q5_no,tmp_Q5);
    not (Q6_no,tmp_Q6);
    not (Q7_no,tmp_Q7);
    and (tmp_Q0,enable,neg_A0,neg_A1,neg_A2);
    and (tmp_Q1,enable,A0_i,neg_A1,neg_A2);
    and (tmp_Q2,enable,neg_A0,A1_i,neg_A2);
    and (tmp_Q3,enable,A0_i,A1_i,neg_A2);
    and (tmp_Q4,enable,neg_A0,neg_A1,A2_i);
    and (tmp_Q5,enable,A0_i,neg_A1,A2_i);
    and (tmp_Q6,enable,neg_A0,A1_i,A2_i);
    and (tmp_Q7,enable,A0_i,A1_i,A2_i);
endmodule : dec3to8
