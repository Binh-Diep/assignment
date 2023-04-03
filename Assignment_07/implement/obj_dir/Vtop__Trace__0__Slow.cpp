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
    tracep->declBit(c+15,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+16,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+17,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+18,"sqrt_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 21,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+15,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+16,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+17,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+18,"sqrt_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 21,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+15,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+16,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+17,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+18,"sqrt_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 21,0);
    tracep->declBus(c+1,"couple",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+2,"count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+3,"sq_root",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+4,"sq_x",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,"sq_y",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+6,"result_add",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 32,0);
    tracep->declQuad(c+8,"cur_val",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 33,0);
    tracep->declQuad(c+10,"randicand",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 35,0);
    tracep->declQuad(c+12,"test_sign",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 33,0);
    {
        const char* __VenumItemNames[]
        = {"INIT", "SQUARE", "SUM", "PRE_ROOT", "ROOT1", 
                                "ROOT2", "ROOT3", "CHECK_SIGN", 
                                "SEND"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000"};
        tracep->declDTypeEnum(1, "sqrt_sum.state_e", 9, 4, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+14,"current_state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
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
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__dut__DOT__couple),2);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__dut__DOT__count),6);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__dut__DOT__sq_root),25);
    bufp->fullIData(oldp+4,(vlSelf->top__DOT__dut__DOT__sq_x),32);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__dut__DOT__sq_y),32);
    bufp->fullQData(oldp+6,(vlSelf->top__DOT__dut__DOT__result_add),33);
    bufp->fullQData(oldp+8,(vlSelf->top__DOT__dut__DOT__cur_val),34);
    bufp->fullQData(oldp+10,(vlSelf->top__DOT__dut__DOT__randicand),36);
    bufp->fullQData(oldp+12,(vlSelf->top__DOT__dut__DOT__test_sign),34);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__dut__DOT__current_state),4);
    bufp->fullBit(oldp+15,(vlSelf->clk_i));
    bufp->fullSData(oldp+16,(vlSelf->x_i),16);
    bufp->fullSData(oldp+17,(vlSelf->y_i),16);
    bufp->fullIData(oldp+18,(vlSelf->sqrt_o),22);
}
