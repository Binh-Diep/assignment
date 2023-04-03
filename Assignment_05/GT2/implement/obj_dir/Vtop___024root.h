// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(I0_i,3,0);
    VL_IN8(I1_i,3,0);
    VL_IN8(I2_i,3,0);
    VL_IN8(I3_i,3,0);
    VL_IN8(I4_i,3,0);
    VL_IN8(I5_i,3,0);
    VL_IN8(I6_i,3,0);
    VL_IN8(I7_i,3,0);
    VL_IN8(I8_i,3,0);
    VL_IN8(I9_i,3,0);
    VL_OUT8(min1_o,3,0);
    VL_OUT8(min2_o,3,0);
    VL_OUT8(index_min1_o,3,0);
    CData/*3:0*/ top__DOT__dut__DOT____Vxrand_h96ff575f__4;
    CData/*3:0*/ top__DOT__dut__DOT____Vxrand_h96ff575f__3;
    CData/*3:0*/ top__DOT__dut__DOT____Vxrand_h96ff575f__2;
    CData/*3:0*/ top__DOT__dut__DOT____Vxrand_h96ff575f__1;
    CData/*3:0*/ top__DOT__dut__DOT____Vxrand_h96ff575f__0;
    CData/*3:0*/ top__DOT__dut__DOT__count_i;
    CData/*3:0*/ top__DOT__dut__DOT__count_k;
    CData/*3:0*/ top__DOT__dut__DOT__tmp_min1;
    CData/*3:0*/ top__DOT__dut__DOT__tmp_min2;
    CData/*3:0*/ top__DOT__dut__DOT__tmp_index;
    CData/*2:0*/ top__DOT__dut__DOT__current_state;
    CData/*3:0*/ top__DOT__dut__DOT____Vlvbound_h3ae7836c__0;
    CData/*3:0*/ top__DOT__dut__DOT____Vlvbound_h99a57719__0;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VlUnpacked<CData/*3:0*/, 10> top__DOT__dut__DOT__array;
    VlUnpacked<CData/*3:0*/, 10> top__DOT__dut__DOT__contain;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
