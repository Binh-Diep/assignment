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
    CData/*3:0*/ top__DOT__dut__DOT__out01_PE;
    CData/*3:0*/ top__DOT__dut__DOT__out02_PE;
    CData/*3:0*/ top__DOT__dut__DOT__out03_PE;
    CData/*3:0*/ top__DOT__dut__DOT__out04_PE;
    CData/*3:0*/ top__DOT__dut__DOT__out05_PE;
    CData/*3:0*/ top__DOT__dut__DOT__out06_PE;
    CData/*3:0*/ top__DOT__dut__DOT__out07_PE;
    CData/*3:0*/ top__DOT__dut__DOT__out08_PE;
    CData/*3:0*/ top__DOT__dut__DOT__out09_PE;
    CData/*3:0*/ top__DOT__dut__DOT__out10_PE;
    SData/*15:0*/ top__DOT__dut__DOT__pin01_or;
    SData/*15:0*/ top__DOT__dut__DOT__pin02_or;
    SData/*15:0*/ top__DOT__dut__DOT__pin03_or;
    SData/*15:0*/ top__DOT__dut__DOT__pin04_or;
    SData/*15:0*/ top__DOT__dut__DOT__pin05_or;
    SData/*15:0*/ top__DOT__dut__DOT__pin06_or;
    SData/*15:0*/ top__DOT__dut__DOT__pin07_or;
    SData/*15:0*/ top__DOT__dut__DOT__pin08_or;
    SData/*15:0*/ top__DOT__dut__DOT__pin09_or;
    SData/*15:0*/ top__DOT__dut__DOT__pin10_or;
    SData/*15:0*/ top__DOT__dut__DOT____Vcellinp__enc01__x_i;
    SData/*15:0*/ top__DOT__dut__DOT____Vcellinp__enc02__x_i;
    SData/*15:0*/ top__DOT__dut__DOT____Vcellinp__enc03__x_i;
    SData/*15:0*/ top__DOT__dut__DOT____Vcellinp__enc04__x_i;
    SData/*15:0*/ top__DOT__dut__DOT____Vcellinp__enc05__x_i;
    SData/*15:0*/ top__DOT__dut__DOT____Vcellinp__enc06__x_i;
    SData/*15:0*/ top__DOT__dut__DOT____Vcellinp__enc07__x_i;
    SData/*15:0*/ top__DOT__dut__DOT____Vcellinp__enc08__x_i;
    SData/*15:0*/ top__DOT__dut__DOT____Vcellinp__enc09__x_i;
    SData/*15:0*/ top__DOT__dut__DOT____Vcellinp__enc10__x_i;
    SData/*15:0*/ top__DOT__dut__DOT____Vcellout__posdec01__y_i;
    SData/*15:0*/ top__DOT__dut__DOT____Vcellout__posdec02__y_i;
    SData/*15:0*/ top__DOT__dut__DOT____Vcellout__posdec03__y_i;
    SData/*15:0*/ top__DOT__dut__DOT____Vcellout__posdec04__y_i;
    SData/*15:0*/ top__DOT__dut__DOT____Vcellout__posdec05__y_i;
    SData/*15:0*/ top__DOT__dut__DOT____Vcellout__posdec06__y_i;
    SData/*15:0*/ top__DOT__dut__DOT____Vcellout__posdec07__y_i;
    SData/*15:0*/ top__DOT__dut__DOT____Vcellout__posdec08__y_i;
    SData/*15:0*/ top__DOT__dut__DOT____Vcellout__posdec09__y_i;
    VlUnpacked<SData/*15:0*/, 9> top__DOT__dut__DOT__out_pos_dec;
    VlUnpacked<SData/*9:0*/, 16> top__DOT__dut__DOT__block_or;
    VlUnpacked<CData/*3:0*/, 10> top__DOT__dut__DOT__RAM;
    VlUnpacked<SData/*15:0*/, 9> __Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec;
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
