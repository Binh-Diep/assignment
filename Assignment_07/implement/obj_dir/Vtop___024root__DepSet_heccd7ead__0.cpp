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
    CData/*5:0*/ __Vdly__top__DOT__dut__DOT__count;
    QData/*33:0*/ __Vdly__top__DOT__dut__DOT__cur_val;
    IData/*24:0*/ __Vdly__top__DOT__dut__DOT__sq_root;
    CData/*3:0*/ __Vdly__top__DOT__dut__DOT__current_state;
    QData/*35:0*/ __Vdly__top__DOT__dut__DOT__randicand;
    // Body
    __Vdly__top__DOT__dut__DOT__randicand = vlSelf->top__DOT__dut__DOT__randicand;
    __Vdly__top__DOT__dut__DOT__sq_root = vlSelf->top__DOT__dut__DOT__sq_root;
    __Vdly__top__DOT__dut__DOT__cur_val = vlSelf->top__DOT__dut__DOT__cur_val;
    __Vdly__top__DOT__dut__DOT__count = vlSelf->top__DOT__dut__DOT__count;
    __Vdly__top__DOT__dut__DOT__current_state = vlSelf->top__DOT__dut__DOT__current_state;
    if ((8U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        vlSelf->sqrt_o = ((4U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))
                           ? 0U : ((2U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))
                                    ? 0U : ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))
                                             ? 0U : 
                                            (0x3fffffU 
                                             & (vlSelf->top__DOT__dut__DOT__sq_root 
                                                >> 3U)))));
    } else if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
                if ((0x19U >= (IData)(vlSelf->top__DOT__dut__DOT__count))) {
                    if (VL_GTS_IQQ(34, 0ULL, vlSelf->top__DOT__dut__DOT__test_sign)) {
                        __Vdly__top__DOT__dut__DOT__count 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__dut__DOT__count)));
                    } else {
                        __Vdly__top__DOT__dut__DOT__count 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__dut__DOT__count)));
                        __Vdly__top__DOT__dut__DOT__cur_val 
                            = vlSelf->top__DOT__dut__DOT__test_sign;
                        __Vdly__top__DOT__dut__DOT__sq_root 
                            = (1U | __Vdly__top__DOT__dut__DOT__sq_root);
                    }
                    __Vdly__top__DOT__dut__DOT__current_state 
                        = ((0x19U == (IData)(vlSelf->top__DOT__dut__DOT__count))
                            ? 8U : 4U);
                } else {
                    __Vdly__top__DOT__dut__DOT__current_state = 8U;
                }
            } else {
                vlSelf->top__DOT__dut__DOT__test_sign 
                    = (0x3ffffffffULL & (vlSelf->top__DOT__dut__DOT__cur_val 
                                         - (1ULL | 
                                            ((QData)((IData)(vlSelf->top__DOT__dut__DOT__sq_root)) 
                                             << 2U))));
                __Vdly__top__DOT__dut__DOT__current_state = 7U;
                __Vdly__top__DOT__dut__DOT__sq_root 
                    = (0x1ffffffU & (vlSelf->top__DOT__dut__DOT__sq_root 
                                     << 1U));
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
            __Vdly__top__DOT__dut__DOT__cur_val = (0x3ffffffffULL 
                                                   & ((vlSelf->top__DOT__dut__DOT__cur_val 
                                                       << 2U) 
                                                      | (QData)((IData)(vlSelf->top__DOT__dut__DOT__couple))));
            __Vdly__top__DOT__dut__DOT__current_state = 6U;
        } else {
            __Vdly__top__DOT__dut__DOT__randicand = 
                (0xfffffffffULL & (vlSelf->top__DOT__dut__DOT__randicand 
                                   << 2U));
            vlSelf->top__DOT__dut__DOT__couple = (3U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__dut__DOT__randicand 
                                                             >> 0x22U)));
            __Vdly__top__DOT__dut__DOT__current_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
            __Vdly__top__DOT__dut__DOT__randicand = vlSelf->top__DOT__dut__DOT__result_add;
            __Vdly__top__DOT__dut__DOT__current_state = 4U;
        } else {
            vlSelf->top__DOT__dut__DOT__result_add 
                = (0x1ffffffffULL & ((QData)((IData)(vlSelf->top__DOT__dut__DOT__sq_x)) 
                                     + (QData)((IData)(vlSelf->top__DOT__dut__DOT__sq_y))));
            __Vdly__top__DOT__dut__DOT__current_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        vlSelf->top__DOT__dut__DOT__sq_x = ((IData)(vlSelf->x_i) 
                                            * (IData)(vlSelf->x_i));
        vlSelf->top__DOT__dut__DOT__sq_y = ((IData)(vlSelf->y_i) 
                                            * (IData)(vlSelf->y_i));
        __Vdly__top__DOT__dut__DOT__current_state = 2U;
    } else {
        __Vdly__top__DOT__dut__DOT__count = 0U;
        vlSelf->top__DOT__dut__DOT__sq_x = 0U;
        vlSelf->top__DOT__dut__DOT__sq_y = 0U;
        __Vdly__top__DOT__dut__DOT__sq_root = 0U;
        __Vdly__top__DOT__dut__DOT__current_state = 1U;
    }
    vlSelf->top__DOT__dut__DOT__count = __Vdly__top__DOT__dut__DOT__count;
    vlSelf->top__DOT__dut__DOT__cur_val = __Vdly__top__DOT__dut__DOT__cur_val;
    vlSelf->top__DOT__dut__DOT__sq_root = __Vdly__top__DOT__dut__DOT__sq_root;
    vlSelf->top__DOT__dut__DOT__randicand = __Vdly__top__DOT__dut__DOT__randicand;
    vlSelf->top__DOT__dut__DOT__current_state = __Vdly__top__DOT__dut__DOT__current_state;
    VL_WRITEF("result: %b.%b --- state: %b\n",17,(0x1ffffU 
                                                  & (vlSelf->sqrt_o 
                                                     >> 5U)),
              5,(0x1fU & vlSelf->sqrt_o),4,(IData)(vlSelf->top__DOT__dut__DOT__current_state));
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
