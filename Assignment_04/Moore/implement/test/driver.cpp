#define MAX_SIM 40
void set_random(Vtop *dut, vluint64_t sim_unit){
    dut -> rst_ni   = (sim_unit > 2);
    dut -> string_i = rand()%2;
}
