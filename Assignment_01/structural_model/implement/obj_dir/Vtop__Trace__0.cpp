// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk_i));
    bufp->chgBit(oldp+1,(vlSelf->E1_ni));
    bufp->chgBit(oldp+2,(vlSelf->E2_ni));
    bufp->chgBit(oldp+3,(vlSelf->E3_i));
    bufp->chgBit(oldp+4,(vlSelf->A0_i));
    bufp->chgBit(oldp+5,(vlSelf->A1_i));
    bufp->chgBit(oldp+6,(vlSelf->A2_i));
    bufp->chgBit(oldp+7,(vlSelf->Q0_no));
    bufp->chgBit(oldp+8,(vlSelf->Q1_no));
    bufp->chgBit(oldp+9,(vlSelf->Q2_no));
    bufp->chgBit(oldp+10,(vlSelf->Q3_no));
    bufp->chgBit(oldp+11,(vlSelf->Q4_no));
    bufp->chgBit(oldp+12,(vlSelf->Q5_no));
    bufp->chgBit(oldp+13,(vlSelf->Q6_no));
    bufp->chgBit(oldp+14,(vlSelf->Q7_no));
    bufp->chgBit(oldp+15,(vlSelf->top__DOT__dut__DOT__enable));
    bufp->chgBit(oldp+16,((1U & (~ (IData)(vlSelf->A0_i)))));
    bufp->chgBit(oldp+17,((1U & (~ (IData)(vlSelf->A1_i)))));
    bufp->chgBit(oldp+18,((1U & (~ (IData)(vlSelf->A2_i)))));
    bufp->chgBit(oldp+19,(((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                             & (~ (IData)(vlSelf->A0_i))) 
                            & (~ (IData)(vlSelf->A1_i))) 
                           & (~ (IData)(vlSelf->A2_i)))));
    bufp->chgBit(oldp+20,(((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                             & (IData)(vlSelf->A0_i)) 
                            & (~ (IData)(vlSelf->A1_i))) 
                           & (~ (IData)(vlSelf->A2_i)))));
    bufp->chgBit(oldp+21,(((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                             & (~ (IData)(vlSelf->A0_i))) 
                            & (IData)(vlSelf->A1_i)) 
                           & (~ (IData)(vlSelf->A2_i)))));
    bufp->chgBit(oldp+22,(((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                             & (IData)(vlSelf->A0_i)) 
                            & (IData)(vlSelf->A1_i)) 
                           & (~ (IData)(vlSelf->A2_i)))));
    bufp->chgBit(oldp+23,(((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                             & (~ (IData)(vlSelf->A0_i))) 
                            & (~ (IData)(vlSelf->A1_i))) 
                           & (IData)(vlSelf->A2_i))));
    bufp->chgBit(oldp+24,(((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                             & (IData)(vlSelf->A0_i)) 
                            & (~ (IData)(vlSelf->A1_i))) 
                           & (IData)(vlSelf->A2_i))));
    bufp->chgBit(oldp+25,(((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                             & (~ (IData)(vlSelf->A0_i))) 
                            & (IData)(vlSelf->A1_i)) 
                           & (IData)(vlSelf->A2_i))));
    bufp->chgBit(oldp+26,(((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                             & (IData)(vlSelf->A0_i)) 
                            & (IData)(vlSelf->A1_i)) 
                           & (IData)(vlSelf->A2_i))));
    bufp->chgBit(oldp+27,((1U & (~ (IData)(vlSelf->E1_ni)))));
    bufp->chgBit(oldp+28,((1U & (~ (IData)(vlSelf->E2_ni)))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
