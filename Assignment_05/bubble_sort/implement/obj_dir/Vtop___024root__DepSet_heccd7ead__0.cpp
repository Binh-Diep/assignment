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
    CData/*3:0*/ __Vdlyvdim0__top__DOT__dut__DOT__contain__v0;
    CData/*3:0*/ __Vdlyvval__top__DOT__dut__DOT__contain__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__contain__v0;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__dut__DOT__contain__v1;
    CData/*3:0*/ __Vdlyvval__top__DOT__dut__DOT__contain__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__contain__v1;
    CData/*3:0*/ __Vdly__top__DOT__dut__DOT__count_k;
    CData/*3:0*/ __Vdly__top__DOT__dut__DOT__count_i;
    CData/*2:0*/ __Vdly__top__DOT__dut__DOT__current_state;
    CData/*3:0*/ __Vdlyvval__top__DOT__dut__DOT__contain__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__dut__DOT__contain__v2;
    CData/*3:0*/ __Vdlyvval__top__DOT__dut__DOT__contain__v3;
    CData/*3:0*/ __Vdlyvval__top__DOT__dut__DOT__contain__v4;
    CData/*3:0*/ __Vdlyvval__top__DOT__dut__DOT__contain__v5;
    CData/*3:0*/ __Vdlyvval__top__DOT__dut__DOT__contain__v6;
    CData/*3:0*/ __Vdlyvval__top__DOT__dut__DOT__contain__v7;
    CData/*3:0*/ __Vdlyvval__top__DOT__dut__DOT__contain__v8;
    CData/*3:0*/ __Vdlyvval__top__DOT__dut__DOT__contain__v9;
    CData/*3:0*/ __Vdlyvval__top__DOT__dut__DOT__contain__v10;
    CData/*3:0*/ __Vdlyvval__top__DOT__dut__DOT__contain__v11;
    // Body
    __Vdly__top__DOT__dut__DOT__current_state = vlSelf->top__DOT__dut__DOT__current_state;
    __Vdly__top__DOT__dut__DOT__count_i = vlSelf->top__DOT__dut__DOT__count_i;
    __Vdly__top__DOT__dut__DOT__count_k = vlSelf->top__DOT__dut__DOT__count_k;
    __Vdlyvset__top__DOT__dut__DOT__contain__v0 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__contain__v1 = 0U;
    __Vdlyvset__top__DOT__dut__DOT__contain__v2 = 0U;
    if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        vlSelf->flag_sort = (IData)((0U == (3U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))));
    } else if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
            vlSelf->flag_sort = 0U;
        } else if ((0xaU > (IData)(vlSelf->top__DOT__dut__DOT__count_i))) {
            if (((IData)(vlSelf->top__DOT__dut__DOT__count_k) 
                 < (((IData)(0xaU) - (IData)(vlSelf->top__DOT__dut__DOT__count_i)) 
                    - (IData)(1U)))) {
                if ((((9U >= (IData)(vlSelf->top__DOT__dut__DOT__count_k))
                       ? vlSelf->top__DOT__dut__DOT__contain
                      [vlSelf->top__DOT__dut__DOT__count_k]
                       : (IData)(vlSelf->top__DOT__dut__DOT____Vxrand_h96ff575f__0)) 
                     > ((9U >= (0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__dut__DOT__count_k))))
                         ? vlSelf->top__DOT__dut__DOT__contain
                        [(0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__count_k)))]
                         : (IData)(vlSelf->top__DOT__dut__DOT____Vxrand_h96ff575f__1)))) {
                    vlSelf->top__DOT__dut__DOT____Vlvbound_h01f0098b__0 
                        = ((9U >= (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__dut__DOT__count_k))))
                            ? vlSelf->top__DOT__dut__DOT__contain
                           [(0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__count_k)))]
                            : (IData)(vlSelf->top__DOT__dut__DOT____Vxrand_h96ff575f__2));
                    if ((9U >= (IData)(vlSelf->top__DOT__dut__DOT__count_k))) {
                        __Vdlyvval__top__DOT__dut__DOT__contain__v0 
                            = vlSelf->top__DOT__dut__DOT____Vlvbound_h01f0098b__0;
                        __Vdlyvset__top__DOT__dut__DOT__contain__v0 = 1U;
                        __Vdlyvdim0__top__DOT__dut__DOT__contain__v0 
                            = vlSelf->top__DOT__dut__DOT__count_k;
                        vlSelf->top__DOT__dut__DOT____Vlvbound_h6d25959c__0 
                            = vlSelf->top__DOT__dut__DOT__contain
                            [vlSelf->top__DOT__dut__DOT__count_k];
                    } else {
                        vlSelf->top__DOT__dut__DOT____Vlvbound_h6d25959c__0 
                            = vlSelf->top__DOT__dut__DOT____Vxrand_h96ff575f__3;
                    }
                    if (VL_LIKELY((9U >= (0xfU & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__dut__DOT__count_k)))))) {
                        __Vdlyvval__top__DOT__dut__DOT__contain__v1 
                            = vlSelf->top__DOT__dut__DOT____Vlvbound_h6d25959c__0;
                        __Vdlyvset__top__DOT__dut__DOT__contain__v1 = 1U;
                        __Vdlyvdim0__top__DOT__dut__DOT__contain__v1 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__dut__DOT__count_k)));
                    }
                    __Vdly__top__DOT__dut__DOT__count_k 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__count_k)));
                } else {
                    __Vdly__top__DOT__dut__DOT__count_k 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__count_k)));
                }
            } else {
                __Vdly__top__DOT__dut__DOT__count_i 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__dut__DOT__count_i)));
                __Vdly__top__DOT__dut__DOT__count_k = 0U;
            }
        } else {
            __Vdly__top__DOT__dut__DOT__current_state = 4U;
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        __Vdly__top__DOT__dut__DOT__count_k = vlSelf->top__DOT__dut__DOT__count_i;
        __Vdly__top__DOT__dut__DOT__current_state = 2U;
        __Vdlyvval__top__DOT__dut__DOT__contain__v2 
            = vlSelf->I0_i;
        __Vdlyvset__top__DOT__dut__DOT__contain__v2 = 1U;
        __Vdlyvval__top__DOT__dut__DOT__contain__v3 
            = vlSelf->I1_i;
        __Vdlyvval__top__DOT__dut__DOT__contain__v4 
            = vlSelf->I2_i;
        __Vdlyvval__top__DOT__dut__DOT__contain__v5 
            = vlSelf->I3_i;
        __Vdlyvval__top__DOT__dut__DOT__contain__v6 
            = vlSelf->I4_i;
        __Vdlyvval__top__DOT__dut__DOT__contain__v7 
            = vlSelf->I5_i;
        __Vdlyvval__top__DOT__dut__DOT__contain__v8 
            = vlSelf->I6_i;
        __Vdlyvval__top__DOT__dut__DOT__contain__v9 
            = vlSelf->I7_i;
        __Vdlyvval__top__DOT__dut__DOT__contain__v10 
            = vlSelf->I8_i;
        __Vdlyvval__top__DOT__dut__DOT__contain__v11 
            = vlSelf->I9_i;
    } else {
        __Vdly__top__DOT__dut__DOT__count_i = 0U;
        __Vdly__top__DOT__dut__DOT__count_k = 0U;
        __Vdly__top__DOT__dut__DOT__current_state = 1U;
    }
    vlSelf->top__DOT__dut__DOT__count_k = __Vdly__top__DOT__dut__DOT__count_k;
    vlSelf->top__DOT__dut__DOT__count_i = __Vdly__top__DOT__dut__DOT__count_i;
    vlSelf->top__DOT__dut__DOT__current_state = __Vdly__top__DOT__dut__DOT__current_state;
    if (__Vdlyvset__top__DOT__dut__DOT__contain__v0) {
        vlSelf->top__DOT__dut__DOT__contain[__Vdlyvdim0__top__DOT__dut__DOT__contain__v0] 
            = __Vdlyvval__top__DOT__dut__DOT__contain__v0;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__contain__v1) {
        vlSelf->top__DOT__dut__DOT__contain[__Vdlyvdim0__top__DOT__dut__DOT__contain__v1] 
            = __Vdlyvval__top__DOT__dut__DOT__contain__v1;
    }
    if (__Vdlyvset__top__DOT__dut__DOT__contain__v2) {
        vlSelf->top__DOT__dut__DOT__contain[0U] = __Vdlyvval__top__DOT__dut__DOT__contain__v2;
        vlSelf->top__DOT__dut__DOT__contain[1U] = __Vdlyvval__top__DOT__dut__DOT__contain__v3;
        vlSelf->top__DOT__dut__DOT__contain[2U] = __Vdlyvval__top__DOT__dut__DOT__contain__v4;
        vlSelf->top__DOT__dut__DOT__contain[3U] = __Vdlyvval__top__DOT__dut__DOT__contain__v5;
        vlSelf->top__DOT__dut__DOT__contain[4U] = __Vdlyvval__top__DOT__dut__DOT__contain__v6;
        vlSelf->top__DOT__dut__DOT__contain[5U] = __Vdlyvval__top__DOT__dut__DOT__contain__v7;
        vlSelf->top__DOT__dut__DOT__contain[6U] = __Vdlyvval__top__DOT__dut__DOT__contain__v8;
        vlSelf->top__DOT__dut__DOT__contain[7U] = __Vdlyvval__top__DOT__dut__DOT__contain__v9;
        vlSelf->top__DOT__dut__DOT__contain[8U] = __Vdlyvval__top__DOT__dut__DOT__contain__v10;
        vlSelf->top__DOT__dut__DOT__contain[9U] = __Vdlyvval__top__DOT__dut__DOT__contain__v11;
    }
    VL_WRITEF("array = {%x,%x,%x,%x,%x,%x,%x,%x,%x,%x} --- count-i:  %x --- count-k: %x --- state: %b\n",
              4,vlSelf->top__DOT__dut__DOT__contain
              [0U],4,vlSelf->top__DOT__dut__DOT__contain
              [1U],4,vlSelf->top__DOT__dut__DOT__contain
              [2U],4,vlSelf->top__DOT__dut__DOT__contain
              [3U],4,vlSelf->top__DOT__dut__DOT__contain
              [4U],4,vlSelf->top__DOT__dut__DOT__contain
              [5U],4,vlSelf->top__DOT__dut__DOT__contain
              [6U],4,vlSelf->top__DOT__dut__DOT__contain
              [7U],4,vlSelf->top__DOT__dut__DOT__contain
              [8U],4,vlSelf->top__DOT__dut__DOT__contain
              [9U],4,vlSelf->top__DOT__dut__DOT__count_i,
              4,(IData)(vlSelf->top__DOT__dut__DOT__count_k),
              3,vlSelf->top__DOT__dut__DOT__current_state);
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
