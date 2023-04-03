// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    VL_WRITEF("SUM: %b -- state: %b\n",9,vlSelf->result_o,
              2,(IData)(vlSelf->top__DOT__dut__DOT__current_state));
    vlSelf->top__DOT__dut__DOT__full_adder__DOT__sum 
        = (((IData)(vlSelf->top__DOT__dut__DOT__out_regA) 
            ^ (IData)(vlSelf->top__DOT__dut__DOT__out_regB)) 
           ^ (IData)(vlSelf->top__DOT__dut__DOT__Q_FF));
    vlSelf->top__DOT__dut__DOT__full_adder__DOT__carry 
        = (((IData)(vlSelf->top__DOT__dut__DOT__out_regA) 
            & (IData)(vlSelf->top__DOT__dut__DOT__out_regB)) 
           | (((IData)(vlSelf->top__DOT__dut__DOT__out_regA) 
               ^ (IData)(vlSelf->top__DOT__dut__DOT__out_regB)) 
              & (IData)(vlSelf->top__DOT__dut__DOT__Q_FF)));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
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
    vlSelf->M_i = VL_RAND_RESET_I(8);
    vlSelf->N_i = VL_RAND_RESET_I(8);
    vlSelf->result_o = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__dut__DOT__register_A = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__dut__DOT__register_B = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__dut__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__out_regA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__out_regB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__Q_FF = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__full_adder__DOT__sum = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__full_adder__DOT__carry = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
