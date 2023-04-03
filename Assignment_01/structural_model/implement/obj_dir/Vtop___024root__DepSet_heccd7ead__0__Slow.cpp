// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
}

void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
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
    vlSelf->E1_ni = VL_RAND_RESET_I(1);
    vlSelf->E2_ni = VL_RAND_RESET_I(1);
    vlSelf->E3_i = VL_RAND_RESET_I(1);
    vlSelf->A0_i = VL_RAND_RESET_I(1);
    vlSelf->A1_i = VL_RAND_RESET_I(1);
    vlSelf->A2_i = VL_RAND_RESET_I(1);
    vlSelf->Q0_no = VL_RAND_RESET_I(1);
    vlSelf->Q1_no = VL_RAND_RESET_I(1);
    vlSelf->Q2_no = VL_RAND_RESET_I(1);
    vlSelf->Q3_no = VL_RAND_RESET_I(1);
    vlSelf->Q4_no = VL_RAND_RESET_I(1);
    vlSelf->Q5_no = VL_RAND_RESET_I(1);
    vlSelf->Q6_no = VL_RAND_RESET_I(1);
    vlSelf->Q7_no = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__enable = VL_RAND_RESET_I(1);
}
