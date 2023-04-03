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
    CData/*1:0*/ top__DOT__dut__DOT__couple;
    CData/*5:0*/ top__DOT__dut__DOT__count;
    CData/*3:0*/ top__DOT__dut__DOT__current_state;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VL_IN16(x_i,15,0);
    VL_IN16(y_i,15,0);
    VL_OUT(sqrt_o,21,0);
    IData/*24:0*/ top__DOT__dut__DOT__sq_root;
    IData/*31:0*/ top__DOT__dut__DOT__sq_x;
    IData/*31:0*/ top__DOT__dut__DOT__sq_y;
    QData/*32:0*/ top__DOT__dut__DOT__result_add;
    QData/*33:0*/ top__DOT__dut__DOT__cur_val;
    QData/*35:0*/ top__DOT__dut__DOT__randicand;
    QData/*33:0*/ top__DOT__dut__DOT__test_sign;
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
