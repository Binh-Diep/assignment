module wrapper(
    //inputs
    input logic [1:0] SW,
    //outputs
    output logic [1:0] LEDR,
    input logic CLOCK_50
);
    moore dut (
        .clk_i    (CLOCK_50),
        .rst_ni   (SW[0]),
        .string_i (SW[1]),
        .valid_o  (LEDR[0])
    );
endmodule : wrapper
