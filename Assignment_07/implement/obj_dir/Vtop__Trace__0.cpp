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
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__dut__DOT__couple),2);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__dut__DOT__count),6);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__dut__DOT__sq_root),25);
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__dut__DOT__sq_x),32);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__dut__DOT__sq_y),32);
        bufp->chgQData(oldp+5,(vlSelf->top__DOT__dut__DOT__result_add),33);
        bufp->chgQData(oldp+7,(vlSelf->top__DOT__dut__DOT__cur_val),34);
        bufp->chgQData(oldp+9,(vlSelf->top__DOT__dut__DOT__randicand),36);
        bufp->chgQData(oldp+11,(vlSelf->top__DOT__dut__DOT__test_sign),34);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__dut__DOT__current_state),4);
    }
    bufp->chgBit(oldp+14,(vlSelf->clk_i));
    bufp->chgSData(oldp+15,(vlSelf->x_i),16);
    bufp->chgSData(oldp+16,(vlSelf->y_i),16);
    bufp->chgIData(oldp+17,(vlSelf->sqrt_o),22);
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
}
