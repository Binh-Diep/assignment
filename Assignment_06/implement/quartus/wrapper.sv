module wrapper(
    //inputs
    input logic CLOCK_50,
    input logic [15:0] SW,
    //outputs
    output logic [15:0] LEDR
);
    cal_log2 dut(
        .clk_i (CLOCK_50),
        .x_i   (SW),
        .y_o   (LEDR)
    );
endmodule : wrapper
