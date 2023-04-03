// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->Q_o = ((IData)(vlSelf->top__DOT__dut__DOT__rst_n)
                    ? (0xfU & ((IData)(1U) + (IData)(vlSelf->Q_o)))
                    : 0U);
}

extern const VlUnpacked<CData/*0:0*/, 256> Vtop__ConstPool__TABLE_h3a4fcc36_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->Q_o) << 4U) | (IData)(vlSelf->N_i));
    vlSelf->top__DOT__dut__DOT__rst_n = Vtop__ConstPool__TABLE_h3a4fcc36_0
        [__Vtableidx1];
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__top__DOT__dut__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__dut__DOT__rst_n)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__dut__DOT__rst_n 
        = vlSelf->__VinpClk__TOP__top__DOT__dut__DOT__rst_n;
    vlSelf->__VinpClk__TOP__top__DOT__dut__DOT__rst_n 
        = vlSelf->top__DOT__dut__DOT__rst_n;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top__DOT__dut__DOT__rst_n ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__rst_n));
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__dut__DOT__rst_n ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__rst_n))) VL_DBG_MSGF("        CHANGE: src/upcounter4bit.sv:8: top.dut.rst_n\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__rst_n 
        = vlSelf->top__DOT__dut__DOT__rst_n;
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->N_i & 0xf0U))) {
        Verilated::overWidthError("N_i");}
}
#endif  // VL_DEBUG
