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
    vlSelf->M_i = VL_RAND_RESET_I(8);
    vlSelf->N_i = VL_RAND_RESET_I(8);
    vlSelf->result_o = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__tmp_sum = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__tmp_sum = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
