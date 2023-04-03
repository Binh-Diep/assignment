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
    VL_WRITEF("result: %b.%b --- state: %b\n",17,(0x1ffffU 
                                                  & (vlSelf->sqrt_o 
                                                     >> 5U)),
              5,(0x1fU & vlSelf->sqrt_o),4,(IData)(vlSelf->top__DOT__dut__DOT__current_state));
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
    vlSelf->x_i = VL_RAND_RESET_I(16);
    vlSelf->y_i = VL_RAND_RESET_I(16);
    vlSelf->sqrt_o = VL_RAND_RESET_I(22);
    vlSelf->top__DOT__dut__DOT__couple = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__dut__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__dut__DOT__sq_root = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__dut__DOT__sq_x = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__sq_y = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__dut__DOT__result_add = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__dut__DOT__cur_val = VL_RAND_RESET_Q(34);
    vlSelf->top__DOT__dut__DOT__randicand = VL_RAND_RESET_Q(36);
    vlSelf->top__DOT__dut__DOT__test_sign = VL_RAND_RESET_Q(34);
    vlSelf->top__DOT__dut__DOT__current_state = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
