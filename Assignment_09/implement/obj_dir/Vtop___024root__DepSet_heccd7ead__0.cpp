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
    SData/*9:0*/ __Vdly__top__DOT__dut__DOT__A_tmp;
    CData/*2:0*/ __Vdly__top__DOT__dut__DOT__count;
    CData/*2:0*/ __Vdly__top__DOT__dut__DOT__current_state;
    SData/*9:0*/ __Vdly__top__DOT__dut__DOT__Q_tmp;
    IData/*20:0*/ __Vdly__top__DOT__dut__DOT__REG;
    // Body
    __Vdly__top__DOT__dut__DOT__REG = vlSelf->top__DOT__dut__DOT__REG;
    __Vdly__top__DOT__dut__DOT__Q_tmp = vlSelf->top__DOT__dut__DOT__Q_tmp;
    __Vdly__top__DOT__dut__DOT__count = vlSelf->top__DOT__dut__DOT__count;
    __Vdly__top__DOT__dut__DOT__A_tmp = vlSelf->top__DOT__dut__DOT__A_tmp;
    __Vdly__top__DOT__dut__DOT__current_state = vlSelf->top__DOT__dut__DOT__current_state;
    if ((4U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
            vlSelf->result_o = ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))
                                 ? 0U : (0xffffU & 
                                         (vlSelf->top__DOT__dut__DOT__REG 
                                          >> 1U)));
        } else if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
            __Vdly__top__DOT__dut__DOT__A_tmp = (0x3ffU 
                                                 & ((4U 
                                                     & vlSelf->top__DOT__dut__DOT__REG)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->top__DOT__dut__DOT__REG)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__dut__DOT__REG)
                                                       ? (IData)(vlSelf->top__DOT__dut__DOT__A_tmp)
                                                       : 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                                        + 
                                                        (~ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)))))
                                                      : 
                                                     ((1U 
                                                       & vlSelf->top__DOT__dut__DOT__REG)
                                                       ? 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                                        + 
                                                        (~ (IData)(vlSelf->top__DOT__dut__DOT__M_tmp))))
                                                       : 
                                                      ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                                        + 
                                                        (~ 
                                                         ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                                          << 1U))))))
                                                     : 
                                                    ((2U 
                                                      & vlSelf->top__DOT__dut__DOT__REG)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__dut__DOT__REG)
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                                       + 
                                                       ((IData)(vlSelf->top__DOT__dut__DOT__M_tmp) 
                                                        << 1U))
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                                       + (IData)(vlSelf->top__DOT__dut__DOT__M_tmp)))
                                                      : 
                                                     ((1U 
                                                       & vlSelf->top__DOT__dut__DOT__REG)
                                                       ? 
                                                      ((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                                       + (IData)(vlSelf->top__DOT__dut__DOT__M_tmp))
                                                       : (IData)(vlSelf->top__DOT__dut__DOT__A_tmp)))));
            __Vdly__top__DOT__dut__DOT__count = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__dut__DOT__count)));
            __Vdly__top__DOT__dut__DOT__current_state = 2U;
        } else {
            __Vdly__top__DOT__dut__DOT__A_tmp = (0x3ffU 
                                                 & (vlSelf->top__DOT__dut__DOT__REG 
                                                    >> 0xbU));
            __Vdly__top__DOT__dut__DOT__Q_tmp = (0x3ffU 
                                                 & (vlSelf->top__DOT__dut__DOT__REG 
                                                    >> 1U));
            __Vdly__top__DOT__dut__DOT__current_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
            if ((0U < (IData)(vlSelf->top__DOT__dut__DOT__count))) {
                __Vdly__top__DOT__dut__DOT__REG = (0x1fffffU 
                                                   & VL_SHIFTRS_III(21,21,32, vlSelf->top__DOT__dut__DOT__REG, 2U));
                __Vdly__top__DOT__dut__DOT__current_state = 4U;
            } else {
                __Vdly__top__DOT__dut__DOT__current_state = 4U;
            }
        } else if ((5U >= (IData)(vlSelf->top__DOT__dut__DOT__count))) {
            __Vdly__top__DOT__dut__DOT__REG = (((IData)(vlSelf->top__DOT__dut__DOT__A_tmp) 
                                                << 0xbU) 
                                               | (((IData)(vlSelf->top__DOT__dut__DOT__Q_tmp) 
                                                   << 1U) 
                                                  | (1U 
                                                     & vlSelf->top__DOT__dut__DOT__REG)));
            __Vdly__top__DOT__dut__DOT__current_state = 3U;
        } else {
            __Vdly__top__DOT__dut__DOT__current_state = 6U;
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        if ((0x80U & ((IData)(vlSelf->M_i) & (IData)(vlSelf->N_i)))) {
            vlSelf->top__DOT__dut__DOT__M_tmp = (0x300U 
                                                 | (IData)(vlSelf->M_i));
            __Vdly__top__DOT__dut__DOT__Q_tmp = (0x300U 
                                                 | (IData)(vlSelf->N_i));
        } else if ((IData)((((IData)(vlSelf->M_i) >> 7U) 
                            & (~ ((IData)(vlSelf->N_i) 
                                  >> 7U))))) {
            vlSelf->top__DOT__dut__DOT__M_tmp = (0x300U 
                                                 | (IData)(vlSelf->M_i));
            __Vdly__top__DOT__dut__DOT__Q_tmp = vlSelf->N_i;
        } else if ((IData)(((~ ((IData)(vlSelf->M_i) 
                                >> 7U)) & ((IData)(vlSelf->N_i) 
                                           >> 7U)))) {
            vlSelf->top__DOT__dut__DOT__M_tmp = vlSelf->M_i;
            __Vdly__top__DOT__dut__DOT__Q_tmp = (0x300U 
                                                 | (IData)(vlSelf->N_i));
        } else {
            vlSelf->top__DOT__dut__DOT__M_tmp = vlSelf->M_i;
            __Vdly__top__DOT__dut__DOT__Q_tmp = vlSelf->N_i;
        }
        __Vdly__top__DOT__dut__DOT__current_state = 2U;
    } else {
        __Vdly__top__DOT__dut__DOT__A_tmp = 0U;
        __Vdly__top__DOT__dut__DOT__count = 0U;
        __Vdly__top__DOT__dut__DOT__Q_tmp = 0U;
        vlSelf->top__DOT__dut__DOT__M_tmp = 0U;
        __Vdly__top__DOT__dut__DOT__current_state = 1U;
    }
    vlSelf->top__DOT__dut__DOT__A_tmp = __Vdly__top__DOT__dut__DOT__A_tmp;
    vlSelf->top__DOT__dut__DOT__count = __Vdly__top__DOT__dut__DOT__count;
    vlSelf->top__DOT__dut__DOT__Q_tmp = __Vdly__top__DOT__dut__DOT__Q_tmp;
    vlSelf->top__DOT__dut__DOT__REG = __Vdly__top__DOT__dut__DOT__REG;
    vlSelf->top__DOT__dut__DOT__current_state = __Vdly__top__DOT__dut__DOT__current_state;
    VL_WRITEF("MUL: %b --- state: %b\n",16,vlSelf->result_o,
              3,(IData)(vlSelf->top__DOT__dut__DOT__current_state));
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
