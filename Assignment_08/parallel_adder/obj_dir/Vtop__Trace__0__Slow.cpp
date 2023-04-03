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
    tracep->declBit(c+10,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+11,"M_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+12,"N_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+13,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+10,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+11,"M_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+12,"N_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+13,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+11,"M_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+12,"N_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+13,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBit(c+43,"tmp_cin",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1,"tmp_cout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("full_adder_4bit_01 ");
    tracep->declBus(c+14,"M_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+15,"N_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+43,"Cin_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"Cout_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"sum_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+43,"tmp_carry_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3,"tmp_carry_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4,"tmp_carry_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5,"tmp_carry_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1,"tmp_carry_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2,"tmp_sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("full_adder_01 ");
    tracep->declBit(c+16,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_02 ");
    tracep->declBit(c+19,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_03 ");
    tracep->declBit(c+22,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+5,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_04 ");
    tracep->declBit(c+25,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("full_adder_4bit_02 ");
    tracep->declBus(c+28,"M_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+29,"N_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1,"Cin_4bit_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"Cout_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"sum_4bit_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1,"tmp_carry_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+7,"tmp_carry_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+8,"tmp_carry_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+9,"tmp_carry_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+30,"tmp_carry_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+6,"tmp_sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("full_adder_01 ");
    tracep->declBit(c+31,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+7,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_02 ");
    tracep->declBit(c+34,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+8,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_03 ");
    tracep->declBit(c+37,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+9,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("full_adder_04 ");
    tracep->declBit(c+40,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+9,"z_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"s_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"c_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+30,"carry",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(4);
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
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry));
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__tmp_sum),4);
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry));
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry));
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__tmp_sum),4);
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry));
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry));
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry));
    bufp->fullBit(oldp+10,(vlSelf->clk_i));
    bufp->fullCData(oldp+11,(vlSelf->M_i),8);
    bufp->fullCData(oldp+12,(vlSelf->N_i),8);
    bufp->fullSData(oldp+13,(vlSelf->result_o),9);
    bufp->fullCData(oldp+14,((0xfU & (IData)(vlSelf->M_i))),4);
    bufp->fullCData(oldp+15,((0xfU & (IData)(vlSelf->N_i))),4);
    bufp->fullBit(oldp+16,((1U & (IData)(vlSelf->M_i))));
    bufp->fullBit(oldp+17,((1U & (IData)(vlSelf->N_i))));
    bufp->fullBit(oldp+18,((1U & ((IData)(vlSelf->M_i) 
                                  ^ (IData)(vlSelf->N_i)))));
    bufp->fullBit(oldp+19,((1U & ((IData)(vlSelf->M_i) 
                                  >> 1U))));
    bufp->fullBit(oldp+20,((1U & ((IData)(vlSelf->N_i) 
                                  >> 1U))));
    bufp->fullBit(oldp+21,((1U & ((((IData)(vlSelf->M_i) 
                                    ^ (IData)(vlSelf->N_i)) 
                                   >> 1U) ^ (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_01__DOT__carry)))));
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelf->M_i) 
                                  >> 2U))));
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelf->N_i) 
                                  >> 2U))));
    bufp->fullBit(oldp+24,((1U & ((((IData)(vlSelf->M_i) 
                                    ^ (IData)(vlSelf->N_i)) 
                                   >> 2U) ^ (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_02__DOT__carry)))));
    bufp->fullBit(oldp+25,((1U & ((IData)(vlSelf->M_i) 
                                  >> 3U))));
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSelf->N_i) 
                                  >> 3U))));
    bufp->fullBit(oldp+27,((1U & ((((IData)(vlSelf->M_i) 
                                    ^ (IData)(vlSelf->N_i)) 
                                   >> 3U) ^ (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_03__DOT__carry)))));
    bufp->fullCData(oldp+28,((0xfU & ((IData)(vlSelf->M_i) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+29,((0xfU & ((IData)(vlSelf->N_i) 
                                      >> 4U))),4);
    bufp->fullBit(oldp+30,((1U & ((((IData)(vlSelf->M_i) 
                                    & (IData)(vlSelf->N_i)) 
                                   >> 7U) | ((((IData)(vlSelf->M_i) 
                                               ^ (IData)(vlSelf->N_i)) 
                                              >> 7U) 
                                             & (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry))))));
    bufp->fullBit(oldp+31,((1U & ((IData)(vlSelf->M_i) 
                                  >> 4U))));
    bufp->fullBit(oldp+32,((1U & ((IData)(vlSelf->N_i) 
                                  >> 4U))));
    bufp->fullBit(oldp+33,((1U & ((((IData)(vlSelf->M_i) 
                                    ^ (IData)(vlSelf->N_i)) 
                                   >> 4U) ^ (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_01__DOT__full_adder_04__DOT__carry)))));
    bufp->fullBit(oldp+34,((1U & ((IData)(vlSelf->M_i) 
                                  >> 5U))));
    bufp->fullBit(oldp+35,((1U & ((IData)(vlSelf->N_i) 
                                  >> 5U))));
    bufp->fullBit(oldp+36,((1U & ((((IData)(vlSelf->M_i) 
                                    ^ (IData)(vlSelf->N_i)) 
                                   >> 5U) ^ (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_01__DOT__carry)))));
    bufp->fullBit(oldp+37,((1U & ((IData)(vlSelf->M_i) 
                                  >> 6U))));
    bufp->fullBit(oldp+38,((1U & ((IData)(vlSelf->N_i) 
                                  >> 6U))));
    bufp->fullBit(oldp+39,((1U & ((((IData)(vlSelf->M_i) 
                                    ^ (IData)(vlSelf->N_i)) 
                                   >> 6U) ^ (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_02__DOT__carry)))));
    bufp->fullBit(oldp+40,((1U & ((IData)(vlSelf->M_i) 
                                  >> 7U))));
    bufp->fullBit(oldp+41,((1U & ((IData)(vlSelf->N_i) 
                                  >> 7U))));
    bufp->fullBit(oldp+42,((1U & ((((IData)(vlSelf->M_i) 
                                    ^ (IData)(vlSelf->N_i)) 
                                   >> 7U) ^ (IData)(vlSelf->top__DOT__dut__DOT__full_adder_4bit_02__DOT__full_adder_03__DOT__carry)))));
    bufp->fullBit(oldp+43,(0U));
}
