// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->min1_o = 0U;
    vlSelf->min2_o = 0U;
    vlSelf->index_min1_o = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
}

void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->I0_i = VL_RAND_RESET_I(4);
    vlSelf->I1_i = VL_RAND_RESET_I(4);
    vlSelf->I2_i = VL_RAND_RESET_I(4);
    vlSelf->I3_i = VL_RAND_RESET_I(4);
    vlSelf->I4_i = VL_RAND_RESET_I(4);
    vlSelf->I5_i = VL_RAND_RESET_I(4);
    vlSelf->I6_i = VL_RAND_RESET_I(4);
    vlSelf->I7_i = VL_RAND_RESET_I(4);
    vlSelf->I8_i = VL_RAND_RESET_I(4);
    vlSelf->I9_i = VL_RAND_RESET_I(4);
    vlSelf->min1_o = VL_RAND_RESET_I(4);
    vlSelf->min2_o = VL_RAND_RESET_I(4);
    vlSelf->index_min1_o = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__pin01_or = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT__pin02_or = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT__pin03_or = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT__pin04_or = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT__pin05_or = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT__pin06_or = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT__pin07_or = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT__pin08_or = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT__pin09_or = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT__pin10_or = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT__out01_PE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__out02_PE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__out03_PE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__out04_PE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__out05_PE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__out06_PE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__out07_PE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__out08_PE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__out09_PE = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__out10_PE = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<9; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__out_pos_dec[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__block_or[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__RAM[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT____Vcellout__posdec01__y_i = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT____Vcellout__posdec02__y_i = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT____Vcellout__posdec03__y_i = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT____Vcellout__posdec04__y_i = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT____Vcellout__posdec05__y_i = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT____Vcellout__posdec06__y_i = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT____Vcellout__posdec07__y_i = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT____Vcellout__posdec08__y_i = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__dut__DOT____Vcellout__posdec09__y_i = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<9; ++__Vi0) {
        vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
