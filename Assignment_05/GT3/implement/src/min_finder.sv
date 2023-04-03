/* verilator lint_off UNUSED */
/* verilator lint_off UNOPTFLAT */
module min_finder#(parameter N_number = 10,
                             N_bit    = 4)(
    //inputs
    input logic [N_bit-1:0] I0_i,
    input logic [N_bit-1:0] I1_i,
    input logic [N_bit-1:0] I2_i,
    input logic [N_bit-1:0] I3_i,
    input logic [N_bit-1:0] I4_i,
    input logic [N_bit-1:0] I5_i,
    input logic [N_bit-1:0] I6_i,
    input logic [N_bit-1:0] I7_i,
    input logic [N_bit-1:0] I8_i,
    input logic [N_bit-1:0] I9_i,
    //outputs
    output logic [N_bit-1:0] min1_o,
    output logic [N_bit-1:0] min2_o,
    output logic [N_bit-1:0] index_min1_o
);
    //VAR
    logic [2**N_bit-1:0] pin01_or;
    logic [2**N_bit-1:0] pin02_or;
    logic [2**N_bit-1:0] pin03_or;
    logic [2**N_bit-1:0] pin04_or;
    logic [2**N_bit-1:0] pin05_or;
    logic [2**N_bit-1:0] pin06_or;
    logic [2**N_bit-1:0] pin07_or;
    logic [2**N_bit-1:0] pin08_or;
    logic [2**N_bit-1:0] pin09_or;
    logic [2**N_bit-1:0] pin10_or;
    logic [N_bit-1:0] out01_PE;
    logic [N_bit-1:0] out02_PE;
    logic [N_bit-1:0] out03_PE;
    logic [N_bit-1:0] out04_PE;
    logic [N_bit-1:0] out05_PE;
    logic [N_bit-1:0] out06_PE;
    logic [N_bit-1:0] out07_PE;
    logic [N_bit-1:0] out08_PE;
    logic [N_bit-1:0] out09_PE;
    logic [N_bit-1:0] out10_PE;
    //RAM
    logic [2**N_bit-1:0] out_pos_dec [N_number-1];
    logic [N_number-1:0] block_or [2**N_bit];
    logic [N_bit-1:0] RAM [N_number];
    //module - first block decoder
    decoder4to16 dec01(
        .x_i (I0_i),
        .y_i (pin01_or)
    );
    decoder4to16 dec02(
        .x_i (I1_i),
        .y_i (pin02_or)        
    );
    decoder4to16 dec03(
        .x_i (I2_i),
        .y_i (pin03_or)
    );
    decoder4to16 dec04(
        .x_i (I3_i),
        .y_i (pin04_or)
    );
    decoder4to16 dec05(
        .x_i (I4_i),
        .y_i (pin05_or)
    );
    decoder4to16 dec06(
        .x_i (I5_i),
        .y_i (pin06_or)
    );
    decoder4to16 dec07(
        .x_i (I6_i),
        .y_i (pin07_or)
    );
    decoder4to16 dec08(
        .x_i (I7_i),
        .y_i (pin08_or)
    );
    decoder4to16 dec09(
        .x_i (I8_i),
        .y_i (pin09_or)
    );
    decoder4to16 dec10(
        .x_i (I9_i),
        .y_i (pin10_or)
    );
    //module - first block priority encoder
    encoder16to4 enc01(
        .x_i ({|(block_or[0]),|(block_or[1]),|(block_or[2]),|(block_or[3]),|(block_or[4]),|(block_or[5]),|(block_or[6]),|(block_or[7]),|(block_or[8]),|(block_or[9]),|(block_or[10]),|(block_or[11]),|(block_or[12]),|(block_or[13]),|(block_or[14]),|(block_or[15])}),
        .y_i (out01_PE)
    );
    encoder16to4 enc02(
        .x_i (({|(block_or[0]),|(block_or[1]),|(block_or[2]),|(block_or[3]),|(block_or[4]),|(block_or[5]),|(block_or[6]),|(block_or[7]),|(block_or[8]),|(block_or[9]),|(block_or[10]),|(block_or[11]),|(block_or[12]),|(block_or[13]),|(block_or[14]),|(block_or[15])}) & (~out_pos_dec[0])),
        .y_i (out02_PE)
    );
    encoder16to4 enc03(
        .x_i (({|(block_or[0]),|(block_or[1]),|(block_or[2]),|(block_or[3]),|(block_or[4]),|(block_or[5]),|(block_or[6]),|(block_or[7]),|(block_or[8]),|(block_or[9]),|(block_or[10]),|(block_or[11]),|(block_or[12]),|(block_or[13]),|(block_or[14]),|(block_or[15])}) & (~out_pos_dec[1])),
        .y_i (out03_PE)
    );
    encoder16to4 enc04(
        .x_i (({|(block_or[0]),|(block_or[1]),|(block_or[2]),|(block_or[3]),|(block_or[4]),|(block_or[5]),|(block_or[6]),|(block_or[7]),|(block_or[8]),|(block_or[9]),|(block_or[10]),|(block_or[11]),|(block_or[12]),|(block_or[13]),|(block_or[14]),|(block_or[15])}) & (~out_pos_dec[2])),
        .y_i (out04_PE)
    );
    encoder16to4 enc05(
        .x_i (({|(block_or[0]),|(block_or[1]),|(block_or[2]),|(block_or[3]),|(block_or[4]),|(block_or[5]),|(block_or[6]),|(block_or[7]),|(block_or[8]),|(block_or[9]),|(block_or[10]),|(block_or[11]),|(block_or[12]),|(block_or[13]),|(block_or[14]),|(block_or[15])}) & (~out_pos_dec[3])),
        .y_i (out05_PE)
    );
    encoder16to4 enc06(
        .x_i (({|(block_or[0]),|(block_or[1]),|(block_or[2]),|(block_or[3]),|(block_or[4]),|(block_or[5]),|(block_or[6]),|(block_or[7]),|(block_or[8]),|(block_or[9]),|(block_or[10]),|(block_or[11]),|(block_or[12]),|(block_or[13]),|(block_or[14]),|(block_or[15])}) & (~out_pos_dec[4])),
        .y_i (out06_PE)
    );
    encoder16to4 enc07(
        .x_i (({|(block_or[0]),|(block_or[1]),|(block_or[2]),|(block_or[3]),|(block_or[4]),|(block_or[5]),|(block_or[6]),|(block_or[7]),|(block_or[8]),|(block_or[9]),|(block_or[10]),|(block_or[11]),|(block_or[12]),|(block_or[13]),|(block_or[14]),|(block_or[15])}) & (~out_pos_dec[5])),
        .y_i (out07_PE)
    );
    encoder16to4 enc08(
        .x_i (({|(block_or[0]),|(block_or[1]),|(block_or[2]),|(block_or[3]),|(block_or[4]),|(block_or[5]),|(block_or[6]),|(block_or[7]),|(block_or[8]),|(block_or[9]),|(block_or[10]),|(block_or[11]),|(block_or[12]),|(block_or[13]),|(block_or[14]),|(block_or[15])}) & (~out_pos_dec[6])),
        .y_i (out08_PE)
    );
    encoder16to4 enc09(
        .x_i (({|(block_or[0]),|(block_or[1]),|(block_or[2]),|(block_or[3]),|(block_or[4]),|(block_or[5]),|(block_or[6]),|(block_or[7]),|(block_or[8]),|(block_or[9]),|(block_or[10]),|(block_or[11]),|(block_or[12]),|(block_or[13]),|(block_or[14]),|(block_or[15])}) & (~out_pos_dec[7])),
        .y_i (out09_PE)
    );
    encoder16to4 enc10(
        .x_i (({|(block_or[0]),|(block_or[1]),|(block_or[2]),|(block_or[3]),|(block_or[4]),|(block_or[5]),|(block_or[6]),|(block_or[7]),|(block_or[8]),|(block_or[9]),|(block_or[10]),|(block_or[11]),|(block_or[12]),|(block_or[13]),|(block_or[14]),|(block_or[15])}) & (~out_pos_dec[8])),
        .y_i (out10_PE)
    );
    //module - second block encoder
    decoder4to16 posdec01(
        .x_i (out01_PE),
        .y_i (out_pos_dec[0])
    );   
    decoder4to16 posdec02(
        .x_i (out02_PE),
        .y_i (out_pos_dec[1])
    );
    decoder4to16 posdec03(
        .x_i (out03_PE),
        .y_i (out_pos_dec[2])
    );
    decoder4to16 posdec04(
        .x_i (out04_PE),
        .y_i (out_pos_dec[3])
    );
    decoder4to16 posdec05(
        .x_i (out05_PE),
        .y_i (out_pos_dec[4])
    );
    decoder4to16 posdec06(
        .x_i (out06_PE),
        .y_i (out_pos_dec[5])
    );
    decoder4to16 posdec07(
        .x_i (out07_PE),
        .y_i (out_pos_dec[6])
    );
    decoder4to16 posdec08(
        .x_i (out08_PE),
        .y_i (out_pos_dec[7])
    );
    decoder4to16 posdec09(
        .x_i (out09_PE),
        .y_i (out_pos_dec[8])
    );
    //sort
    assign block_or[0]  = {pin01_or[15],pin02_or[15],pin03_or[15],pin04_or[15],pin05_or[15],pin06_or[15],pin07_or[15],pin08_or[15],pin09_or[15],pin10_or[15]};
    assign block_or[1]  = {pin01_or[14],pin02_or[14],pin03_or[14],pin04_or[14],pin05_or[14],pin06_or[14],pin07_or[14],pin08_or[14],pin09_or[14],pin10_or[14]};
    assign block_or[2]  = {pin01_or[13],pin02_or[13],pin03_or[13],pin04_or[13],pin05_or[13],pin06_or[13],pin07_or[13],pin08_or[13],pin09_or[13],pin10_or[13]};
    assign block_or[3]  = {pin01_or[12],pin02_or[12],pin03_or[12],pin04_or[12],pin05_or[12],pin06_or[12],pin07_or[12],pin08_or[12],pin09_or[12],pin10_or[12]};
    assign block_or[4]  = {pin01_or[11],pin02_or[11],pin03_or[11],pin04_or[11],pin05_or[11],pin06_or[11],pin07_or[11],pin08_or[11],pin09_or[11],pin10_or[11]};
    assign block_or[5]  = {pin01_or[10],pin02_or[10],pin03_or[10],pin04_or[10],pin05_or[10],pin06_or[10],pin07_or[10],pin08_or[10],pin09_or[10],pin10_or[10]};
    assign block_or[6]  = {pin01_or[9],pin02_or[9],pin03_or[9],pin04_or[9],pin05_or[9],pin06_or[9],pin07_or[9],pin08_or[9],pin09_or[9],pin10_or[9]};
    assign block_or[7]  = {pin01_or[8],pin02_or[8],pin03_or[8],pin04_or[8],pin05_or[8],pin06_or[8],pin07_or[8],pin08_or[8],pin09_or[8],pin10_or[8]};
    assign block_or[8]  = {pin01_or[7],pin02_or[7],pin03_or[7],pin04_or[7],pin05_or[7],pin06_or[7],pin07_or[7],pin08_or[7],pin09_or[7],pin10_or[7]};
    assign block_or[9]  = {pin01_or[6],pin02_or[6],pin03_or[6],pin04_or[6],pin05_or[6],pin06_or[6],pin07_or[6],pin08_or[6],pin09_or[6],pin10_or[6]};
    assign block_or[10] = {pin01_or[5],pin02_or[5],pin03_or[5],pin04_or[5],pin05_or[5],pin06_or[5],pin07_or[5],pin08_or[5],pin09_or[5],pin10_or[5]};
    assign block_or[11] = {pin01_or[4],pin02_or[4],pin03_or[4],pin04_or[4],pin05_or[4],pin06_or[4],pin07_or[4],pin08_or[4],pin09_or[4],pin10_or[4]};
    assign block_or[12] = {pin01_or[3],pin02_or[3],pin03_or[3],pin04_or[3],pin05_or[3],pin06_or[3],pin07_or[3],pin08_or[3],pin09_or[3],pin10_or[3]};
    assign block_or[13] = {pin01_or[2],pin02_or[2],pin03_or[2],pin04_or[2],pin05_or[2],pin06_or[2],pin07_or[2],pin08_or[2],pin09_or[2],pin10_or[2]};
    assign block_or[14] = {pin01_or[1],pin02_or[1],pin03_or[1],pin04_or[1],pin05_or[1],pin06_or[1],pin07_or[1],pin08_or[1],pin09_or[1],pin10_or[1]};
    assign block_or[15] = {pin01_or[0],pin02_or[0],pin03_or[0],pin04_or[0],pin05_or[0],pin06_or[0],pin07_or[0],pin08_or[0],pin09_or[0],pin10_or[0]};
    //Save in RAM
    assign RAM[0] = out01_PE;
    assign RAM[1] = out02_PE;
    assign RAM[2] = out03_PE;
    assign RAM[3] = out04_PE;
    assign RAM[4] = out05_PE;
    assign RAM[5] = out06_PE;
    assign RAM[6] = out07_PE;
    assign RAM[7] = out08_PE;
    assign RAM[8] = out09_PE;
    assign RAM[9] = out10_PE;
    //find min1 and min2
    assign min1_o = 0;
    assign min2_o = 0;
    assign index_min1_o = 0;
    //display value
    always_comb begin
        $display("RAM[0]: %d",RAM[0]);
        $display("RAM[1]: %d",RAM[1]);
        $display("RAM[2]: %d",RAM[2]);
        $display("RAM[3]: %d",RAM[3]);
        $display("RAM[4]: %d",RAM[4]);
        $display("RAM[5]: %d",RAM[5]);
        $display("RAM[6]: %d",RAM[6]);
        $display("RAM[7]: %d",RAM[7]);
        $display("RAM[8]: %d",RAM[8]);
        $display("RAM[9]: %d",RAM[9]);
    end
endmodule : min_finder
