// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->top__DOT__dut__DOT__pin01_or),16);
        bufp->chgSData(oldp+1,(vlSelf->top__DOT__dut__DOT__pin02_or),16);
        bufp->chgSData(oldp+2,(vlSelf->top__DOT__dut__DOT__pin03_or),16);
        bufp->chgSData(oldp+3,(vlSelf->top__DOT__dut__DOT__pin04_or),16);
        bufp->chgSData(oldp+4,(vlSelf->top__DOT__dut__DOT__pin05_or),16);
        bufp->chgSData(oldp+5,(vlSelf->top__DOT__dut__DOT__pin06_or),16);
        bufp->chgSData(oldp+6,(vlSelf->top__DOT__dut__DOT__pin07_or),16);
        bufp->chgSData(oldp+7,(vlSelf->top__DOT__dut__DOT__pin08_or),16);
        bufp->chgSData(oldp+8,(vlSelf->top__DOT__dut__DOT__pin09_or),16);
        bufp->chgSData(oldp+9,(vlSelf->top__DOT__dut__DOT__pin10_or),16);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__dut__DOT__out01_PE),4);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__dut__DOT__out02_PE),4);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__dut__DOT__out03_PE),4);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__dut__DOT__out04_PE),4);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__dut__DOT__out05_PE),4);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__dut__DOT__out06_PE),4);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__dut__DOT__out07_PE),4);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__dut__DOT__out08_PE),4);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__dut__DOT__out09_PE),4);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__dut__DOT__out10_PE),4);
        bufp->chgSData(oldp+20,(vlSelf->top__DOT__dut__DOT__out_pos_dec[0]),16);
        bufp->chgSData(oldp+21,(vlSelf->top__DOT__dut__DOT__out_pos_dec[1]),16);
        bufp->chgSData(oldp+22,(vlSelf->top__DOT__dut__DOT__out_pos_dec[2]),16);
        bufp->chgSData(oldp+23,(vlSelf->top__DOT__dut__DOT__out_pos_dec[3]),16);
        bufp->chgSData(oldp+24,(vlSelf->top__DOT__dut__DOT__out_pos_dec[4]),16);
        bufp->chgSData(oldp+25,(vlSelf->top__DOT__dut__DOT__out_pos_dec[5]),16);
        bufp->chgSData(oldp+26,(vlSelf->top__DOT__dut__DOT__out_pos_dec[6]),16);
        bufp->chgSData(oldp+27,(vlSelf->top__DOT__dut__DOT__out_pos_dec[7]),16);
        bufp->chgSData(oldp+28,(vlSelf->top__DOT__dut__DOT__out_pos_dec[8]),16);
        bufp->chgSData(oldp+29,(vlSelf->top__DOT__dut__DOT__block_or[0]),10);
        bufp->chgSData(oldp+30,(vlSelf->top__DOT__dut__DOT__block_or[1]),10);
        bufp->chgSData(oldp+31,(vlSelf->top__DOT__dut__DOT__block_or[2]),10);
        bufp->chgSData(oldp+32,(vlSelf->top__DOT__dut__DOT__block_or[3]),10);
        bufp->chgSData(oldp+33,(vlSelf->top__DOT__dut__DOT__block_or[4]),10);
        bufp->chgSData(oldp+34,(vlSelf->top__DOT__dut__DOT__block_or[5]),10);
        bufp->chgSData(oldp+35,(vlSelf->top__DOT__dut__DOT__block_or[6]),10);
        bufp->chgSData(oldp+36,(vlSelf->top__DOT__dut__DOT__block_or[7]),10);
        bufp->chgSData(oldp+37,(vlSelf->top__DOT__dut__DOT__block_or[8]),10);
        bufp->chgSData(oldp+38,(vlSelf->top__DOT__dut__DOT__block_or[9]),10);
        bufp->chgSData(oldp+39,(vlSelf->top__DOT__dut__DOT__block_or[10]),10);
        bufp->chgSData(oldp+40,(vlSelf->top__DOT__dut__DOT__block_or[11]),10);
        bufp->chgSData(oldp+41,(vlSelf->top__DOT__dut__DOT__block_or[12]),10);
        bufp->chgSData(oldp+42,(vlSelf->top__DOT__dut__DOT__block_or[13]),10);
        bufp->chgSData(oldp+43,(vlSelf->top__DOT__dut__DOT__block_or[14]),10);
        bufp->chgSData(oldp+44,(vlSelf->top__DOT__dut__DOT__block_or[15]),10);
        bufp->chgCData(oldp+45,(vlSelf->top__DOT__dut__DOT__RAM[0]),4);
        bufp->chgCData(oldp+46,(vlSelf->top__DOT__dut__DOT__RAM[1]),4);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__dut__DOT__RAM[2]),4);
        bufp->chgCData(oldp+48,(vlSelf->top__DOT__dut__DOT__RAM[3]),4);
        bufp->chgCData(oldp+49,(vlSelf->top__DOT__dut__DOT__RAM[4]),4);
        bufp->chgCData(oldp+50,(vlSelf->top__DOT__dut__DOT__RAM[5]),4);
        bufp->chgCData(oldp+51,(vlSelf->top__DOT__dut__DOT__RAM[6]),4);
        bufp->chgCData(oldp+52,(vlSelf->top__DOT__dut__DOT__RAM[7]),4);
        bufp->chgCData(oldp+53,(vlSelf->top__DOT__dut__DOT__RAM[8]),4);
        bufp->chgCData(oldp+54,(vlSelf->top__DOT__dut__DOT__RAM[9]),4);
        bufp->chgSData(oldp+55,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i),16);
        bufp->chgSData(oldp+56,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i),16);
        bufp->chgSData(oldp+57,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i),16);
        bufp->chgSData(oldp+58,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i),16);
        bufp->chgSData(oldp+59,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i),16);
        bufp->chgSData(oldp+60,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i),16);
        bufp->chgSData(oldp+61,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i),16);
        bufp->chgSData(oldp+62,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i),16);
        bufp->chgSData(oldp+63,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i),16);
        bufp->chgSData(oldp+64,(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i),16);
        bufp->chgSData(oldp+65,(vlSelf->top__DOT__dut__DOT____Vcellout__posdec01__y_i),16);
        bufp->chgSData(oldp+66,(vlSelf->top__DOT__dut__DOT____Vcellout__posdec02__y_i),16);
        bufp->chgSData(oldp+67,(vlSelf->top__DOT__dut__DOT____Vcellout__posdec03__y_i),16);
        bufp->chgSData(oldp+68,(vlSelf->top__DOT__dut__DOT____Vcellout__posdec04__y_i),16);
        bufp->chgSData(oldp+69,(vlSelf->top__DOT__dut__DOT____Vcellout__posdec05__y_i),16);
        bufp->chgSData(oldp+70,(vlSelf->top__DOT__dut__DOT____Vcellout__posdec06__y_i),16);
        bufp->chgSData(oldp+71,(vlSelf->top__DOT__dut__DOT____Vcellout__posdec07__y_i),16);
        bufp->chgSData(oldp+72,(vlSelf->top__DOT__dut__DOT____Vcellout__posdec08__y_i),16);
        bufp->chgSData(oldp+73,(vlSelf->top__DOT__dut__DOT____Vcellout__posdec09__y_i),16);
    }
    bufp->chgBit(oldp+74,(vlSelf->clk_i));
    bufp->chgCData(oldp+75,(vlSelf->I0_i),4);
    bufp->chgCData(oldp+76,(vlSelf->I1_i),4);
    bufp->chgCData(oldp+77,(vlSelf->I2_i),4);
    bufp->chgCData(oldp+78,(vlSelf->I3_i),4);
    bufp->chgCData(oldp+79,(vlSelf->I4_i),4);
    bufp->chgCData(oldp+80,(vlSelf->I5_i),4);
    bufp->chgCData(oldp+81,(vlSelf->I6_i),4);
    bufp->chgCData(oldp+82,(vlSelf->I7_i),4);
    bufp->chgCData(oldp+83,(vlSelf->I8_i),4);
    bufp->chgCData(oldp+84,(vlSelf->I9_i),4);
    bufp->chgCData(oldp+85,(vlSelf->min1_o),4);
    bufp->chgCData(oldp+86,(vlSelf->min2_o),4);
    bufp->chgCData(oldp+87,(vlSelf->index_min1_o),4);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
