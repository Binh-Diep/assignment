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
    vlSelf->top__DOT__dut__DOT____Vxrand_h96ff575f__4 
        = (0xfU & VL_RAND_RESET_I(4));
    vlSelf->top__DOT__dut__DOT____Vxrand_h96ff575f__3 
        = (0xfU & VL_RAND_RESET_I(4));
    vlSelf->top__DOT__dut__DOT____Vxrand_h96ff575f__2 
        = (0xfU & VL_RAND_RESET_I(4));
    vlSelf->top__DOT__dut__DOT____Vxrand_h96ff575f__1 
        = (0xfU & VL_RAND_RESET_I(4));
    vlSelf->top__DOT__dut__DOT____Vxrand_h96ff575f__0 
        = (0xfU & VL_RAND_RESET_I(4));
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__dut__DOT__contain[0U] = vlSelf->I0_i;
    vlSelf->top__DOT__dut__DOT__contain[1U] = vlSelf->I1_i;
    vlSelf->top__DOT__dut__DOT__contain[2U] = vlSelf->I2_i;
    vlSelf->top__DOT__dut__DOT__contain[3U] = vlSelf->I3_i;
    vlSelf->top__DOT__dut__DOT__contain[4U] = vlSelf->I4_i;
    vlSelf->top__DOT__dut__DOT__contain[5U] = vlSelf->I5_i;
    vlSelf->top__DOT__dut__DOT__contain[6U] = vlSelf->I6_i;
    vlSelf->top__DOT__dut__DOT__contain[7U] = vlSelf->I7_i;
    vlSelf->top__DOT__dut__DOT__contain[8U] = vlSelf->I8_i;
    vlSelf->top__DOT__dut__DOT__contain[9U] = vlSelf->I9_i;
    VL_WRITEF("MIN1 : %x\nMIN2 : %x\nINDEX: %x\n",4,
              vlSelf->min1_o,4,(IData)(vlSelf->min2_o),
              4,vlSelf->index_min1_o);
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    Vtop___024root___initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
    vlSelf->top__DOT__dut__DOT____Vxrand_h96ff575f__4 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT____Vxrand_h96ff575f__3 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT____Vxrand_h96ff575f__2 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT____Vxrand_h96ff575f__1 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT____Vxrand_h96ff575f__0 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__tmp_min = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__dut__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__tmp_min1 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__tmp_min2 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__tmp_index = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__contain[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->top__DOT__dut__DOT__current_state = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
