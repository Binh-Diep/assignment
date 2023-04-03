#define MAX_SIM 60
void set_random(Vtop *dut, vluint64_t sim_unit){
    dut -> I0_i = 0x4;
    dut -> I1_i = 0x5;
    dut -> I2_i = 0x4;
    dut -> I3_i = 0x1;
    dut -> I4_i = 0x5;
    dut -> I5_i = 0x6;
    dut -> I6_i = 0x2;
    dut -> I7_i = 0x8;
    dut -> I8_i = 0x9;
    dut -> I9_i = 0x5;
}
