// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"E1_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"E2_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"E3_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"A0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"A1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"A2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"Q0_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"Q1_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"Q2_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"Q3_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"Q4_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+13,"Q5_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"Q6_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"Q7_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+1,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"E1_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"E2_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"E3_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"A0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"A1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"A2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"Q0_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"Q1_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"Q2_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"Q3_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"Q4_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+13,"Q5_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"Q6_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"Q7_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+2,"E1_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"E2_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"E3_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"A0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"A1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"A2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"Q0_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"Q1_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"Q2_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"Q3_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"Q4_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+13,"Q5_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"Q6_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"Q7_no",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"enable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+17,"neg_A0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+18,"neg_A1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+19,"neg_A2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+20,"tmp_Q0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+21,"tmp_Q1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+22,"tmp_Q2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+23,"tmp_Q3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+24,"tmp_Q4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+25,"tmp_Q5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+26,"tmp_Q6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+27,"tmp_Q7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+28,"neg_E1_ni",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+29,"neg_E2_ni",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk_i));
    bufp->fullBit(oldp+2,(vlSelf->E1_ni));
    bufp->fullBit(oldp+3,(vlSelf->E2_ni));
    bufp->fullBit(oldp+4,(vlSelf->E3_i));
    bufp->fullBit(oldp+5,(vlSelf->A0_i));
    bufp->fullBit(oldp+6,(vlSelf->A1_i));
    bufp->fullBit(oldp+7,(vlSelf->A2_i));
    bufp->fullBit(oldp+8,(vlSelf->Q0_no));
    bufp->fullBit(oldp+9,(vlSelf->Q1_no));
    bufp->fullBit(oldp+10,(vlSelf->Q2_no));
    bufp->fullBit(oldp+11,(vlSelf->Q3_no));
    bufp->fullBit(oldp+12,(vlSelf->Q4_no));
    bufp->fullBit(oldp+13,(vlSelf->Q5_no));
    bufp->fullBit(oldp+14,(vlSelf->Q6_no));
    bufp->fullBit(oldp+15,(vlSelf->Q7_no));
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__dut__DOT__enable));
    bufp->fullBit(oldp+17,((1U & (~ (IData)(vlSelf->A0_i)))));
    bufp->fullBit(oldp+18,((1U & (~ (IData)(vlSelf->A1_i)))));
    bufp->fullBit(oldp+19,((1U & (~ (IData)(vlSelf->A2_i)))));
    bufp->fullBit(oldp+20,(((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                              & (~ (IData)(vlSelf->A0_i))) 
                             & (~ (IData)(vlSelf->A1_i))) 
                            & (~ (IData)(vlSelf->A2_i)))));
    bufp->fullBit(oldp+21,(((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                              & (IData)(vlSelf->A0_i)) 
                             & (~ (IData)(vlSelf->A1_i))) 
                            & (~ (IData)(vlSelf->A2_i)))));
    bufp->fullBit(oldp+22,(((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                              & (~ (IData)(vlSelf->A0_i))) 
                             & (IData)(vlSelf->A1_i)) 
                            & (~ (IData)(vlSelf->A2_i)))));
    bufp->fullBit(oldp+23,(((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                              & (IData)(vlSelf->A0_i)) 
                             & (IData)(vlSelf->A1_i)) 
                            & (~ (IData)(vlSelf->A2_i)))));
    bufp->fullBit(oldp+24,(((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                              & (~ (IData)(vlSelf->A0_i))) 
                             & (~ (IData)(vlSelf->A1_i))) 
                            & (IData)(vlSelf->A2_i))));
    bufp->fullBit(oldp+25,(((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                              & (IData)(vlSelf->A0_i)) 
                             & (~ (IData)(vlSelf->A1_i))) 
                            & (IData)(vlSelf->A2_i))));
    bufp->fullBit(oldp+26,(((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                              & (~ (IData)(vlSelf->A0_i))) 
                             & (IData)(vlSelf->A1_i)) 
                            & (IData)(vlSelf->A2_i))));
    bufp->fullBit(oldp+27,(((((IData)(vlSelf->top__DOT__dut__DOT__enable) 
                              & (IData)(vlSelf->A0_i)) 
                             & (IData)(vlSelf->A1_i)) 
                            & (IData)(vlSelf->A2_i))));
    bufp->fullBit(oldp+28,((1U & (~ (IData)(vlSelf->E1_ni)))));
    bufp->fullBit(oldp+29,((1U & (~ (IData)(vlSelf->E2_ni)))));
}
