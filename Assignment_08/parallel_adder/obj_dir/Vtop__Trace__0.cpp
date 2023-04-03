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
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry));
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__tmp_sum),4);
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry));
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__tmp_sum),4);
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry));
    }
    bufp->chgBit(oldp+9,(vlSelf->clk_i));
    bufp->chgCData(oldp+10,(vlSelf->M_i),8);
    bufp->chgCData(oldp+11,(vlSelf->N_i),8);
    bufp->chgSData(oldp+12,(vlSelf->result_o),9);
    bufp->chgCData(oldp+13,((0xfU & (IData)(vlSelf->M_i))),4);
    bufp->chgCData(oldp+14,((0xfU & (IData)(vlSelf->N_i))),4);
    bufp->chgBit(oldp+15,((1U & (IData)(vlSelf->M_i))));
    bufp->chgBit(oldp+16,((1U & (IData)(vlSelf->N_i))));
    bufp->chgBit(oldp+17,((1U & ((IData)(vlSelf->M_i) 
                                 ^ (IData)(vlSelf->N_i)))));
    bufp->chgBit(oldp+18,((1U & ((IData)(vlSelf->M_i) 
                                 >> 1U))));
    bufp->chgBit(oldp+19,((1U & ((IData)(vlSelf->N_i) 
                                 >> 1U))));
    bufp->chgBit(oldp+20,((1U & ((((IData)(vlSelf->M_i) 
                                   ^ (IData)(vlSelf->N_i)) 
                                  >> 1U) ^ (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry)))));
    bufp->chgBit(oldp+21,((1U & ((IData)(vlSelf->M_i) 
                                 >> 2U))));
    bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->N_i) 
                                 >> 2U))));
    bufp->chgBit(oldp+23,((1U & ((((IData)(vlSelf->M_i) 
                                   ^ (IData)(vlSelf->N_i)) 
                                  >> 2U) ^ (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry)))));
    bufp->chgBit(oldp+24,((1U & ((IData)(vlSelf->M_i) 
                                 >> 3U))));
    bufp->chgBit(oldp+25,((1U & ((IData)(vlSelf->N_i) 
                                 >> 3U))));
    bufp->chgBit(oldp+26,((1U & ((((IData)(vlSelf->M_i) 
                                   ^ (IData)(vlSelf->N_i)) 
                                  >> 3U) ^ (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry)))));
    bufp->chgCData(oldp+27,((0xfU & ((IData)(vlSelf->M_i) 
                                     >> 4U))),4);
    bufp->chgCData(oldp+28,((0xfU & ((IData)(vlSelf->N_i) 
                                     >> 4U))),4);
    bufp->chgBit(oldp+29,((1U & ((((IData)(vlSelf->M_i) 
                                   & (IData)(vlSelf->N_i)) 
                                  >> 7U) | ((((IData)(vlSelf->M_i) 
                                              ^ (IData)(vlSelf->N_i)) 
                                             >> 7U) 
                                            & (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry))))));
    bufp->chgBit(oldp+30,((1U & ((IData)(vlSelf->M_i) 
                                 >> 4U))));
    bufp->chgBit(oldp+31,((1U & ((IData)(vlSelf->N_i) 
                                 >> 4U))));
    bufp->chgBit(oldp+32,((1U & ((((IData)(vlSelf->M_i) 
                                   ^ (IData)(vlSelf->N_i)) 
                                  >> 4U) ^ (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry)))));
    bufp->chgBit(oldp+33,((1U & ((IData)(vlSelf->M_i) 
                                 >> 5U))));
    bufp->chgBit(oldp+34,((1U & ((IData)(vlSelf->N_i) 
                                 >> 5U))));
    bufp->chgBit(oldp+35,((1U & ((((IData)(vlSelf->M_i) 
                                   ^ (IData)(vlSelf->N_i)) 
                                  >> 5U) ^ (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry)))));
    bufp->chgBit(oldp+36,((1U & ((IData)(vlSelf->M_i) 
                                 >> 6U))));
    bufp->chgBit(oldp+37,((1U & ((IData)(vlSelf->N_i) 
                                 >> 6U))));
    bufp->chgBit(oldp+38,((1U & ((((IData)(vlSelf->M_i) 
                                   ^ (IData)(vlSelf->N_i)) 
                                  >> 6U) ^ (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry)))));
    bufp->chgBit(oldp+39,((1U & ((IData)(vlSelf->M_i) 
                                 >> 7U))));
    bufp->chgBit(oldp+40,((1U & ((IData)(vlSelf->N_i) 
                                 >> 7U))));
    bufp->chgBit(oldp+41,((1U & ((((IData)(vlSelf->M_i) 
                                   ^ (IData)(vlSelf->N_i)) 
                                  >> 7U) ^ (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry)))));
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
