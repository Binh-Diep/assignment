module wrapper(
    //inputs
    input logic clk_i,
    ...
    //outputs
    ...
);
    min_finder dut (
        .clk_i (clk_i),
        .I0_i  (),
        .I1_i  (),
        .I2_i  (),
        .I3_i  (),
        .I4_i  (),
        .I5_i  (),
        .I6_i  (),
        .I7_i  (),
        .I8_i  (),
        .I9_i  (),
        .min1_o(),
        .min2_o(),
        .index_min1_o(),
    );
endmodule : wrapper
