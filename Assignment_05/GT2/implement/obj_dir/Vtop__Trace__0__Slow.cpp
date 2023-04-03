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
    tracep->declBit(c+27,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"I0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+29,"I1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+30,"I2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+31,"I3_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+32,"I4_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+33,"I5_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+34,"I6_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+35,"I7_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+36,"I8_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+37,"I9_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+38,"min1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+39,"min2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+40,"index_min1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+27,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"I0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+29,"I1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+30,"I2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+31,"I3_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+32,"I4_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+33,"I5_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+34,"I6_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+35,"I7_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+36,"I8_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+37,"I9_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+38,"min1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+39,"min2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+40,"index_min1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+27,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"I0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+29,"I1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+30,"I2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+31,"I3_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+32,"I4_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+33,"I5_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+34,"I6_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+35,"I7_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+36,"I8_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+37,"I9_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+38,"min1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+39,"min2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+40,"index_min1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1,"count_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+2,"count_k",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,"tmp_min1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,"tmp_min2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,"tmp_index",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+6+i*1,"array",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 3,0);
    }
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+16+i*1,"contain",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 3,0);
    }
    {
        const char* __VenumItemNames[]
        = {"INIT", "PRE", "SORT", "PRE_INDEX", "INDEX", 
                                "MIN", "SEND"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(1, "min_finder.state_e", 7, 3, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+26,"current_state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
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
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__dut__DOT__count_i),4);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__dut__DOT__count_k),4);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__dut__DOT__tmp_min1),4);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__dut__DOT__tmp_min2),4);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__dut__DOT__tmp_index),4);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__dut__DOT__array[0]),4);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__dut__DOT__array[1]),4);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__dut__DOT__array[2]),4);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__dut__DOT__array[3]),4);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__dut__DOT__array[4]),4);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__dut__DOT__array[5]),4);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__dut__DOT__array[6]),4);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__dut__DOT__array[7]),4);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__dut__DOT__array[8]),4);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__dut__DOT__array[9]),4);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__dut__DOT__contain[0]),4);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__dut__DOT__contain[1]),4);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__dut__DOT__contain[2]),4);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__dut__DOT__contain[3]),4);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__dut__DOT__contain[4]),4);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__dut__DOT__contain[5]),4);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__dut__DOT__contain[6]),4);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__dut__DOT__contain[7]),4);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__dut__DOT__contain[8]),4);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__dut__DOT__contain[9]),4);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__dut__DOT__current_state),3);
    bufp->fullBit(oldp+27,(vlSelf->clk_i));
    bufp->fullCData(oldp+28,(vlSelf->I0_i),4);
    bufp->fullCData(oldp+29,(vlSelf->I1_i),4);
    bufp->fullCData(oldp+30,(vlSelf->I2_i),4);
    bufp->fullCData(oldp+31,(vlSelf->I3_i),4);
    bufp->fullCData(oldp+32,(vlSelf->I4_i),4);
    bufp->fullCData(oldp+33,(vlSelf->I5_i),4);
    bufp->fullCData(oldp+34,(vlSelf->I6_i),4);
    bufp->fullCData(oldp+35,(vlSelf->I7_i),4);
    bufp->fullCData(oldp+36,(vlSelf->I8_i),4);
    bufp->fullCData(oldp+37,(vlSelf->I9_i),4);
    bufp->fullCData(oldp+38,(vlSelf->min1_o),4);
    bufp->fullCData(oldp+39,(vlSelf->min2_o),4);
    bufp->fullCData(oldp+40,(vlSelf->index_min1_o),4);
}
