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
    SData/*8:0*/ __Vdly__top__DOT__dut__DOT__register_A;
    SData/*8:0*/ __Vdly__top__DOT__dut__DOT__register_B;
    CData/*1:0*/ __Vdly__top__DOT__dut__DOT__current_state;
    // Body
    __Vdly__top__DOT__dut__DOT__register_B = vlSelf->top__DOT__dut__DOT__register_B;
    __Vdly__top__DOT__dut__DOT__register_A = vlSelf->top__DOT__dut__DOT__register_A;
    __Vdly__top__DOT__dut__DOT__current_state = vlSelf->top__DOT__dut__DOT__current_state;
    if ((2U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
            vlSelf->result_o = vlSelf->top__DOT__dut__DOT__register_A;
        } else if ((9U >= (IData)(vlSelf->top__DOT__dut__DOT__count))) {
            __Vdly__top__DOT__dut__DOT__register_A 
                = (0x1ffU & ((IData)(vlSelf->top__DOT__dut__DOT__register_A) 
                             >> 1U));
            __Vdly__top__DOT__dut__DOT__register_B 
                = (0x1ffU & ((IData)(vlSelf->top__DOT__dut__DOT__register_B) 
                             >> 1U));
            vlSelf->top__DOT__dut__DOT__count = (0xfU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->top__DOT__dut__DOT__count)));
            vlSelf->top__DOT__dut__DOT__out_regA = 
                (1U & (IData)(vlSelf->top__DOT__dut__DOT__register_A));
            vlSelf->top__DOT__dut__DOT__out_regB = 
                (1U & (IData)(vlSelf->top__DOT__dut__DOT__register_B));
            vlSelf->top__DOT__dut__DOT__Q_FF = vlSelf->top__DOT__dut__DOT__full_adder__DOT__carry;
            __Vdly__top__DOT__dut__DOT__register_A 
                = ((0xffU & (IData)(__Vdly__top__DOT__dut__DOT__register_A)) 
                   | ((IData)(vlSelf->top__DOT__dut__DOT__full_adder__DOT__sum) 
                      << 8U));
        } else {
            __Vdly__top__DOT__dut__DOT__current_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__dut__DOT__current_state))) {
        __Vdly__top__DOT__dut__DOT__register_A = vlSelf->M_i;
        __Vdly__top__DOT__dut__DOT__register_B = vlSelf->N_i;
        __Vdly__top__DOT__dut__DOT__current_state = 2U;
    } else {
        vlSelf->top__DOT__dut__DOT__count = 0U;
        __Vdly__top__DOT__dut__DOT__register_A = 0U;
        __Vdly__top__DOT__dut__DOT__register_B = 0U;
        __Vdly__top__DOT__dut__DOT__current_state = 1U;
    }
    vlSelf->top__DOT__dut__DOT__register_A = __Vdly__top__DOT__dut__DOT__register_A;
    vlSelf->top__DOT__dut__DOT__register_B = __Vdly__top__DOT__dut__DOT__register_B;
    vlSelf->top__DOT__dut__DOT__current_state = __Vdly__top__DOT__dut__DOT__current_state;
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
