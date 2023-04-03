#define MAX_SIM 20
void set_random(Vtop *dut, vluint64_t sim_unit) {
    dut -> E1_ni = 0b0;
    dut -> E2_ni = 0b0;
    dut -> E3_i  = 0b1;
    dut -> A0_i  = rand()%2;
    dut -> A1_i  = rand()%2;
    dut -> A2_i  = rand()%2;
}
