// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__enable = (((~ (IData)(vlSelf->E1_ni)) 
                                           & (~ (IData)(vlSelf->E2_ni))) 
                                          & (IData)(vlSelf->E3_i));
    vlSelf->Q0_no = (1U & (~ ((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                                & (~ (IData)(vlSelf->A0_i))) 
                               & (~ (IData)(vlSelf->A1_i))) 
                              & (~ (IData)(vlSelf->A2_i)))));
    vlSelf->Q1_no = (1U & (~ ((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                                & (IData)(vlSelf->A0_i)) 
                               & (~ (IData)(vlSelf->A1_i))) 
                              & (~ (IData)(vlSelf->A2_i)))));
    vlSelf->Q2_no = (1U & (~ ((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                                & (~ (IData)(vlSelf->A0_i))) 
                               & (IData)(vlSelf->A1_i)) 
                              & (~ (IData)(vlSelf->A2_i)))));
    vlSelf->Q3_no = (1U & (~ ((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                                & (IData)(vlSelf->A0_i)) 
                               & (IData)(vlSelf->A1_i)) 
                              & (~ (IData)(vlSelf->A2_i)))));
    vlSelf->Q4_no = (1U & (~ ((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                                & (~ (IData)(vlSelf->A0_i))) 
                               & (~ (IData)(vlSelf->A1_i))) 
                              & (IData)(vlSelf->A2_i))));
    vlSelf->Q5_no = (1U & (~ ((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                                & (IData)(vlSelf->A0_i)) 
                               & (~ (IData)(vlSelf->A1_i))) 
                              & (IData)(vlSelf->A2_i))));
    vlSelf->Q6_no = (1U & (~ ((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                                & (~ (IData)(vlSelf->A0_i))) 
                               & (IData)(vlSelf->A1_i)) 
                              & (IData)(vlSelf->A2_i))));
    vlSelf->Q7_no = (1U & (~ ((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                                & (IData)(vlSelf->A0_i)) 
                               & (IData)(vlSelf->A1_i)) 
                              & (IData)(vlSelf->A2_i))));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->E1_ni & 0xfeU))) {
        Verilated::overWidthError("E1_ni");}
    if (VL_UNLIKELY((vlSelf->E2_ni & 0xfeU))) {
        Verilated::overWidthError("E2_ni");}
    if (VL_UNLIKELY((vlSelf->E3_i & 0xfeU))) {
        Verilated::overWidthError("E3_i");}
    if (VL_UNLIKELY((vlSelf->A0_i & 0xfeU))) {
        Verilated::overWidthError("A0_i");}
    if (VL_UNLIKELY((vlSelf->A1_i & 0xfeU))) {
        Verilated::overWidthError("A1_i");}
    if (VL_UNLIKELY((vlSelf->A2_i & 0xfeU))) {
        Verilated::overWidthError("A2_i");}
}
#endif  // VL_DEBUG
