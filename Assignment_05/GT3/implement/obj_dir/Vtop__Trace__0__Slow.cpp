// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+75,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+76,"I0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+77,"I1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+78,"I2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+79,"I3_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+80,"I4_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+81,"I5_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+82,"I6_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+83,"I7_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+84,"I8_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+85,"I9_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+86,"min1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+87,"min2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+88,"index_min1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+89,"N_number",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+90,"N_bit",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+75,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+76,"I0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+77,"I1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+78,"I2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+79,"I3_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+80,"I4_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+81,"I5_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+82,"I6_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+83,"I7_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+84,"I8_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+85,"I9_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+86,"min1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+87,"min2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+88,"index_min1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+89,"N_number",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+90,"N_bit",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+76,"I0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+77,"I1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+78,"I2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+79,"I3_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+80,"I4_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+81,"I5_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+82,"I6_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+83,"I7_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+84,"I8_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+85,"I9_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+86,"min1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+87,"min2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+88,"index_min1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1,"pin01_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+2,"pin02_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,"pin03_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+4,"pin04_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+5,"pin05_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,"pin06_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,"pin07_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,"pin08_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+9,"pin09_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+10,"pin10_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+11,"out01_PE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,"out02_PE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,"out03_PE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,"out04_PE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,"out05_PE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,"out06_PE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,"out07_PE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+18,"out08_PE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,"out09_PE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,"out10_PE",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+21+i*1,"out_pos_dec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 15,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+30+i*1,"block_or",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 9,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+46+i*1,"RAM",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 3,0);
    }
    tracep->pushNamePrefix("dec01 ");
    tracep->declBus(c+76,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec02 ");
    tracep->declBus(c+77,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+2,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec03 ");
    tracep->declBus(c+78,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+3,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec04 ");
    tracep->declBus(c+79,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+4,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec05 ");
    tracep->declBus(c+80,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+5,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec06 ");
    tracep->declBus(c+81,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+6,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec07 ");
    tracep->declBus(c+82,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+7,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec08 ");
    tracep->declBus(c+83,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+8,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec09 ");
    tracep->declBus(c+84,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+9,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dec10 ");
    tracep->declBus(c+85,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+10,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("enc01 ");
    tracep->declBus(c+56,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+11,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("enc02 ");
    tracep->declBus(c+57,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+12,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("enc03 ");
    tracep->declBus(c+58,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+13,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("enc04 ");
    tracep->declBus(c+59,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+14,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("enc05 ");
    tracep->declBus(c+60,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+15,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("enc06 ");
    tracep->declBus(c+61,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+16,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("enc07 ");
    tracep->declBus(c+62,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+17,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("enc08 ");
    tracep->declBus(c+63,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+18,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("enc09 ");
    tracep->declBus(c+64,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+19,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("enc10 ");
    tracep->declBus(c+65,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+20,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("posdec01 ");
    tracep->declBus(c+11,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+66,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("posdec02 ");
    tracep->declBus(c+12,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+67,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("posdec03 ");
    tracep->declBus(c+13,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+68,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("posdec04 ");
    tracep->declBus(c+14,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+69,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("posdec05 ");
    tracep->declBus(c+15,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+70,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("posdec06 ");
    tracep->declBus(c+16,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+71,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("posdec07 ");
    tracep->declBus(c+17,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+72,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("posdec08 ");
    tracep->declBus(c+18,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+73,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("posdec09 ");
    tracep->declBus(c+19,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+74,"y_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->top__DOT__dut__DOT__pin01_or),16);
    bufp->fullSData(oldp+2,(vlSelf->top__DOT__dut__DOT__pin02_or),16);
    bufp->fullSData(oldp+3,(vlSelf->top__DOT__dut__DOT__pin03_or),16);
    bufp->fullSData(oldp+4,(vlSelf->top__DOT__dut__DOT__pin04_or),16);
    bufp->fullSData(oldp+5,(vlSelf->top__DOT__dut__DOT__pin05_or),16);
    bufp->fullSData(oldp+6,(vlSelf->top__DOT__dut__DOT__pin06_or),16);
    bufp->fullSData(oldp+7,(vlSelf->top__DOT__dut__DOT__pin07_or),16);
    bufp->fullSData(oldp+8,(vlSelf->top__DOT__dut__DOT__pin08_or),16);
    bufp->fullSData(oldp+9,(vlSelf->top__DOT__dut__DOT__pin09_or),16);
    bufp->fullSData(oldp+10,(vlSelf->top__DOT__dut__DOT__pin10_or),16);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__dut__DOT__out01_PE),4);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__dut__DOT__out02_PE),4);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__dut__DOT__out03_PE),4);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__dut__DOT__out04_PE),4);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__dut__DOT__out05_PE),4);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__dut__DOT__out06_PE),4);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__dut__DOT__out07_PE),4);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__dut__DOT__out08_PE),4);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__dut__DOT__out09_PE),4);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__dut__DOT__out10_PE),4);
    bufp->fullSData(oldp+21,(vlSelf->top__DOT__dut__DOT__out_pos_dec[0]),16);
    bufp->fullSData(oldp+22,(vlSelf->top__DOT__dut__DOT__out_pos_dec[1]),16);
    bufp->fullSData(oldp+23,(vlSelf->top__DOT__dut__DOT__out_pos_dec[2]),16);
    bufp->fullSData(oldp+24,(vlSelf->top__DOT__dut__DOT__out_pos_dec[3]),16);
    bufp->fullSData(oldp+25,(vlSelf->top__DOT__dut__DOT__out_pos_dec[4]),16);
    bufp->fullSData(oldp+26,(vlSelf->top__DOT__dut__DOT__out_pos_dec[5]),16);
    bufp->fullSData(oldp+27,(vlSelf->top__DOT__dut__DOT__out_pos_dec[6]),16);
    bufp->fullSData(oldp+28,(vlSelf->top__DOT__dut__DOT__out_pos_dec[7]),16);
    bufp->fullSData(oldp+29,(vlSelf->top__DOT__dut__DOT__out_pos_dec[8]),16);
    bufp->fullSData(oldp+30,(vlSelf->top__DOT__dut__DOT__block_or[0]),10);
    bufp->fullSData(oldp+31,(vlSelf->top__DOT__dut__DOT__block_or[1]),10);
    bufp->fullSData(oldp+32,(vlSelf->top__DOT__dut__DOT__block_or[2]),10);
    bufp->fullSData(oldp+33,(vlSelf->top__DOT__dut__DOT__block_or[3]),10);
    bufp->fullSData(oldp+34,(vlSelf->top__DOT__dut__DOT__block_or[4]),10);
    bufp->fullSData(oldp+35,(vlSelf->top__DOT__dut__DOT__block_or[5]),10);
    bufp->fullSData(oldp+36,(vlSelf->top__DOT__dut__DOT__block_or[6]),10);
    bufp->fullSData(oldp+37,(vlSelf->top__DOT__dut__DOT__block_or[7]),10);
    bufp->fullSData(oldp+38,(vlSelf->top__DOT__dut__DOT__block_or[8]),10);
    bufp->fullSData(oldp+39,(vlSelf->top__DOT__dut__DOT__block_or[9]),10);
    bufp->fullSData(oldp+40,(vlSelf->top__DOT__dut__DOT__block_or[10]),10);
    bufp->fullSData(oldp+41,(vlSelf->top__DOT__dut__DOT__block_or[11]),10);
    bufp->fullSData(oldp+42,(vlSelf->top__DOT__dut__DOT__block_or[12]),10);
    bufp->fullSData(oldp+43,(vlSelf->top__DOT__dut__DOT__block_or[13]),10);
    bufp->fullSData(oldp+44,(vlSelf->top__DOT__dut__DOT__block_or[14]),10);
    bufp->fullSData(oldp+45,(vlSelf->top__DOT__dut__DOT__block_or[15]),10);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__dut__DOT__RAM[0]),4);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__dut__DOT__RAM[1]),4);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__dut__DOT__RAM[2]),4);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__dut__DOT__RAM[3]),4);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__dut__DOT__RAM[4]),4);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__dut__DOT__RAM[5]),4);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__dut__DOT__RAM[6]),4);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__dut__DOT__RAM[7]),4);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__dut__DOT__RAM[8]),4);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__dut__DOT__RAM[9]),4);
    bufp->fullSData(oldp+56,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i),16);
    bufp->fullSData(oldp+57,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i),16);
    bufp->fullSData(oldp+58,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i),16);
    bufp->fullSData(oldp+59,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i),16);
    bufp->fullSData(oldp+60,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i),16);
    bufp->fullSData(oldp+61,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i),16);
    bufp->fullSData(oldp+62,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i),16);
    bufp->fullSData(oldp+63,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i),16);
    bufp->fullSData(oldp+64,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i),16);
    bufp->fullSData(oldp+65,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i),16);
    bufp->fullSData(oldp+66,(vlSelf->top__DOT__dut__DOT____Vcellout__posdec01__y_i),16);
    bufp->fullSData(oldp+67,(vlSelf->top__DOT__dut__DOT____Vcellout__posdec02__y_i),16);
    bufp->fullSData(oldp+68,(vlSelf->top__DOT__dut__DOT____Vcellout__posdec03__y_i),16);
    bufp->fullSData(oldp+69,(vlSelf->top__DOT__dut__DOT____Vcellout__posdec04__y_i),16);
    bufp->fullSData(oldp+70,(vlSelf->top__DOT__dut__DOT____Vcellout__posdec05__y_i),16);
    bufp->fullSData(oldp+71,(vlSelf->top__DOT__dut__DOT____Vcellout__posdec06__y_i),16);
    bufp->fullSData(oldp+72,(vlSelf->top__DOT__dut__DOT____Vcellout__posdec07__y_i),16);
    bufp->fullSData(oldp+73,(vlSelf->top__DOT__dut__DOT____Vcellout__posdec08__y_i),16);
    bufp->fullSData(oldp+74,(vlSelf->top__DOT__dut__DOT____Vcellout__posdec09__y_i),16);
    bufp->fullBit(oldp+75,(vlSelf->clk_i));
    bufp->fullCData(oldp+76,(vlSelf->I0_i),4);
    bufp->fullCData(oldp+77,(vlSelf->I1_i),4);
    bufp->fullCData(oldp+78,(vlSelf->I2_i),4);
    bufp->fullCData(oldp+79,(vlSelf->I3_i),4);
    bufp->fullCData(oldp+80,(vlSelf->I4_i),4);
    bufp->fullCData(oldp+81,(vlSelf->I5_i),4);
    bufp->fullCData(oldp+82,(vlSelf->I6_i),4);
    bufp->fullCData(oldp+83,(vlSelf->I7_i),4);
    bufp->fullCData(oldp+84,(vlSelf->I8_i),4);
    bufp->fullCData(oldp+85,(vlSelf->I9_i),4);
    bufp->fullCData(oldp+86,(vlSelf->min1_o),4);
    bufp->fullCData(oldp+87,(vlSelf->min2_o),4);
    bufp->fullCData(oldp+88,(vlSelf->index_min1_o),4);
    bufp->fullIData(oldp+89,(0xaU),32);
    bufp->fullIData(oldp+90,(4U),32);
}
