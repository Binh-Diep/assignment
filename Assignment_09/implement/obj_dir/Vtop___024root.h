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
    VL_IN8(M_i,7,0);
    VL_IN8(N_i,7,0);
    CData/*2:0*/ top__DOT__dut__DOT__count;
    CData/*2:0*/ top__DOT__dut__DOT__current_state;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VL_OUT16(result_o,15,0);
    SData/*9:0*/ top__DOT__dut__DOT__A_tmp;
    SData/*9:0*/ top__DOT__dut__DOT__Q_tmp;
    SData/*9:0*/ top__DOT__dut__DOT__M_tmp;
    IData/*20:0*/ top__DOT__dut__DOT__REG;
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
