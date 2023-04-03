module wrapper(
    //inputs
    input logic [15:0] SW,
    //outputs
    output logic [8:0] LEDR
);
    parallel_adder dut(
        .M_i      (SW[7:0]),
        .N_i      (SW[15:8]),
        .result_o (LEDR)
    );
endmodule : wrapper
