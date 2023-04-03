module wrapper(
    //inputs
    input logic CLOCK_50,
    input logic [15:0] SW,
    //outputs
    output logic [15:0] LEDR
);
    multiplier dut (
        .clk_i (CLOCK_50),
        .M_i   (SW[7:0]),
        .N_i   (SW[15:8]),
        .result_o (LEDR)
    );
endmodule : wrapper
