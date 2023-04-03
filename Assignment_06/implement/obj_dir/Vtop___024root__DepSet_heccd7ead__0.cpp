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
    SData/*15:0*/ __Vdly__top__DOT__dut__DOT__tmp_x;
    SData/*15:0*/ __Vdly__top__DOT__dut__DOT__log2_m;
    CData/*2:0*/ __Vdly__top__DOT__dut__DOT__current_state;
    CData/*3:0*/ __Vdly__top__DOT__dut__DOT__count;
    SData/*15:0*/ __Vdly__top__DOT__dut__DOT__index;
    // Body
    __Vdly__top__DOT__dut__DOT__index = vlSelf->top__DOT__dut__DOT__index;
    __Vdly__top__DOT__dut__DOT__current_state = vlSelf->top__DOT__dut__DOT__current_state;
    __Vdly__top__DOT__dut__DOT__log2_m = vlSelf->top__DOT__dut__DOT__log2_m;
    __Vdly__top__DOT__dut__DOT__tmp_x = vlSelf->top__DOT__dut__DOT__tmp_x;
    __Vdly__top__DOT__dut__DOT__count = vlSelf->top__DOT__dut__DOT__count;
    if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
            vlSelf->y_o = ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))
                            ? 0U : (0x1ffU & ((IData)(vlSelf->top__DOT__dut__DOT__tmp_y) 
                                              >> 7U)));
        } else if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
            if ((0xcU > (IData)(vlSelf->top__DOT__dut__DOT__count))) {
                if ((2U <= (0xffffU & ((IData)(vlSelf->top__DOT__dut__DOT__tmp_x) 
                                       >> 0xcU)))) {
                    __Vdly__top__DOT__dut__DOT__tmp_x 
                        = (0xffffU & ((IData)(vlSelf->top__DOT__dut__DOT__tmp_x) 
                                      >> 1U));
                    __Vdly__top__DOT__dut__DOT__log2_m 
                        = ((IData)(__Vdly__top__DOT__dut__DOT__log2_m) 
                           | (0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->top__DOT__dut__DOT__count))));
                } else {
                    __Vdly__top__DOT__dut__DOT__log2_m 
                        = ((~ ((IData)(1U) << (IData)(vlSelf->top__DOT__dut__DOT__count))) 
                           & (IData)(__Vdly__top__DOT__dut__DOT__log2_m));
                }
                __Vdly__top__DOT__dut__DOT__current_state = 3U;
                __Vdly__top__DOT__dut__DOT__count = 
                    (0xfU & ((IData)(vlSelf->top__DOT__dut__DOT__count) 
                             - (IData)(1U)));
            }
            if ((0xfU == (IData)(vlSelf->top__DOT__dut__DOT__count))) {
                vlSelf->top__DOT__dut__DOT__tmp_y = 
                    (0xffffU & ((IData)(vlSelf->top__DOT__dut__DOT__index) 
                                + (IData)(vlSelf->top__DOT__dut__DOT__log2_m)));
                __Vdly__top__DOT__dut__DOT__current_state = 6U;
            }
        } else {
            __Vdly__top__DOT__dut__DOT__tmp_x = (0xffffU 
                                                 & (vlSelf->top__DOT__dut__DOT__tmp_sq 
                                                    >> 0xcU));
            __Vdly__top__DOT__dut__DOT__current_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
            vlSelf->top__DOT__dut__DOT__tmp_sq = (0x3fffffffU 
                                                  & ((IData)(vlSelf->top__DOT__dut__DOT__tmp_x) 
                                                     * (IData)(vlSelf->top__DOT__dut__DOT__tmp_x)));
            __Vdly__top__DOT__dut__DOT__current_state = 4U;
        } else if ((1U < (0xffffU & ((IData)(vlSelf->top__DOT__dut__DOT__tmp_x) 
                                     >> 0xcU)))) {
            __Vdly__top__DOT__dut__DOT__tmp_x = (0xffffU 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__tmp_x) 
                                                    >> 1U));
            __Vdly__top__DOT__dut__DOT__index = (0xffffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__dut__DOT__index)));
        } else if ((0U == (0xffffU & ((IData)(vlSelf->top__DOT__dut__DOT__tmp_x) 
                                      >> 0xcU)))) {
            __Vdly__top__DOT__dut__DOT__tmp_x = (0xffffU 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__tmp_x) 
                                                    << 1U));
            __Vdly__top__DOT__dut__DOT__index = (0xffffU 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__index) 
                                                    - (IData)(1U)));
        } else {
            __Vdly__top__DOT__dut__DOT__index = (0xffffU 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__index) 
                                                    << 0xcU));
            __Vdly__top__DOT__dut__DOT__current_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        __Vdly__top__DOT__dut__DOT__tmp_x = vlSelf->x_i;
        __Vdly__top__DOT__dut__DOT__current_state = 2U;
    } else {
        __Vdly__top__DOT__dut__DOT__count = 0xbU;
        __Vdly__top__DOT__dut__DOT__index = 0U;
        __Vdly__top__DOT__dut__DOT__log2_m = 0U;
        __Vdly__top__DOT__dut__DOT__current_state = 1U;
    }
    vlSelf->top__DOT__dut__DOT__tmp_x = __Vdly__top__DOT__dut__DOT__tmp_x;
    vlSelf->top__DOT__dut__DOT__log2_m = __Vdly__top__DOT__dut__DOT__log2_m;
    vlSelf->top__DOT__dut__DOT__current_state = __Vdly__top__DOT__dut__DOT__current_state;
    vlSelf->top__DOT__dut__DOT__index = __Vdly__top__DOT__dut__DOT__index;
    vlSelf->top__DOT__dut__DOT__count = __Vdly__top__DOT__dut__DOT__count;
    VL_WRITEF("ket qua  :%b - count: %2#\n",9,vlSelf->y_o,
              4,(IData)(vlSelf->top__DOT__dut__DOT__count));
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
}
#endif  // VL_DEBUG
