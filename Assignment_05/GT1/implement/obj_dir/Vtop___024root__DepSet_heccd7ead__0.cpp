// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__top__DOT__dut__DOT__tmp_min2;
    CData/*3:0*/ __Vdly__top__DOT__dut__DOT__tmp_index;
    CData/*3:0*/ __Vdly__top__DOT__dut__DOT__tmp_min1;
    CData/*1:0*/ __Vdly__top__DOT__dut__DOT__current_state;
    // Body
    __Vdly__top__DOT__dut__DOT__current_state = vlSelf->top__DOT__dut__DOT__current_state;
    __Vdly__top__DOT__dut__DOT__tmp_min1 = vlSelf->top__DOT__dut__DOT__tmp_min1;
    __Vdly__top__DOT__dut__DOT__tmp_index = vlSelf->top__DOT__dut__DOT__tmp_index;
    __Vdly__top__DOT__dut__DOT__tmp_min2 = vlSelf->top__DOT__dut__DOT__tmp_min2;
    if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
            vlSelf->min2_o = (0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__tmp_min) 
                                      >> 8U));
            vlSelf->min1_o = (0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__tmp_min) 
                                      >> 4U));
            vlSelf->index_min1_o = (0xfU & (IData)(vlSelf->top__DOT__dut__DOT__tmp_min));
        } else if ((0xaU > (IData)(vlSelf->top__DOT__dut__DOT__count))) {
            if ((((9U >= (IData)(vlSelf->top__DOT__dut__DOT__count))
                   ? vlSelf->top__DOT__dut__DOT__contain
                  [vlSelf->top__DOT__dut__DOT__count]
                   : (IData)(vlSelf->top__DOT__dut__DOT____Vxrand_h96ff575f__0)) 
                 < (IData)(vlSelf->top__DOT__dut__DOT__tmp_min1))) {
                __Vdly__top__DOT__dut__DOT__tmp_min2 
                    = vlSelf->top__DOT__dut__DOT__tmp_min1;
                __Vdly__top__DOT__dut__DOT__tmp_index 
                    = vlSelf->top__DOT__dut__DOT__count;
                __Vdly__top__DOT__dut__DOT__tmp_min1 
                    = ((9U >= (IData)(vlSelf->top__DOT__dut__DOT__count))
                        ? vlSelf->top__DOT__dut__DOT__contain
                       [vlSelf->top__DOT__dut__DOT__count]
                        : (IData)(vlSelf->top__DOT__dut__DOT____Vxrand_h96ff575f__1));
            } else if (((((9U >= (IData)(vlSelf->top__DOT__dut__DOT__count))
                           ? vlSelf->top__DOT__dut__DOT__contain
                          [vlSelf->top__DOT__dut__DOT__count]
                           : (IData)(vlSelf->top__DOT__dut__DOT____Vxrand_h96ff575f__2)) 
                         >= (IData)(vlSelf->top__DOT__dut__DOT__tmp_min1)) 
                        & (((9U >= (IData)(vlSelf->top__DOT__dut__DOT__count))
                             ? vlSelf->top__DOT__dut__DOT__contain
                            [vlSelf->top__DOT__dut__DOT__count]
                             : (IData)(vlSelf->top__DOT__dut__DOT____Vxrand_h96ff575f__3)) 
                           < (IData)(vlSelf->top__DOT__dut__DOT__tmp_min2)))) {
                __Vdly__top__DOT__dut__DOT__tmp_min2 
                    = ((9U >= (IData)(vlSelf->top__DOT__dut__DOT__count))
                        ? vlSelf->top__DOT__dut__DOT__contain
                       [vlSelf->top__DOT__dut__DOT__count]
                        : (IData)(vlSelf->top__DOT__dut__DOT____Vxrand_h96ff575f__4));
            }
            vlSelf->top__DOT__dut__DOT__count = (0xfU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__dut__DOT__count)));
        } else {
            vlSelf->top__DOT__dut__DOT__tmp_min = (
                                                   ((IData)(vlSelf->top__DOT__dut__DOT__tmp_min2) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->top__DOT__dut__DOT__tmp_min1) 
                                                       << 4U) 
                                                      | (IData)(vlSelf->top__DOT__dut__DOT__tmp_index)));
            __Vdly__top__DOT__dut__DOT__current_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        __Vdly__top__DOT__dut__DOT__tmp_min1 = vlSelf->top__DOT__dut__DOT__contain
            [0U];
        __Vdly__top__DOT__dut__DOT__tmp_min2 = vlSelf->top__DOT__dut__DOT__contain
            [1U];
        __Vdly__top__DOT__dut__DOT__current_state = 2U;
    } else {
        vlSelf->top__DOT__dut__DOT__count = 0U;
        __Vdly__top__DOT__dut__DOT__tmp_min1 = 0U;
        __Vdly__top__DOT__dut__DOT__tmp_min2 = 0U;
        __Vdly__top__DOT__dut__DOT__tmp_index = 0U;
        __Vdly__top__DOT__dut__DOT__current_state = 1U;
    }
    vlSelf->top__DOT__dut__DOT__tmp_min2 = __Vdly__top__DOT__dut__DOT__tmp_min2;
    vlSelf->top__DOT__dut__DOT__tmp_index = __Vdly__top__DOT__dut__DOT__tmp_index;
    vlSelf->top__DOT__dut__DOT__tmp_min1 = __Vdly__top__DOT__dut__DOT__tmp_min1;
    vlSelf->top__DOT__dut__DOT__current_state = __Vdly__top__DOT__dut__DOT__current_state;
    VL_WRITEF("MIN1 : %x\nMIN2 : %x\nINDEX: %x\n",4,
              vlSelf->min1_o,4,(IData)(vlSelf->min2_o),
              4,vlSelf->index_min1_o);
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
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
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->I0_i & 0xf0U))) {
        Verilated::overWidthError("I0_i");}
    if (VL_UNLIKELY((vlSelf->I1_i & 0xf0U))) {
        Verilated::overWidthError("I1_i");}
    if (VL_UNLIKELY((vlSelf->I2_i & 0xf0U))) {
        Verilated::overWidthError("I2_i");}
    if (VL_UNLIKELY((vlSelf->I3_i & 0xf0U))) {
        Verilated::overWidthError("I3_i");}
    if (VL_UNLIKELY((vlSelf->I4_i & 0xf0U))) {
        Verilated::overWidthError("I4_i");}
    if (VL_UNLIKELY((vlSelf->I5_i & 0xf0U))) {
        Verilated::overWidthError("I5_i");}
    if (VL_UNLIKELY((vlSelf->I6_i & 0xf0U))) {
        Verilated::overWidthError("I6_i");}
    if (VL_UNLIKELY((vlSelf->I7_i & 0xf0U))) {
        Verilated::overWidthError("I7_i");}
    if (VL_UNLIKELY((vlSelf->I8_i & 0xf0U))) {
        Verilated::overWidthError("I8_i");}
    if (VL_UNLIKELY((vlSelf->I9_i & 0xf0U))) {
        Verilated::overWidthError("I9_i");}
}
#endif  // VL_DEBUG
