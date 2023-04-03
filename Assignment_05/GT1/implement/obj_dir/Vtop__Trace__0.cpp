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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->top__DOT__dut__DOT__tmp_min),12);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__dut__DOT__count),4);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__dut__DOT__tmp_min1),4);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__dut__DOT__tmp_min2),4);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__dut__DOT__tmp_index),4);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__dut__DOT__current_state),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__dut__DOT__contain[0]),4);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__dut__DOT__contain[1]),4);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__dut__DOT__contain[2]),4);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__dut__DOT__contain[3]),4);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__dut__DOT__contain[4]),4);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__dut__DOT__contain[5]),4);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__dut__DOT__contain[6]),4);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__dut__DOT__contain[7]),4);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__dut__DOT__contain[8]),4);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__dut__DOT__contain[9]),4);
    }
    bufp->chgBit(oldp+16,(vlSelf->clk_i));
    bufp->chgCData(oldp+17,(vlSelf->I0_i),4);
    bufp->chgCData(oldp+18,(vlSelf->I1_i),4);
    bufp->chgCData(oldp+19,(vlSelf->I2_i),4);
    bufp->chgCData(oldp+20,(vlSelf->I3_i),4);
    bufp->chgCData(oldp+21,(vlSelf->I4_i),4);
    bufp->chgCData(oldp+22,(vlSelf->I5_i),4);
    bufp->chgCData(oldp+23,(vlSelf->I6_i),4);
    bufp->chgCData(oldp+24,(vlSelf->I7_i),4);
    bufp->chgCData(oldp+25,(vlSelf->I8_i),4);
    bufp->chgCData(oldp+26,(vlSelf->I9_i),4);
    bufp->chgCData(oldp+27,(vlSelf->min1_o),4);
    bufp->chgCData(oldp+28,(vlSelf->min2_o),4);
    bufp->chgCData(oldp+29,(vlSelf->index_min1_o),4);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
