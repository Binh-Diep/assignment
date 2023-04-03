// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlUnpacked<SData/*15:0*/, 16> Vtop__ConstPool__TABLE_h24ce9b7d_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx2;
    CData/*3:0*/ __Vtableidx3;
    CData/*3:0*/ __Vtableidx4;
    CData/*3:0*/ __Vtableidx5;
    CData/*3:0*/ __Vtableidx6;
    CData/*3:0*/ __Vtableidx7;
    CData/*3:0*/ __Vtableidx8;
    CData/*3:0*/ __Vtableidx9;
    CData/*3:0*/ __Vtableidx10;
    CData/*3:0*/ __Vtableidx11;
    CData/*3:0*/ __Vtableidx12;
    CData/*3:0*/ __Vtableidx13;
    CData/*3:0*/ __Vtableidx14;
    CData/*3:0*/ __Vtableidx15;
    CData/*3:0*/ __Vtableidx16;
    CData/*3:0*/ __Vtableidx17;
    CData/*3:0*/ __Vtableidx18;
    CData/*3:0*/ __Vtableidx19;
    // Body
    __Vtableidx1 = vlSelf->I0_i;
    vlSelf->top__DOT__dut__DOT__pin01_or = Vtop__ConstPool__TABLE_h24ce9b7d_0
        [__Vtableidx1];
    __Vtableidx2 = vlSelf->I1_i;
    vlSelf->top__DOT__dut__DOT__pin02_or = Vtop__ConstPool__TABLE_h24ce9b7d_0
        [__Vtableidx2];
    __Vtableidx3 = vlSelf->I2_i;
    vlSelf->top__DOT__dut__DOT__pin03_or = Vtop__ConstPool__TABLE_h24ce9b7d_0
        [__Vtableidx3];
    __Vtableidx4 = vlSelf->I3_i;
    vlSelf->top__DOT__dut__DOT__pin04_or = Vtop__ConstPool__TABLE_h24ce9b7d_0
        [__Vtableidx4];
    __Vtableidx5 = vlSelf->I4_i;
    vlSelf->top__DOT__dut__DOT__pin05_or = Vtop__ConstPool__TABLE_h24ce9b7d_0
        [__Vtableidx5];
    __Vtableidx6 = vlSelf->I5_i;
    vlSelf->top__DOT__dut__DOT__pin06_or = Vtop__ConstPool__TABLE_h24ce9b7d_0
        [__Vtableidx6];
    __Vtableidx7 = vlSelf->I6_i;
    vlSelf->top__DOT__dut__DOT__pin07_or = Vtop__ConstPool__TABLE_h24ce9b7d_0
        [__Vtableidx7];
    __Vtableidx8 = vlSelf->I7_i;
    vlSelf->top__DOT__dut__DOT__pin08_or = Vtop__ConstPool__TABLE_h24ce9b7d_0
        [__Vtableidx8];
    __Vtableidx9 = vlSelf->I8_i;
    vlSelf->top__DOT__dut__DOT__pin09_or = Vtop__ConstPool__TABLE_h24ce9b7d_0
        [__Vtableidx9];
    __Vtableidx10 = vlSelf->I9_i;
    vlSelf->top__DOT__dut__DOT__pin10_or = Vtop__ConstPool__TABLE_h24ce9b7d_0
        [__Vtableidx10];
    vlSelf->top__DOT__dut__DOT__block_or[0U] = ((0x200U 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__pin01_or) 
                                                    >> 6U)) 
                                                | ((0x100U 
                                                    & ((IData)(vlSelf->top__DOT__dut__DOT__pin02_or) 
                                                       >> 7U)) 
                                                   | ((0x80U 
                                                       & ((IData)(vlSelf->top__DOT__dut__DOT__pin03_or) 
                                                          >> 8U)) 
                                                      | ((0x40U 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT__pin04_or) 
                                                             >> 9U)) 
                                                         | ((0x20U 
                                                             & ((IData)(vlSelf->top__DOT__dut__DOT__pin05_or) 
                                                                >> 0xaU)) 
                                                            | ((0x10U 
                                                                & ((IData)(vlSelf->top__DOT__dut__DOT__pin06_or) 
                                                                   >> 0xbU)) 
                                                               | ((8U 
                                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__pin07_or) 
                                                                      >> 0xcU)) 
                                                                  | ((4U 
                                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__pin08_or) 
                                                                         >> 0xdU)) 
                                                                     | ((2U 
                                                                         & ((IData)(vlSelf->top__DOT__dut__DOT__pin09_or) 
                                                                            >> 0xeU)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelf->top__DOT__dut__DOT__pin10_or) 
                                                                              >> 0xfU)))))))))));
    vlSelf->top__DOT__dut__DOT__block_or[1U] = ((0x200U 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__pin01_or) 
                                                    >> 5U)) 
                                                | ((0x100U 
                                                    & ((IData)(vlSelf->top__DOT__dut__DOT__pin02_or) 
                                                       >> 6U)) 
                                                   | ((0x80U 
                                                       & ((IData)(vlSelf->top__DOT__dut__DOT__pin03_or) 
                                                          >> 7U)) 
                                                      | ((0x40U 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT__pin04_or) 
                                                             >> 8U)) 
                                                         | ((0x20U 
                                                             & ((IData)(vlSelf->top__DOT__dut__DOT__pin05_or) 
                                                                >> 9U)) 
                                                            | ((0x10U 
                                                                & ((IData)(vlSelf->top__DOT__dut__DOT__pin06_or) 
                                                                   >> 0xaU)) 
                                                               | ((8U 
                                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__pin07_or) 
                                                                      >> 0xbU)) 
                                                                  | ((4U 
                                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__pin08_or) 
                                                                         >> 0xcU)) 
                                                                     | ((2U 
                                                                         & ((IData)(vlSelf->top__DOT__dut__DOT__pin09_or) 
                                                                            >> 0xdU)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelf->top__DOT__dut__DOT__pin10_or) 
                                                                              >> 0xeU)))))))))));
    vlSelf->top__DOT__dut__DOT__block_or[2U] = ((0x200U 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__pin01_or) 
                                                    >> 4U)) 
                                                | ((0x100U 
                                                    & ((IData)(vlSelf->top__DOT__dut__DOT__pin02_or) 
                                                       >> 5U)) 
                                                   | ((0x80U 
                                                       & ((IData)(vlSelf->top__DOT__dut__DOT__pin03_or) 
                                                          >> 6U)) 
                                                      | ((0x40U 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT__pin04_or) 
                                                             >> 7U)) 
                                                         | ((0x20U 
                                                             & ((IData)(vlSelf->top__DOT__dut__DOT__pin05_or) 
                                                                >> 8U)) 
                                                            | ((0x10U 
                                                                & ((IData)(vlSelf->top__DOT__dut__DOT__pin06_or) 
                                                                   >> 9U)) 
                                                               | ((8U 
                                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__pin07_or) 
                                                                      >> 0xaU)) 
                                                                  | ((4U 
                                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__pin08_or) 
                                                                         >> 0xbU)) 
                                                                     | ((2U 
                                                                         & ((IData)(vlSelf->top__DOT__dut__DOT__pin09_or) 
                                                                            >> 0xcU)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelf->top__DOT__dut__DOT__pin10_or) 
                                                                              >> 0xdU)))))))))));
    vlSelf->top__DOT__dut__DOT__block_or[3U] = ((0x200U 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__pin01_or) 
                                                    >> 3U)) 
                                                | ((0x100U 
                                                    & ((IData)(vlSelf->top__DOT__dut__DOT__pin02_or) 
                                                       >> 4U)) 
                                                   | ((0x80U 
                                                       & ((IData)(vlSelf->top__DOT__dut__DOT__pin03_or) 
                                                          >> 5U)) 
                                                      | ((0x40U 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT__pin04_or) 
                                                             >> 6U)) 
                                                         | ((0x20U 
                                                             & ((IData)(vlSelf->top__DOT__dut__DOT__pin05_or) 
                                                                >> 7U)) 
                                                            | ((0x10U 
                                                                & ((IData)(vlSelf->top__DOT__dut__DOT__pin06_or) 
                                                                   >> 8U)) 
                                                               | ((8U 
                                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__pin07_or) 
                                                                      >> 9U)) 
                                                                  | ((4U 
                                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__pin08_or) 
                                                                         >> 0xaU)) 
                                                                     | ((2U 
                                                                         & ((IData)(vlSelf->top__DOT__dut__DOT__pin09_or) 
                                                                            >> 0xbU)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelf->top__DOT__dut__DOT__pin10_or) 
                                                                              >> 0xcU)))))))))));
    vlSelf->top__DOT__dut__DOT__block_or[4U] = ((0x200U 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__pin01_or) 
                                                    >> 2U)) 
                                                | ((0x100U 
                                                    & ((IData)(vlSelf->top__DOT__dut__DOT__pin02_or) 
                                                       >> 3U)) 
                                                   | ((0x80U 
                                                       & ((IData)(vlSelf->top__DOT__dut__DOT__pin03_or) 
                                                          >> 4U)) 
                                                      | ((0x40U 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT__pin04_or) 
                                                             >> 5U)) 
                                                         | ((0x20U 
                                                             & ((IData)(vlSelf->top__DOT__dut__DOT__pin05_or) 
                                                                >> 6U)) 
                                                            | ((0x10U 
                                                                & ((IData)(vlSelf->top__DOT__dut__DOT__pin06_or) 
                                                                   >> 7U)) 
                                                               | ((8U 
                                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__pin07_or) 
                                                                      >> 8U)) 
                                                                  | ((4U 
                                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__pin08_or) 
                                                                         >> 9U)) 
                                                                     | ((2U 
                                                                         & ((IData)(vlSelf->top__DOT__dut__DOT__pin09_or) 
                                                                            >> 0xaU)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelf->top__DOT__dut__DOT__pin10_or) 
                                                                              >> 0xbU)))))))))));
    vlSelf->top__DOT__dut__DOT__block_or[5U] = ((0x200U 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__pin01_or) 
                                                    >> 1U)) 
                                                | ((0x100U 
                                                    & ((IData)(vlSelf->top__DOT__dut__DOT__pin02_or) 
                                                       >> 2U)) 
                                                   | ((0x80U 
                                                       & ((IData)(vlSelf->top__DOT__dut__DOT__pin03_or) 
                                                          >> 3U)) 
                                                      | ((0x40U 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT__pin04_or) 
                                                             >> 4U)) 
                                                         | ((0x20U 
                                                             & ((IData)(vlSelf->top__DOT__dut__DOT__pin05_or) 
                                                                >> 5U)) 
                                                            | ((0x10U 
                                                                & ((IData)(vlSelf->top__DOT__dut__DOT__pin06_or) 
                                                                   >> 6U)) 
                                                               | ((8U 
                                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__pin07_or) 
                                                                      >> 7U)) 
                                                                  | ((4U 
                                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__pin08_or) 
                                                                         >> 8U)) 
                                                                     | ((2U 
                                                                         & ((IData)(vlSelf->top__DOT__dut__DOT__pin09_or) 
                                                                            >> 9U)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelf->top__DOT__dut__DOT__pin10_or) 
                                                                              >> 0xaU)))))))))));
    vlSelf->top__DOT__dut__DOT__block_or[6U] = ((0x200U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT__pin01_or)) 
                                                | ((0x100U 
                                                    & ((IData)(vlSelf->top__DOT__dut__DOT__pin02_or) 
                                                       >> 1U)) 
                                                   | ((0x80U 
                                                       & ((IData)(vlSelf->top__DOT__dut__DOT__pin03_or) 
                                                          >> 2U)) 
                                                      | ((0x40U 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT__pin04_or) 
                                                             >> 3U)) 
                                                         | ((0x20U 
                                                             & ((IData)(vlSelf->top__DOT__dut__DOT__pin05_or) 
                                                                >> 4U)) 
                                                            | ((0x10U 
                                                                & ((IData)(vlSelf->top__DOT__dut__DOT__pin06_or) 
                                                                   >> 5U)) 
                                                               | ((8U 
                                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__pin07_or) 
                                                                      >> 6U)) 
                                                                  | ((4U 
                                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__pin08_or) 
                                                                         >> 7U)) 
                                                                     | ((2U 
                                                                         & ((IData)(vlSelf->top__DOT__dut__DOT__pin09_or) 
                                                                            >> 8U)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelf->top__DOT__dut__DOT__pin10_or) 
                                                                              >> 9U)))))))))));
    vlSelf->top__DOT__dut__DOT__block_or[7U] = ((0x200U 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__pin01_or) 
                                                    << 1U)) 
                                                | ((0x100U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT__pin02_or)) 
                                                   | ((0x80U 
                                                       & ((IData)(vlSelf->top__DOT__dut__DOT__pin03_or) 
                                                          >> 1U)) 
                                                      | ((0x40U 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT__pin04_or) 
                                                             >> 2U)) 
                                                         | ((0x20U 
                                                             & ((IData)(vlSelf->top__DOT__dut__DOT__pin05_or) 
                                                                >> 3U)) 
                                                            | ((0x10U 
                                                                & ((IData)(vlSelf->top__DOT__dut__DOT__pin06_or) 
                                                                   >> 4U)) 
                                                               | ((8U 
                                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__pin07_or) 
                                                                      >> 5U)) 
                                                                  | ((4U 
                                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__pin08_or) 
                                                                         >> 6U)) 
                                                                     | ((2U 
                                                                         & ((IData)(vlSelf->top__DOT__dut__DOT__pin09_or) 
                                                                            >> 7U)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelf->top__DOT__dut__DOT__pin10_or) 
                                                                              >> 8U)))))))))));
    vlSelf->top__DOT__dut__DOT__block_or[8U] = ((0x200U 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__pin01_or) 
                                                    << 2U)) 
                                                | ((0x100U 
                                                    & ((IData)(vlSelf->top__DOT__dut__DOT__pin02_or) 
                                                       << 1U)) 
                                                   | ((0x80U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT__pin03_or)) 
                                                      | ((0x40U 
                                                          & ((IData)(vlSelf->top__DOT__dut__DOT__pin04_or) 
                                                             >> 1U)) 
                                                         | ((0x20U 
                                                             & ((IData)(vlSelf->top__DOT__dut__DOT__pin05_or) 
                                                                >> 2U)) 
                                                            | ((0x10U 
                                                                & ((IData)(vlSelf->top__DOT__dut__DOT__pin06_or) 
                                                                   >> 3U)) 
                                                               | ((8U 
                                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__pin07_or) 
                                                                      >> 4U)) 
                                                                  | ((4U 
                                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__pin08_or) 
                                                                         >> 5U)) 
                                                                     | ((2U 
                                                                         & ((IData)(vlSelf->top__DOT__dut__DOT__pin09_or) 
                                                                            >> 6U)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelf->top__DOT__dut__DOT__pin10_or) 
                                                                              >> 7U)))))))))));
    vlSelf->top__DOT__dut__DOT__block_or[9U] = ((0x200U 
                                                 & ((IData)(vlSelf->top__DOT__dut__DOT__pin01_or) 
                                                    << 3U)) 
                                                | ((0x100U 
                                                    & ((IData)(vlSelf->top__DOT__dut__DOT__pin02_or) 
                                                       << 2U)) 
                                                   | ((0x80U 
                                                       & ((IData)(vlSelf->top__DOT__dut__DOT__pin03_or) 
                                                          << 1U)) 
                                                      | ((0x40U 
                                                          & (IData)(vlSelf->top__DOT__dut__DOT__pin04_or)) 
                                                         | ((0x20U 
                                                             & ((IData)(vlSelf->top__DOT__dut__DOT__pin05_or) 
                                                                >> 1U)) 
                                                            | ((0x10U 
                                                                & ((IData)(vlSelf->top__DOT__dut__DOT__pin06_or) 
                                                                   >> 2U)) 
                                                               | ((8U 
                                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__pin07_or) 
                                                                      >> 3U)) 
                                                                  | ((4U 
                                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__pin08_or) 
                                                                         >> 4U)) 
                                                                     | ((2U 
                                                                         & ((IData)(vlSelf->top__DOT__dut__DOT__pin09_or) 
                                                                            >> 5U)) 
                                                                        | (1U 
                                                                           & ((IData)(vlSelf->top__DOT__dut__DOT__pin10_or) 
                                                                              >> 6U)))))))))));
    vlSelf->top__DOT__dut__DOT__block_or[0xaU] = ((0x200U 
                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__pin01_or) 
                                                      << 4U)) 
                                                  | ((0x100U 
                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__pin02_or) 
                                                         << 3U)) 
                                                     | ((0x80U 
                                                         & ((IData)(vlSelf->top__DOT__dut__DOT__pin03_or) 
                                                            << 2U)) 
                                                        | ((0x40U 
                                                            & ((IData)(vlSelf->top__DOT__dut__DOT__pin04_or) 
                                                               << 1U)) 
                                                           | ((0x20U 
                                                               & (IData)(vlSelf->top__DOT__dut__DOT__pin05_or)) 
                                                              | ((0x10U 
                                                                  & ((IData)(vlSelf->top__DOT__dut__DOT__pin06_or) 
                                                                     >> 1U)) 
                                                                 | ((8U 
                                                                     & ((IData)(vlSelf->top__DOT__dut__DOT__pin07_or) 
                                                                        >> 2U)) 
                                                                    | ((4U 
                                                                        & ((IData)(vlSelf->top__DOT__dut__DOT__pin08_or) 
                                                                           >> 3U)) 
                                                                       | ((2U 
                                                                           & ((IData)(vlSelf->top__DOT__dut__DOT__pin09_or) 
                                                                              >> 4U)) 
                                                                          | (1U 
                                                                             & ((IData)(vlSelf->top__DOT__dut__DOT__pin10_or) 
                                                                                >> 5U)))))))))));
    vlSelf->top__DOT__dut__DOT__block_or[0xbU] = ((0x200U 
                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__pin01_or) 
                                                      << 5U)) 
                                                  | ((0x100U 
                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__pin02_or) 
                                                         << 4U)) 
                                                     | ((0x80U 
                                                         & ((IData)(vlSelf->top__DOT__dut__DOT__pin03_or) 
                                                            << 3U)) 
                                                        | ((0x40U 
                                                            & ((IData)(vlSelf->top__DOT__dut__DOT__pin04_or) 
                                                               << 2U)) 
                                                           | ((0x20U 
                                                               & ((IData)(vlSelf->top__DOT__dut__DOT__pin05_or) 
                                                                  << 1U)) 
                                                              | ((0x10U 
                                                                  & (IData)(vlSelf->top__DOT__dut__DOT__pin06_or)) 
                                                                 | ((8U 
                                                                     & ((IData)(vlSelf->top__DOT__dut__DOT__pin07_or) 
                                                                        >> 1U)) 
                                                                    | ((4U 
                                                                        & ((IData)(vlSelf->top__DOT__dut__DOT__pin08_or) 
                                                                           >> 2U)) 
                                                                       | ((2U 
                                                                           & ((IData)(vlSelf->top__DOT__dut__DOT__pin09_or) 
                                                                              >> 3U)) 
                                                                          | (1U 
                                                                             & ((IData)(vlSelf->top__DOT__dut__DOT__pin10_or) 
                                                                                >> 4U)))))))))));
    vlSelf->top__DOT__dut__DOT__block_or[0xcU] = ((0x200U 
                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__pin01_or) 
                                                      << 6U)) 
                                                  | ((0x100U 
                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__pin02_or) 
                                                         << 5U)) 
                                                     | ((0x80U 
                                                         & ((IData)(vlSelf->top__DOT__dut__DOT__pin03_or) 
                                                            << 4U)) 
                                                        | ((0x40U 
                                                            & ((IData)(vlSelf->top__DOT__dut__DOT__pin04_or) 
                                                               << 3U)) 
                                                           | ((0x20U 
                                                               & ((IData)(vlSelf->top__DOT__dut__DOT__pin05_or) 
                                                                  << 2U)) 
                                                              | ((0x10U 
                                                                  & ((IData)(vlSelf->top__DOT__dut__DOT__pin06_or) 
                                                                     << 1U)) 
                                                                 | ((8U 
                                                                     & (IData)(vlSelf->top__DOT__dut__DOT__pin07_or)) 
                                                                    | ((4U 
                                                                        & ((IData)(vlSelf->top__DOT__dut__DOT__pin08_or) 
                                                                           >> 1U)) 
                                                                       | ((2U 
                                                                           & ((IData)(vlSelf->top__DOT__dut__DOT__pin09_or) 
                                                                              >> 2U)) 
                                                                          | (1U 
                                                                             & ((IData)(vlSelf->top__DOT__dut__DOT__pin10_or) 
                                                                                >> 3U)))))))))));
    vlSelf->top__DOT__dut__DOT__block_or[0xdU] = ((0x200U 
                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__pin01_or) 
                                                      << 7U)) 
                                                  | ((0x100U 
                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__pin02_or) 
                                                         << 6U)) 
                                                     | ((0x80U 
                                                         & ((IData)(vlSelf->top__DOT__dut__DOT__pin03_or) 
                                                            << 5U)) 
                                                        | ((0x40U 
                                                            & ((IData)(vlSelf->top__DOT__dut__DOT__pin04_or) 
                                                               << 4U)) 
                                                           | ((0x20U 
                                                               & ((IData)(vlSelf->top__DOT__dut__DOT__pin05_or) 
                                                                  << 3U)) 
                                                              | ((0x10U 
                                                                  & ((IData)(vlSelf->top__DOT__dut__DOT__pin06_or) 
                                                                     << 2U)) 
                                                                 | ((8U 
                                                                     & ((IData)(vlSelf->top__DOT__dut__DOT__pin07_or) 
                                                                        << 1U)) 
                                                                    | ((4U 
                                                                        & (IData)(vlSelf->top__DOT__dut__DOT__pin08_or)) 
                                                                       | ((2U 
                                                                           & ((IData)(vlSelf->top__DOT__dut__DOT__pin09_or) 
                                                                              >> 1U)) 
                                                                          | (1U 
                                                                             & ((IData)(vlSelf->top__DOT__dut__DOT__pin10_or) 
                                                                                >> 2U)))))))))));
    vlSelf->top__DOT__dut__DOT__block_or[0xeU] = ((0x200U 
                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__pin01_or) 
                                                      << 8U)) 
                                                  | ((0x100U 
                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__pin02_or) 
                                                         << 7U)) 
                                                     | ((0x80U 
                                                         & ((IData)(vlSelf->top__DOT__dut__DOT__pin03_or) 
                                                            << 6U)) 
                                                        | ((0x40U 
                                                            & ((IData)(vlSelf->top__DOT__dut__DOT__pin04_or) 
                                                               << 5U)) 
                                                           | ((0x20U 
                                                               & ((IData)(vlSelf->top__DOT__dut__DOT__pin05_or) 
                                                                  << 4U)) 
                                                              | ((0x10U 
                                                                  & ((IData)(vlSelf->top__DOT__dut__DOT__pin06_or) 
                                                                     << 3U)) 
                                                                 | ((8U 
                                                                     & ((IData)(vlSelf->top__DOT__dut__DOT__pin07_or) 
                                                                        << 2U)) 
                                                                    | ((4U 
                                                                        & ((IData)(vlSelf->top__DOT__dut__DOT__pin08_or) 
                                                                           << 1U)) 
                                                                       | ((2U 
                                                                           & (IData)(vlSelf->top__DOT__dut__DOT__pin09_or)) 
                                                                          | (1U 
                                                                             & ((IData)(vlSelf->top__DOT__dut__DOT__pin10_or) 
                                                                                >> 1U)))))))))));
    vlSelf->top__DOT__dut__DOT__block_or[0xfU] = ((0x200U 
                                                   & ((IData)(vlSelf->top__DOT__dut__DOT__pin01_or) 
                                                      << 9U)) 
                                                  | ((0x100U 
                                                      & ((IData)(vlSelf->top__DOT__dut__DOT__pin02_or) 
                                                         << 8U)) 
                                                     | ((0x80U 
                                                         & ((IData)(vlSelf->top__DOT__dut__DOT__pin03_or) 
                                                            << 7U)) 
                                                        | ((0x40U 
                                                            & ((IData)(vlSelf->top__DOT__dut__DOT__pin04_or) 
                                                               << 6U)) 
                                                           | ((0x20U 
                                                               & ((IData)(vlSelf->top__DOT__dut__DOT__pin05_or) 
                                                                  << 5U)) 
                                                              | ((0x10U 
                                                                  & ((IData)(vlSelf->top__DOT__dut__DOT__pin06_or) 
                                                                     << 4U)) 
                                                                 | ((8U 
                                                                     & ((IData)(vlSelf->top__DOT__dut__DOT__pin07_or) 
                                                                        << 3U)) 
                                                                    | ((4U 
                                                                        & ((IData)(vlSelf->top__DOT__dut__DOT__pin08_or) 
                                                                           << 2U)) 
                                                                       | ((2U 
                                                                           & ((IData)(vlSelf->top__DOT__dut__DOT__pin09_or) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & (IData)(vlSelf->top__DOT__dut__DOT__pin10_or)))))))))));
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i 
        = (((IData)((0U != vlSelf->top__DOT__dut__DOT__block_or
                     [0U])) << 0xfU) | (((IData)((0U 
                                                  != 
                                                  vlSelf->top__DOT__dut__DOT__block_or
                                                  [1U])) 
                                         << 0xeU) | 
                                        (((IData)((0U 
                                                   != 
                                                   vlSelf->top__DOT__dut__DOT__block_or
                                                   [2U])) 
                                          << 0xdU) 
                                         | (((IData)(
                                                     (0U 
                                                      != 
                                                      vlSelf->top__DOT__dut__DOT__block_or
                                                      [3U])) 
                                             << 0xcU) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         vlSelf->top__DOT__dut__DOT__block_or
                                                         [4U])) 
                                                << 0xbU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            vlSelf->top__DOT__dut__DOT__block_or
                                                            [5U])) 
                                                   << 0xaU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               vlSelf->top__DOT__dut__DOT__block_or
                                                               [6U])) 
                                                      << 9U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  vlSelf->top__DOT__dut__DOT__block_or
                                                                  [7U])) 
                                                         << 8U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     vlSelf->top__DOT__dut__DOT__block_or
                                                                     [8U])) 
                                                            << 7U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        vlSelf->top__DOT__dut__DOT__block_or
                                                                        [9U])) 
                                                               << 6U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           vlSelf->top__DOT__dut__DOT__block_or
                                                                           [0xaU])) 
                                                                  << 5U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              vlSelf->top__DOT__dut__DOT__block_or
                                                                              [0xbU])) 
                                                                     << 4U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xcU])) 
                                                                        << 3U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xdU])) 
                                                                           << 2U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xeU])) 
                                                                              << 1U) 
                                                                             | (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xfU]))))))))))))))));
    vlSelf->top__DOT__dut__DOT__out01_PE = ((((((((
                                                   (0x8000U 
                                                    == 
                                                    (0x8000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i))) 
                                                   | (0x4000U 
                                                      == 
                                                      (0xc000U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))) 
                                                  | (0x2000U 
                                                     == 
                                                     (0xe000U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))) 
                                                 | (0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))) 
                                                | (0x800U 
                                                   == 
                                                   (0xf800U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))) 
                                               | (0x400U 
                                                  == 
                                                  (0xfc00U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))) 
                                              | (0x200U 
                                                 == 
                                                 (0xfe00U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))) 
                                             | (0x100U 
                                                == 
                                                (0xff00U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i))))
                                             ? ((0x8000U 
                                                 == 
                                                 (0x8000U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))
                                                 ? 0U
                                                 : 
                                                ((0x4000U 
                                                  == 
                                                  (0xc000U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))
                                                  ? 1U
                                                  : 
                                                 ((0x2000U 
                                                   == 
                                                   (0xe000U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))
                                                   ? 2U
                                                   : 
                                                  ((0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))
                                                    ? 3U
                                                    : 
                                                   ((0x800U 
                                                     == 
                                                     (0xf800U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))
                                                     ? 4U
                                                     : 
                                                    ((0x400U 
                                                      == 
                                                      (0xfc00U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))
                                                      ? 5U
                                                      : 
                                                     ((0x200U 
                                                       == 
                                                       (0xfe00U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))
                                                       ? 6U
                                                       : 7U)))))))
                                             : ((((
                                                   (((((0x80U 
                                                        == 
                                                        (0xff80U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i))) 
                                                       | (0x40U 
                                                          == 
                                                          (0xffc0U 
                                                           & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))) 
                                                      | (0x20U 
                                                         == 
                                                         (0xffe0U 
                                                          & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))) 
                                                     | (0x10U 
                                                        == 
                                                        (0xfff0U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))) 
                                                    | (8U 
                                                       == 
                                                       (0xfff8U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))) 
                                                   | (4U 
                                                      == 
                                                      (0xfffcU 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))) 
                                                  | (2U 
                                                     == 
                                                     (0xfffeU 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))) 
                                                 | (1U 
                                                    == (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))
                                                 ? 
                                                ((0x80U 
                                                  == 
                                                  (0xff80U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))
                                                  ? 8U
                                                  : 
                                                 ((0x40U 
                                                   == 
                                                   (0xffc0U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))
                                                   ? 9U
                                                   : 
                                                  ((0x20U 
                                                    == 
                                                    (0xffe0U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))
                                                    ? 0xaU
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0xfff0U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))
                                                     ? 0xbU
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfff8U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))
                                                      ? 0xcU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0xfffcU 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))
                                                       ? 0xdU
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (0xfffeU 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc01__x_i)))
                                                        ? 0xeU
                                                        : 0xfU)))))))
                                                 : 0U));
    vlSelf->top__DOT__dut__DOT__RAM[0U] = vlSelf->top__DOT__dut__DOT__out01_PE;
    __Vtableidx11 = vlSelf->top__DOT__dut__DOT__out01_PE;
    vlSelf->top__DOT__dut__DOT____Vcellout__posdec01__y_i 
        = Vtop__ConstPool__TABLE_h24ce9b7d_0[__Vtableidx11];
    vlSelf->top__DOT__dut__DOT__out_pos_dec[0U] = vlSelf->top__DOT__dut__DOT____Vcellout__posdec01__y_i;
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i 
        = ((((IData)((0U != vlSelf->top__DOT__dut__DOT__block_or
                      [0U])) << 0xfU) | (((IData)((0U 
                                                   != 
                                                   vlSelf->top__DOT__dut__DOT__block_or
                                                   [1U])) 
                                          << 0xeU) 
                                         | (((IData)(
                                                     (0U 
                                                      != 
                                                      vlSelf->top__DOT__dut__DOT__block_or
                                                      [2U])) 
                                             << 0xdU) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         vlSelf->top__DOT__dut__DOT__block_or
                                                         [3U])) 
                                                << 0xcU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            vlSelf->top__DOT__dut__DOT__block_or
                                                            [4U])) 
                                                   << 0xbU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               vlSelf->top__DOT__dut__DOT__block_or
                                                               [5U])) 
                                                      << 0xaU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  vlSelf->top__DOT__dut__DOT__block_or
                                                                  [6U])) 
                                                         << 9U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     vlSelf->top__DOT__dut__DOT__block_or
                                                                     [7U])) 
                                                            << 8U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        vlSelf->top__DOT__dut__DOT__block_or
                                                                        [8U])) 
                                                               << 7U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           vlSelf->top__DOT__dut__DOT__block_or
                                                                           [9U])) 
                                                                  << 6U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              vlSelf->top__DOT__dut__DOT__block_or
                                                                              [0xaU])) 
                                                                     << 5U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xbU])) 
                                                                        << 4U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xcU])) 
                                                                           << 3U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xdU])) 
                                                                              << 2U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xeU])) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xfU])))))))))))))))) 
           & (~ vlSelf->top__DOT__dut__DOT__out_pos_dec
              [8U]));
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i 
        = ((((IData)((0U != vlSelf->top__DOT__dut__DOT__block_or
                      [0U])) << 0xfU) | (((IData)((0U 
                                                   != 
                                                   vlSelf->top__DOT__dut__DOT__block_or
                                                   [1U])) 
                                          << 0xeU) 
                                         | (((IData)(
                                                     (0U 
                                                      != 
                                                      vlSelf->top__DOT__dut__DOT__block_or
                                                      [2U])) 
                                             << 0xdU) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         vlSelf->top__DOT__dut__DOT__block_or
                                                         [3U])) 
                                                << 0xcU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            vlSelf->top__DOT__dut__DOT__block_or
                                                            [4U])) 
                                                   << 0xbU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               vlSelf->top__DOT__dut__DOT__block_or
                                                               [5U])) 
                                                      << 0xaU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  vlSelf->top__DOT__dut__DOT__block_or
                                                                  [6U])) 
                                                         << 9U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     vlSelf->top__DOT__dut__DOT__block_or
                                                                     [7U])) 
                                                            << 8U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        vlSelf->top__DOT__dut__DOT__block_or
                                                                        [8U])) 
                                                               << 7U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           vlSelf->top__DOT__dut__DOT__block_or
                                                                           [9U])) 
                                                                  << 6U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              vlSelf->top__DOT__dut__DOT__block_or
                                                                              [0xaU])) 
                                                                     << 5U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xbU])) 
                                                                        << 4U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xcU])) 
                                                                           << 3U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xdU])) 
                                                                              << 2U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xeU])) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xfU])))))))))))))))) 
           & (~ vlSelf->top__DOT__dut__DOT__out_pos_dec
              [0U]));
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i 
        = ((((IData)((0U != vlSelf->top__DOT__dut__DOT__block_or
                      [0U])) << 0xfU) | (((IData)((0U 
                                                   != 
                                                   vlSelf->top__DOT__dut__DOT__block_or
                                                   [1U])) 
                                          << 0xeU) 
                                         | (((IData)(
                                                     (0U 
                                                      != 
                                                      vlSelf->top__DOT__dut__DOT__block_or
                                                      [2U])) 
                                             << 0xdU) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         vlSelf->top__DOT__dut__DOT__block_or
                                                         [3U])) 
                                                << 0xcU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            vlSelf->top__DOT__dut__DOT__block_or
                                                            [4U])) 
                                                   << 0xbU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               vlSelf->top__DOT__dut__DOT__block_or
                                                               [5U])) 
                                                      << 0xaU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  vlSelf->top__DOT__dut__DOT__block_or
                                                                  [6U])) 
                                                         << 9U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     vlSelf->top__DOT__dut__DOT__block_or
                                                                     [7U])) 
                                                            << 8U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        vlSelf->top__DOT__dut__DOT__block_or
                                                                        [8U])) 
                                                               << 7U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           vlSelf->top__DOT__dut__DOT__block_or
                                                                           [9U])) 
                                                                  << 6U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              vlSelf->top__DOT__dut__DOT__block_or
                                                                              [0xaU])) 
                                                                     << 5U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xbU])) 
                                                                        << 4U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xcU])) 
                                                                           << 3U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xdU])) 
                                                                              << 2U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xeU])) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xfU])))))))))))))))) 
           & (~ vlSelf->top__DOT__dut__DOT__out_pos_dec
              [1U]));
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i 
        = ((((IData)((0U != vlSelf->top__DOT__dut__DOT__block_or
                      [0U])) << 0xfU) | (((IData)((0U 
                                                   != 
                                                   vlSelf->top__DOT__dut__DOT__block_or
                                                   [1U])) 
                                          << 0xeU) 
                                         | (((IData)(
                                                     (0U 
                                                      != 
                                                      vlSelf->top__DOT__dut__DOT__block_or
                                                      [2U])) 
                                             << 0xdU) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         vlSelf->top__DOT__dut__DOT__block_or
                                                         [3U])) 
                                                << 0xcU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            vlSelf->top__DOT__dut__DOT__block_or
                                                            [4U])) 
                                                   << 0xbU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               vlSelf->top__DOT__dut__DOT__block_or
                                                               [5U])) 
                                                      << 0xaU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  vlSelf->top__DOT__dut__DOT__block_or
                                                                  [6U])) 
                                                         << 9U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     vlSelf->top__DOT__dut__DOT__block_or
                                                                     [7U])) 
                                                            << 8U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        vlSelf->top__DOT__dut__DOT__block_or
                                                                        [8U])) 
                                                               << 7U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           vlSelf->top__DOT__dut__DOT__block_or
                                                                           [9U])) 
                                                                  << 6U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              vlSelf->top__DOT__dut__DOT__block_or
                                                                              [0xaU])) 
                                                                     << 5U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xbU])) 
                                                                        << 4U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xcU])) 
                                                                           << 3U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xdU])) 
                                                                              << 2U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xeU])) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xfU])))))))))))))))) 
           & (~ vlSelf->top__DOT__dut__DOT__out_pos_dec
              [2U]));
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i 
        = ((((IData)((0U != vlSelf->top__DOT__dut__DOT__block_or
                      [0U])) << 0xfU) | (((IData)((0U 
                                                   != 
                                                   vlSelf->top__DOT__dut__DOT__block_or
                                                   [1U])) 
                                          << 0xeU) 
                                         | (((IData)(
                                                     (0U 
                                                      != 
                                                      vlSelf->top__DOT__dut__DOT__block_or
                                                      [2U])) 
                                             << 0xdU) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         vlSelf->top__DOT__dut__DOT__block_or
                                                         [3U])) 
                                                << 0xcU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            vlSelf->top__DOT__dut__DOT__block_or
                                                            [4U])) 
                                                   << 0xbU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               vlSelf->top__DOT__dut__DOT__block_or
                                                               [5U])) 
                                                      << 0xaU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  vlSelf->top__DOT__dut__DOT__block_or
                                                                  [6U])) 
                                                         << 9U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     vlSelf->top__DOT__dut__DOT__block_or
                                                                     [7U])) 
                                                            << 8U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        vlSelf->top__DOT__dut__DOT__block_or
                                                                        [8U])) 
                                                               << 7U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           vlSelf->top__DOT__dut__DOT__block_or
                                                                           [9U])) 
                                                                  << 6U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              vlSelf->top__DOT__dut__DOT__block_or
                                                                              [0xaU])) 
                                                                     << 5U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xbU])) 
                                                                        << 4U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xcU])) 
                                                                           << 3U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xdU])) 
                                                                              << 2U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xeU])) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xfU])))))))))))))))) 
           & (~ vlSelf->top__DOT__dut__DOT__out_pos_dec
              [3U]));
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i 
        = ((((IData)((0U != vlSelf->top__DOT__dut__DOT__block_or
                      [0U])) << 0xfU) | (((IData)((0U 
                                                   != 
                                                   vlSelf->top__DOT__dut__DOT__block_or
                                                   [1U])) 
                                          << 0xeU) 
                                         | (((IData)(
                                                     (0U 
                                                      != 
                                                      vlSelf->top__DOT__dut__DOT__block_or
                                                      [2U])) 
                                             << 0xdU) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         vlSelf->top__DOT__dut__DOT__block_or
                                                         [3U])) 
                                                << 0xcU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            vlSelf->top__DOT__dut__DOT__block_or
                                                            [4U])) 
                                                   << 0xbU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               vlSelf->top__DOT__dut__DOT__block_or
                                                               [5U])) 
                                                      << 0xaU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  vlSelf->top__DOT__dut__DOT__block_or
                                                                  [6U])) 
                                                         << 9U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     vlSelf->top__DOT__dut__DOT__block_or
                                                                     [7U])) 
                                                            << 8U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        vlSelf->top__DOT__dut__DOT__block_or
                                                                        [8U])) 
                                                               << 7U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           vlSelf->top__DOT__dut__DOT__block_or
                                                                           [9U])) 
                                                                  << 6U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              vlSelf->top__DOT__dut__DOT__block_or
                                                                              [0xaU])) 
                                                                     << 5U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xbU])) 
                                                                        << 4U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xcU])) 
                                                                           << 3U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xdU])) 
                                                                              << 2U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xeU])) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xfU])))))))))))))))) 
           & (~ vlSelf->top__DOT__dut__DOT__out_pos_dec
              [4U]));
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i 
        = ((((IData)((0U != vlSelf->top__DOT__dut__DOT__block_or
                      [0U])) << 0xfU) | (((IData)((0U 
                                                   != 
                                                   vlSelf->top__DOT__dut__DOT__block_or
                                                   [1U])) 
                                          << 0xeU) 
                                         | (((IData)(
                                                     (0U 
                                                      != 
                                                      vlSelf->top__DOT__dut__DOT__block_or
                                                      [2U])) 
                                             << 0xdU) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         vlSelf->top__DOT__dut__DOT__block_or
                                                         [3U])) 
                                                << 0xcU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            vlSelf->top__DOT__dut__DOT__block_or
                                                            [4U])) 
                                                   << 0xbU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               vlSelf->top__DOT__dut__DOT__block_or
                                                               [5U])) 
                                                      << 0xaU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  vlSelf->top__DOT__dut__DOT__block_or
                                                                  [6U])) 
                                                         << 9U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     vlSelf->top__DOT__dut__DOT__block_or
                                                                     [7U])) 
                                                            << 8U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        vlSelf->top__DOT__dut__DOT__block_or
                                                                        [8U])) 
                                                               << 7U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           vlSelf->top__DOT__dut__DOT__block_or
                                                                           [9U])) 
                                                                  << 6U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              vlSelf->top__DOT__dut__DOT__block_or
                                                                              [0xaU])) 
                                                                     << 5U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xbU])) 
                                                                        << 4U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xcU])) 
                                                                           << 3U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xdU])) 
                                                                              << 2U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xeU])) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xfU])))))))))))))))) 
           & (~ vlSelf->top__DOT__dut__DOT__out_pos_dec
              [5U]));
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i 
        = ((((IData)((0U != vlSelf->top__DOT__dut__DOT__block_or
                      [0U])) << 0xfU) | (((IData)((0U 
                                                   != 
                                                   vlSelf->top__DOT__dut__DOT__block_or
                                                   [1U])) 
                                          << 0xeU) 
                                         | (((IData)(
                                                     (0U 
                                                      != 
                                                      vlSelf->top__DOT__dut__DOT__block_or
                                                      [2U])) 
                                             << 0xdU) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         vlSelf->top__DOT__dut__DOT__block_or
                                                         [3U])) 
                                                << 0xcU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            vlSelf->top__DOT__dut__DOT__block_or
                                                            [4U])) 
                                                   << 0xbU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               vlSelf->top__DOT__dut__DOT__block_or
                                                               [5U])) 
                                                      << 0xaU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  vlSelf->top__DOT__dut__DOT__block_or
                                                                  [6U])) 
                                                         << 9U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     vlSelf->top__DOT__dut__DOT__block_or
                                                                     [7U])) 
                                                            << 8U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        vlSelf->top__DOT__dut__DOT__block_or
                                                                        [8U])) 
                                                               << 7U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           vlSelf->top__DOT__dut__DOT__block_or
                                                                           [9U])) 
                                                                  << 6U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              vlSelf->top__DOT__dut__DOT__block_or
                                                                              [0xaU])) 
                                                                     << 5U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xbU])) 
                                                                        << 4U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xcU])) 
                                                                           << 3U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xdU])) 
                                                                              << 2U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xeU])) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xfU])))))))))))))))) 
           & (~ vlSelf->top__DOT__dut__DOT__out_pos_dec
              [6U]));
    vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i 
        = ((((IData)((0U != vlSelf->top__DOT__dut__DOT__block_or
                      [0U])) << 0xfU) | (((IData)((0U 
                                                   != 
                                                   vlSelf->top__DOT__dut__DOT__block_or
                                                   [1U])) 
                                          << 0xeU) 
                                         | (((IData)(
                                                     (0U 
                                                      != 
                                                      vlSelf->top__DOT__dut__DOT__block_or
                                                      [2U])) 
                                             << 0xdU) 
                                            | (((IData)(
                                                        (0U 
                                                         != 
                                                         vlSelf->top__DOT__dut__DOT__block_or
                                                         [3U])) 
                                                << 0xcU) 
                                               | (((IData)(
                                                           (0U 
                                                            != 
                                                            vlSelf->top__DOT__dut__DOT__block_or
                                                            [4U])) 
                                                   << 0xbU) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               vlSelf->top__DOT__dut__DOT__block_or
                                                               [5U])) 
                                                      << 0xaU) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  vlSelf->top__DOT__dut__DOT__block_or
                                                                  [6U])) 
                                                         << 9U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     vlSelf->top__DOT__dut__DOT__block_or
                                                                     [7U])) 
                                                            << 8U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        vlSelf->top__DOT__dut__DOT__block_or
                                                                        [8U])) 
                                                               << 7U) 
                                                              | (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           vlSelf->top__DOT__dut__DOT__block_or
                                                                           [9U])) 
                                                                  << 6U) 
                                                                 | (((IData)(
                                                                             (0U 
                                                                              != 
                                                                              vlSelf->top__DOT__dut__DOT__block_or
                                                                              [0xaU])) 
                                                                     << 5U) 
                                                                    | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xbU])) 
                                                                        << 4U) 
                                                                       | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xcU])) 
                                                                           << 3U) 
                                                                          | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xdU])) 
                                                                              << 2U) 
                                                                             | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xeU])) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != 
                                                                                vlSelf->top__DOT__dut__DOT__block_or
                                                                                [0xfU])))))))))))))))) 
           & (~ vlSelf->top__DOT__dut__DOT__out_pos_dec
              [7U]));
    vlSelf->top__DOT__dut__DOT__out10_PE = ((((((((
                                                   (0x8000U 
                                                    == 
                                                    (0x8000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i))) 
                                                   | (0x4000U 
                                                      == 
                                                      (0xc000U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))) 
                                                  | (0x2000U 
                                                     == 
                                                     (0xe000U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))) 
                                                 | (0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))) 
                                                | (0x800U 
                                                   == 
                                                   (0xf800U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))) 
                                               | (0x400U 
                                                  == 
                                                  (0xfc00U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))) 
                                              | (0x200U 
                                                 == 
                                                 (0xfe00U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))) 
                                             | (0x100U 
                                                == 
                                                (0xff00U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i))))
                                             ? ((0x8000U 
                                                 == 
                                                 (0x8000U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))
                                                 ? 0U
                                                 : 
                                                ((0x4000U 
                                                  == 
                                                  (0xc000U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))
                                                  ? 1U
                                                  : 
                                                 ((0x2000U 
                                                   == 
                                                   (0xe000U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))
                                                   ? 2U
                                                   : 
                                                  ((0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))
                                                    ? 3U
                                                    : 
                                                   ((0x800U 
                                                     == 
                                                     (0xf800U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))
                                                     ? 4U
                                                     : 
                                                    ((0x400U 
                                                      == 
                                                      (0xfc00U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))
                                                      ? 5U
                                                      : 
                                                     ((0x200U 
                                                       == 
                                                       (0xfe00U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))
                                                       ? 6U
                                                       : 7U)))))))
                                             : ((((
                                                   (((((0x80U 
                                                        == 
                                                        (0xff80U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i))) 
                                                       | (0x40U 
                                                          == 
                                                          (0xffc0U 
                                                           & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))) 
                                                      | (0x20U 
                                                         == 
                                                         (0xffe0U 
                                                          & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))) 
                                                     | (0x10U 
                                                        == 
                                                        (0xfff0U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))) 
                                                    | (8U 
                                                       == 
                                                       (0xfff8U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))) 
                                                   | (4U 
                                                      == 
                                                      (0xfffcU 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))) 
                                                  | (2U 
                                                     == 
                                                     (0xfffeU 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))) 
                                                 | (1U 
                                                    == (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))
                                                 ? 
                                                ((0x80U 
                                                  == 
                                                  (0xff80U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))
                                                  ? 8U
                                                  : 
                                                 ((0x40U 
                                                   == 
                                                   (0xffc0U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))
                                                   ? 9U
                                                   : 
                                                  ((0x20U 
                                                    == 
                                                    (0xffe0U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))
                                                    ? 0xaU
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0xfff0U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))
                                                     ? 0xbU
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfff8U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))
                                                      ? 0xcU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0xfffcU 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))
                                                       ? 0xdU
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (0xfffeU 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc10__x_i)))
                                                        ? 0xeU
                                                        : 0xfU)))))))
                                                 : 0U));
    vlSelf->top__DOT__dut__DOT__out02_PE = ((((((((
                                                   (0x8000U 
                                                    == 
                                                    (0x8000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i))) 
                                                   | (0x4000U 
                                                      == 
                                                      (0xc000U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))) 
                                                  | (0x2000U 
                                                     == 
                                                     (0xe000U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))) 
                                                 | (0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))) 
                                                | (0x800U 
                                                   == 
                                                   (0xf800U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))) 
                                               | (0x400U 
                                                  == 
                                                  (0xfc00U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))) 
                                              | (0x200U 
                                                 == 
                                                 (0xfe00U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))) 
                                             | (0x100U 
                                                == 
                                                (0xff00U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i))))
                                             ? ((0x8000U 
                                                 == 
                                                 (0x8000U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))
                                                 ? 0U
                                                 : 
                                                ((0x4000U 
                                                  == 
                                                  (0xc000U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))
                                                  ? 1U
                                                  : 
                                                 ((0x2000U 
                                                   == 
                                                   (0xe000U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))
                                                   ? 2U
                                                   : 
                                                  ((0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))
                                                    ? 3U
                                                    : 
                                                   ((0x800U 
                                                     == 
                                                     (0xf800U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))
                                                     ? 4U
                                                     : 
                                                    ((0x400U 
                                                      == 
                                                      (0xfc00U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))
                                                      ? 5U
                                                      : 
                                                     ((0x200U 
                                                       == 
                                                       (0xfe00U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))
                                                       ? 6U
                                                       : 7U)))))))
                                             : ((((
                                                   (((((0x80U 
                                                        == 
                                                        (0xff80U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i))) 
                                                       | (0x40U 
                                                          == 
                                                          (0xffc0U 
                                                           & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))) 
                                                      | (0x20U 
                                                         == 
                                                         (0xffe0U 
                                                          & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))) 
                                                     | (0x10U 
                                                        == 
                                                        (0xfff0U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))) 
                                                    | (8U 
                                                       == 
                                                       (0xfff8U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))) 
                                                   | (4U 
                                                      == 
                                                      (0xfffcU 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))) 
                                                  | (2U 
                                                     == 
                                                     (0xfffeU 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))) 
                                                 | (1U 
                                                    == (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))
                                                 ? 
                                                ((0x80U 
                                                  == 
                                                  (0xff80U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))
                                                  ? 8U
                                                  : 
                                                 ((0x40U 
                                                   == 
                                                   (0xffc0U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))
                                                   ? 9U
                                                   : 
                                                  ((0x20U 
                                                    == 
                                                    (0xffe0U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))
                                                    ? 0xaU
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0xfff0U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))
                                                     ? 0xbU
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfff8U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))
                                                      ? 0xcU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0xfffcU 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))
                                                       ? 0xdU
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (0xfffeU 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc02__x_i)))
                                                        ? 0xeU
                                                        : 0xfU)))))))
                                                 : 0U));
    vlSelf->top__DOT__dut__DOT__out03_PE = ((((((((
                                                   (0x8000U 
                                                    == 
                                                    (0x8000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i))) 
                                                   | (0x4000U 
                                                      == 
                                                      (0xc000U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))) 
                                                  | (0x2000U 
                                                     == 
                                                     (0xe000U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))) 
                                                 | (0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))) 
                                                | (0x800U 
                                                   == 
                                                   (0xf800U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))) 
                                               | (0x400U 
                                                  == 
                                                  (0xfc00U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))) 
                                              | (0x200U 
                                                 == 
                                                 (0xfe00U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))) 
                                             | (0x100U 
                                                == 
                                                (0xff00U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i))))
                                             ? ((0x8000U 
                                                 == 
                                                 (0x8000U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))
                                                 ? 0U
                                                 : 
                                                ((0x4000U 
                                                  == 
                                                  (0xc000U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))
                                                  ? 1U
                                                  : 
                                                 ((0x2000U 
                                                   == 
                                                   (0xe000U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))
                                                   ? 2U
                                                   : 
                                                  ((0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))
                                                    ? 3U
                                                    : 
                                                   ((0x800U 
                                                     == 
                                                     (0xf800U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))
                                                     ? 4U
                                                     : 
                                                    ((0x400U 
                                                      == 
                                                      (0xfc00U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))
                                                      ? 5U
                                                      : 
                                                     ((0x200U 
                                                       == 
                                                       (0xfe00U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))
                                                       ? 6U
                                                       : 7U)))))))
                                             : ((((
                                                   (((((0x80U 
                                                        == 
                                                        (0xff80U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i))) 
                                                       | (0x40U 
                                                          == 
                                                          (0xffc0U 
                                                           & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))) 
                                                      | (0x20U 
                                                         == 
                                                         (0xffe0U 
                                                          & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))) 
                                                     | (0x10U 
                                                        == 
                                                        (0xfff0U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))) 
                                                    | (8U 
                                                       == 
                                                       (0xfff8U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))) 
                                                   | (4U 
                                                      == 
                                                      (0xfffcU 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))) 
                                                  | (2U 
                                                     == 
                                                     (0xfffeU 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))) 
                                                 | (1U 
                                                    == (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))
                                                 ? 
                                                ((0x80U 
                                                  == 
                                                  (0xff80U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))
                                                  ? 8U
                                                  : 
                                                 ((0x40U 
                                                   == 
                                                   (0xffc0U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))
                                                   ? 9U
                                                   : 
                                                  ((0x20U 
                                                    == 
                                                    (0xffe0U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))
                                                    ? 0xaU
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0xfff0U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))
                                                     ? 0xbU
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfff8U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))
                                                      ? 0xcU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0xfffcU 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))
                                                       ? 0xdU
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (0xfffeU 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc03__x_i)))
                                                        ? 0xeU
                                                        : 0xfU)))))))
                                                 : 0U));
    vlSelf->top__DOT__dut__DOT__out04_PE = ((((((((
                                                   (0x8000U 
                                                    == 
                                                    (0x8000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i))) 
                                                   | (0x4000U 
                                                      == 
                                                      (0xc000U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))) 
                                                  | (0x2000U 
                                                     == 
                                                     (0xe000U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))) 
                                                 | (0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))) 
                                                | (0x800U 
                                                   == 
                                                   (0xf800U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))) 
                                               | (0x400U 
                                                  == 
                                                  (0xfc00U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))) 
                                              | (0x200U 
                                                 == 
                                                 (0xfe00U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))) 
                                             | (0x100U 
                                                == 
                                                (0xff00U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i))))
                                             ? ((0x8000U 
                                                 == 
                                                 (0x8000U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))
                                                 ? 0U
                                                 : 
                                                ((0x4000U 
                                                  == 
                                                  (0xc000U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))
                                                  ? 1U
                                                  : 
                                                 ((0x2000U 
                                                   == 
                                                   (0xe000U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))
                                                   ? 2U
                                                   : 
                                                  ((0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))
                                                    ? 3U
                                                    : 
                                                   ((0x800U 
                                                     == 
                                                     (0xf800U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))
                                                     ? 4U
                                                     : 
                                                    ((0x400U 
                                                      == 
                                                      (0xfc00U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))
                                                      ? 5U
                                                      : 
                                                     ((0x200U 
                                                       == 
                                                       (0xfe00U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))
                                                       ? 6U
                                                       : 7U)))))))
                                             : ((((
                                                   (((((0x80U 
                                                        == 
                                                        (0xff80U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i))) 
                                                       | (0x40U 
                                                          == 
                                                          (0xffc0U 
                                                           & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))) 
                                                      | (0x20U 
                                                         == 
                                                         (0xffe0U 
                                                          & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))) 
                                                     | (0x10U 
                                                        == 
                                                        (0xfff0U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))) 
                                                    | (8U 
                                                       == 
                                                       (0xfff8U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))) 
                                                   | (4U 
                                                      == 
                                                      (0xfffcU 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))) 
                                                  | (2U 
                                                     == 
                                                     (0xfffeU 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))) 
                                                 | (1U 
                                                    == (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))
                                                 ? 
                                                ((0x80U 
                                                  == 
                                                  (0xff80U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))
                                                  ? 8U
                                                  : 
                                                 ((0x40U 
                                                   == 
                                                   (0xffc0U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))
                                                   ? 9U
                                                   : 
                                                  ((0x20U 
                                                    == 
                                                    (0xffe0U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))
                                                    ? 0xaU
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0xfff0U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))
                                                     ? 0xbU
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfff8U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))
                                                      ? 0xcU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0xfffcU 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))
                                                       ? 0xdU
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (0xfffeU 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc04__x_i)))
                                                        ? 0xeU
                                                        : 0xfU)))))))
                                                 : 0U));
    vlSelf->top__DOT__dut__DOT__out05_PE = ((((((((
                                                   (0x8000U 
                                                    == 
                                                    (0x8000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i))) 
                                                   | (0x4000U 
                                                      == 
                                                      (0xc000U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))) 
                                                  | (0x2000U 
                                                     == 
                                                     (0xe000U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))) 
                                                 | (0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))) 
                                                | (0x800U 
                                                   == 
                                                   (0xf800U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))) 
                                               | (0x400U 
                                                  == 
                                                  (0xfc00U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))) 
                                              | (0x200U 
                                                 == 
                                                 (0xfe00U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))) 
                                             | (0x100U 
                                                == 
                                                (0xff00U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i))))
                                             ? ((0x8000U 
                                                 == 
                                                 (0x8000U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))
                                                 ? 0U
                                                 : 
                                                ((0x4000U 
                                                  == 
                                                  (0xc000U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))
                                                  ? 1U
                                                  : 
                                                 ((0x2000U 
                                                   == 
                                                   (0xe000U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))
                                                   ? 2U
                                                   : 
                                                  ((0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))
                                                    ? 3U
                                                    : 
                                                   ((0x800U 
                                                     == 
                                                     (0xf800U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))
                                                     ? 4U
                                                     : 
                                                    ((0x400U 
                                                      == 
                                                      (0xfc00U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))
                                                      ? 5U
                                                      : 
                                                     ((0x200U 
                                                       == 
                                                       (0xfe00U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))
                                                       ? 6U
                                                       : 7U)))))))
                                             : ((((
                                                   (((((0x80U 
                                                        == 
                                                        (0xff80U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i))) 
                                                       | (0x40U 
                                                          == 
                                                          (0xffc0U 
                                                           & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))) 
                                                      | (0x20U 
                                                         == 
                                                         (0xffe0U 
                                                          & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))) 
                                                     | (0x10U 
                                                        == 
                                                        (0xfff0U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))) 
                                                    | (8U 
                                                       == 
                                                       (0xfff8U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))) 
                                                   | (4U 
                                                      == 
                                                      (0xfffcU 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))) 
                                                  | (2U 
                                                     == 
                                                     (0xfffeU 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))) 
                                                 | (1U 
                                                    == (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))
                                                 ? 
                                                ((0x80U 
                                                  == 
                                                  (0xff80U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))
                                                  ? 8U
                                                  : 
                                                 ((0x40U 
                                                   == 
                                                   (0xffc0U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))
                                                   ? 9U
                                                   : 
                                                  ((0x20U 
                                                    == 
                                                    (0xffe0U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))
                                                    ? 0xaU
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0xfff0U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))
                                                     ? 0xbU
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfff8U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))
                                                      ? 0xcU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0xfffcU 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))
                                                       ? 0xdU
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (0xfffeU 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc05__x_i)))
                                                        ? 0xeU
                                                        : 0xfU)))))))
                                                 : 0U));
    vlSelf->top__DOT__dut__DOT__out06_PE = ((((((((
                                                   (0x8000U 
                                                    == 
                                                    (0x8000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i))) 
                                                   | (0x4000U 
                                                      == 
                                                      (0xc000U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))) 
                                                  | (0x2000U 
                                                     == 
                                                     (0xe000U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))) 
                                                 | (0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))) 
                                                | (0x800U 
                                                   == 
                                                   (0xf800U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))) 
                                               | (0x400U 
                                                  == 
                                                  (0xfc00U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))) 
                                              | (0x200U 
                                                 == 
                                                 (0xfe00U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))) 
                                             | (0x100U 
                                                == 
                                                (0xff00U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i))))
                                             ? ((0x8000U 
                                                 == 
                                                 (0x8000U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))
                                                 ? 0U
                                                 : 
                                                ((0x4000U 
                                                  == 
                                                  (0xc000U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))
                                                  ? 1U
                                                  : 
                                                 ((0x2000U 
                                                   == 
                                                   (0xe000U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))
                                                   ? 2U
                                                   : 
                                                  ((0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))
                                                    ? 3U
                                                    : 
                                                   ((0x800U 
                                                     == 
                                                     (0xf800U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))
                                                     ? 4U
                                                     : 
                                                    ((0x400U 
                                                      == 
                                                      (0xfc00U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))
                                                      ? 5U
                                                      : 
                                                     ((0x200U 
                                                       == 
                                                       (0xfe00U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))
                                                       ? 6U
                                                       : 7U)))))))
                                             : ((((
                                                   (((((0x80U 
                                                        == 
                                                        (0xff80U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i))) 
                                                       | (0x40U 
                                                          == 
                                                          (0xffc0U 
                                                           & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))) 
                                                      | (0x20U 
                                                         == 
                                                         (0xffe0U 
                                                          & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))) 
                                                     | (0x10U 
                                                        == 
                                                        (0xfff0U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))) 
                                                    | (8U 
                                                       == 
                                                       (0xfff8U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))) 
                                                   | (4U 
                                                      == 
                                                      (0xfffcU 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))) 
                                                  | (2U 
                                                     == 
                                                     (0xfffeU 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))) 
                                                 | (1U 
                                                    == (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))
                                                 ? 
                                                ((0x80U 
                                                  == 
                                                  (0xff80U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))
                                                  ? 8U
                                                  : 
                                                 ((0x40U 
                                                   == 
                                                   (0xffc0U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))
                                                   ? 9U
                                                   : 
                                                  ((0x20U 
                                                    == 
                                                    (0xffe0U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))
                                                    ? 0xaU
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0xfff0U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))
                                                     ? 0xbU
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfff8U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))
                                                      ? 0xcU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0xfffcU 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))
                                                       ? 0xdU
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (0xfffeU 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc06__x_i)))
                                                        ? 0xeU
                                                        : 0xfU)))))))
                                                 : 0U));
    vlSelf->top__DOT__dut__DOT__out07_PE = ((((((((
                                                   (0x8000U 
                                                    == 
                                                    (0x8000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i))) 
                                                   | (0x4000U 
                                                      == 
                                                      (0xc000U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))) 
                                                  | (0x2000U 
                                                     == 
                                                     (0xe000U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))) 
                                                 | (0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))) 
                                                | (0x800U 
                                                   == 
                                                   (0xf800U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))) 
                                               | (0x400U 
                                                  == 
                                                  (0xfc00U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))) 
                                              | (0x200U 
                                                 == 
                                                 (0xfe00U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))) 
                                             | (0x100U 
                                                == 
                                                (0xff00U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i))))
                                             ? ((0x8000U 
                                                 == 
                                                 (0x8000U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))
                                                 ? 0U
                                                 : 
                                                ((0x4000U 
                                                  == 
                                                  (0xc000U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))
                                                  ? 1U
                                                  : 
                                                 ((0x2000U 
                                                   == 
                                                   (0xe000U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))
                                                   ? 2U
                                                   : 
                                                  ((0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))
                                                    ? 3U
                                                    : 
                                                   ((0x800U 
                                                     == 
                                                     (0xf800U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))
                                                     ? 4U
                                                     : 
                                                    ((0x400U 
                                                      == 
                                                      (0xfc00U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))
                                                      ? 5U
                                                      : 
                                                     ((0x200U 
                                                       == 
                                                       (0xfe00U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))
                                                       ? 6U
                                                       : 7U)))))))
                                             : ((((
                                                   (((((0x80U 
                                                        == 
                                                        (0xff80U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i))) 
                                                       | (0x40U 
                                                          == 
                                                          (0xffc0U 
                                                           & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))) 
                                                      | (0x20U 
                                                         == 
                                                         (0xffe0U 
                                                          & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))) 
                                                     | (0x10U 
                                                        == 
                                                        (0xfff0U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))) 
                                                    | (8U 
                                                       == 
                                                       (0xfff8U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))) 
                                                   | (4U 
                                                      == 
                                                      (0xfffcU 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))) 
                                                  | (2U 
                                                     == 
                                                     (0xfffeU 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))) 
                                                 | (1U 
                                                    == (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))
                                                 ? 
                                                ((0x80U 
                                                  == 
                                                  (0xff80U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))
                                                  ? 8U
                                                  : 
                                                 ((0x40U 
                                                   == 
                                                   (0xffc0U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))
                                                   ? 9U
                                                   : 
                                                  ((0x20U 
                                                    == 
                                                    (0xffe0U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))
                                                    ? 0xaU
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0xfff0U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))
                                                     ? 0xbU
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfff8U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))
                                                      ? 0xcU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0xfffcU 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))
                                                       ? 0xdU
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (0xfffeU 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc07__x_i)))
                                                        ? 0xeU
                                                        : 0xfU)))))))
                                                 : 0U));
    vlSelf->top__DOT__dut__DOT__out08_PE = ((((((((
                                                   (0x8000U 
                                                    == 
                                                    (0x8000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i))) 
                                                   | (0x4000U 
                                                      == 
                                                      (0xc000U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))) 
                                                  | (0x2000U 
                                                     == 
                                                     (0xe000U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))) 
                                                 | (0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))) 
                                                | (0x800U 
                                                   == 
                                                   (0xf800U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))) 
                                               | (0x400U 
                                                  == 
                                                  (0xfc00U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))) 
                                              | (0x200U 
                                                 == 
                                                 (0xfe00U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))) 
                                             | (0x100U 
                                                == 
                                                (0xff00U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i))))
                                             ? ((0x8000U 
                                                 == 
                                                 (0x8000U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))
                                                 ? 0U
                                                 : 
                                                ((0x4000U 
                                                  == 
                                                  (0xc000U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))
                                                  ? 1U
                                                  : 
                                                 ((0x2000U 
                                                   == 
                                                   (0xe000U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))
                                                   ? 2U
                                                   : 
                                                  ((0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))
                                                    ? 3U
                                                    : 
                                                   ((0x800U 
                                                     == 
                                                     (0xf800U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))
                                                     ? 4U
                                                     : 
                                                    ((0x400U 
                                                      == 
                                                      (0xfc00U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))
                                                      ? 5U
                                                      : 
                                                     ((0x200U 
                                                       == 
                                                       (0xfe00U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))
                                                       ? 6U
                                                       : 7U)))))))
                                             : ((((
                                                   (((((0x80U 
                                                        == 
                                                        (0xff80U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i))) 
                                                       | (0x40U 
                                                          == 
                                                          (0xffc0U 
                                                           & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))) 
                                                      | (0x20U 
                                                         == 
                                                         (0xffe0U 
                                                          & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))) 
                                                     | (0x10U 
                                                        == 
                                                        (0xfff0U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))) 
                                                    | (8U 
                                                       == 
                                                       (0xfff8U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))) 
                                                   | (4U 
                                                      == 
                                                      (0xfffcU 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))) 
                                                  | (2U 
                                                     == 
                                                     (0xfffeU 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))) 
                                                 | (1U 
                                                    == (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))
                                                 ? 
                                                ((0x80U 
                                                  == 
                                                  (0xff80U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))
                                                  ? 8U
                                                  : 
                                                 ((0x40U 
                                                   == 
                                                   (0xffc0U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))
                                                   ? 9U
                                                   : 
                                                  ((0x20U 
                                                    == 
                                                    (0xffe0U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))
                                                    ? 0xaU
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0xfff0U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))
                                                     ? 0xbU
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfff8U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))
                                                      ? 0xcU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0xfffcU 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))
                                                       ? 0xdU
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (0xfffeU 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc08__x_i)))
                                                        ? 0xeU
                                                        : 0xfU)))))))
                                                 : 0U));
    vlSelf->top__DOT__dut__DOT__out09_PE = ((((((((
                                                   (0x8000U 
                                                    == 
                                                    (0x8000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i))) 
                                                   | (0x4000U 
                                                      == 
                                                      (0xc000U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))) 
                                                  | (0x2000U 
                                                     == 
                                                     (0xe000U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))) 
                                                 | (0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))) 
                                                | (0x800U 
                                                   == 
                                                   (0xf800U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))) 
                                               | (0x400U 
                                                  == 
                                                  (0xfc00U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))) 
                                              | (0x200U 
                                                 == 
                                                 (0xfe00U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))) 
                                             | (0x100U 
                                                == 
                                                (0xff00U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i))))
                                             ? ((0x8000U 
                                                 == 
                                                 (0x8000U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))
                                                 ? 0U
                                                 : 
                                                ((0x4000U 
                                                  == 
                                                  (0xc000U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))
                                                  ? 1U
                                                  : 
                                                 ((0x2000U 
                                                   == 
                                                   (0xe000U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))
                                                   ? 2U
                                                   : 
                                                  ((0x1000U 
                                                    == 
                                                    (0xf000U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))
                                                    ? 3U
                                                    : 
                                                   ((0x800U 
                                                     == 
                                                     (0xf800U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))
                                                     ? 4U
                                                     : 
                                                    ((0x400U 
                                                      == 
                                                      (0xfc00U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))
                                                      ? 5U
                                                      : 
                                                     ((0x200U 
                                                       == 
                                                       (0xfe00U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))
                                                       ? 6U
                                                       : 7U)))))))
                                             : ((((
                                                   (((((0x80U 
                                                        == 
                                                        (0xff80U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i))) 
                                                       | (0x40U 
                                                          == 
                                                          (0xffc0U 
                                                           & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))) 
                                                      | (0x20U 
                                                         == 
                                                         (0xffe0U 
                                                          & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))) 
                                                     | (0x10U 
                                                        == 
                                                        (0xfff0U 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))) 
                                                    | (8U 
                                                       == 
                                                       (0xfff8U 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))) 
                                                   | (4U 
                                                      == 
                                                      (0xfffcU 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))) 
                                                  | (2U 
                                                     == 
                                                     (0xfffeU 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))) 
                                                 | (1U 
                                                    == (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))
                                                 ? 
                                                ((0x80U 
                                                  == 
                                                  (0xff80U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))
                                                  ? 8U
                                                  : 
                                                 ((0x40U 
                                                   == 
                                                   (0xffc0U 
                                                    & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))
                                                   ? 9U
                                                   : 
                                                  ((0x20U 
                                                    == 
                                                    (0xffe0U 
                                                     & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))
                                                    ? 0xaU
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0xfff0U 
                                                      & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))
                                                     ? 0xbU
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfff8U 
                                                       & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))
                                                      ? 0xcU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0xfffcU 
                                                        & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))
                                                       ? 0xdU
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (0xfffeU 
                                                         & (IData)(vlSelf->top__DOT__dut__DOT____Vcellinp__enc09__x_i)))
                                                        ? 0xeU
                                                        : 0xfU)))))))
                                                 : 0U));
    vlSelf->top__DOT__dut__DOT__RAM[9U] = vlSelf->top__DOT__dut__DOT__out10_PE;
    __Vtableidx12 = vlSelf->top__DOT__dut__DOT__out02_PE;
    vlSelf->top__DOT__dut__DOT____Vcellout__posdec02__y_i 
        = Vtop__ConstPool__TABLE_h24ce9b7d_0[__Vtableidx12];
    vlSelf->top__DOT__dut__DOT__RAM[1U] = vlSelf->top__DOT__dut__DOT__out02_PE;
    __Vtableidx13 = vlSelf->top__DOT__dut__DOT__out03_PE;
    vlSelf->top__DOT__dut__DOT____Vcellout__posdec03__y_i 
        = Vtop__ConstPool__TABLE_h24ce9b7d_0[__Vtableidx13];
    vlSelf->top__DOT__dut__DOT__RAM[2U] = vlSelf->top__DOT__dut__DOT__out03_PE;
    __Vtableidx14 = vlSelf->top__DOT__dut__DOT__out04_PE;
    vlSelf->top__DOT__dut__DOT____Vcellout__posdec04__y_i 
        = Vtop__ConstPool__TABLE_h24ce9b7d_0[__Vtableidx14];
    vlSelf->top__DOT__dut__DOT__RAM[3U] = vlSelf->top__DOT__dut__DOT__out04_PE;
    __Vtableidx15 = vlSelf->top__DOT__dut__DOT__out05_PE;
    vlSelf->top__DOT__dut__DOT____Vcellout__posdec05__y_i 
        = Vtop__ConstPool__TABLE_h24ce9b7d_0[__Vtableidx15];
    vlSelf->top__DOT__dut__DOT__RAM[4U] = vlSelf->top__DOT__dut__DOT__out05_PE;
    __Vtableidx16 = vlSelf->top__DOT__dut__DOT__out06_PE;
    vlSelf->top__DOT__dut__DOT____Vcellout__posdec06__y_i 
        = Vtop__ConstPool__TABLE_h24ce9b7d_0[__Vtableidx16];
    vlSelf->top__DOT__dut__DOT__RAM[5U] = vlSelf->top__DOT__dut__DOT__out06_PE;
    __Vtableidx17 = vlSelf->top__DOT__dut__DOT__out07_PE;
    vlSelf->top__DOT__dut__DOT____Vcellout__posdec07__y_i 
        = Vtop__ConstPool__TABLE_h24ce9b7d_0[__Vtableidx17];
    vlSelf->top__DOT__dut__DOT__RAM[6U] = vlSelf->top__DOT__dut__DOT__out07_PE;
    __Vtableidx18 = vlSelf->top__DOT__dut__DOT__out08_PE;
    vlSelf->top__DOT__dut__DOT____Vcellout__posdec08__y_i 
        = Vtop__ConstPool__TABLE_h24ce9b7d_0[__Vtableidx18];
    vlSelf->top__DOT__dut__DOT__RAM[7U] = vlSelf->top__DOT__dut__DOT__out08_PE;
    __Vtableidx19 = vlSelf->top__DOT__dut__DOT__out09_PE;
    vlSelf->top__DOT__dut__DOT____Vcellout__posdec09__y_i 
        = Vtop__ConstPool__TABLE_h24ce9b7d_0[__Vtableidx19];
    vlSelf->top__DOT__dut__DOT__RAM[8U] = vlSelf->top__DOT__dut__DOT__out09_PE;
    vlSelf->top__DOT__dut__DOT__out_pos_dec[1U] = vlSelf->top__DOT__dut__DOT____Vcellout__posdec02__y_i;
    vlSelf->top__DOT__dut__DOT__out_pos_dec[2U] = vlSelf->top__DOT__dut__DOT____Vcellout__posdec03__y_i;
    vlSelf->top__DOT__dut__DOT__out_pos_dec[3U] = vlSelf->top__DOT__dut__DOT____Vcellout__posdec04__y_i;
    vlSelf->top__DOT__dut__DOT__out_pos_dec[4U] = vlSelf->top__DOT__dut__DOT____Vcellout__posdec05__y_i;
    vlSelf->top__DOT__dut__DOT__out_pos_dec[5U] = vlSelf->top__DOT__dut__DOT____Vcellout__posdec06__y_i;
    vlSelf->top__DOT__dut__DOT__out_pos_dec[6U] = vlSelf->top__DOT__dut__DOT____Vcellout__posdec07__y_i;
    vlSelf->top__DOT__dut__DOT__out_pos_dec[7U] = vlSelf->top__DOT__dut__DOT____Vcellout__posdec08__y_i;
    vlSelf->top__DOT__dut__DOT__out_pos_dec[8U] = vlSelf->top__DOT__dut__DOT____Vcellout__posdec09__y_i;
    VL_WRITEF("RAM[0]: %2#\nRAM[1]: %2#\nRAM[2]: %2#\nRAM[3]: %2#\nRAM[4]: %2#\nRAM[5]: %2#\nRAM[6]: %2#\nRAM[7]: %2#\nRAM[8]: %2#\nRAM[9]: %2#\n",
              4,vlSelf->top__DOT__dut__DOT__RAM[0U],
              4,vlSelf->top__DOT__dut__DOT__RAM[1U],
              4,vlSelf->top__DOT__dut__DOT__RAM[2U],
              4,vlSelf->top__DOT__dut__DOT__RAM[3U],
              4,vlSelf->top__DOT__dut__DOT__RAM[4U],
              4,vlSelf->top__DOT__dut__DOT__RAM[5U],
              4,vlSelf->top__DOT__dut__DOT__RAM[6U],
              4,vlSelf->top__DOT__dut__DOT__RAM[7U],
              4,vlSelf->top__DOT__dut__DOT__RAM[8U],
              4,vlSelf->top__DOT__dut__DOT__RAM[9U]);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top__DOT__dut__DOT__out_pos_dec
               [0U] ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec
               [0U])
         | (vlSelf->top__DOT__dut__DOT__out_pos_dec
            [1U] ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec
            [1U])
         | (vlSelf->top__DOT__dut__DOT__out_pos_dec
            [2U] ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec
            [2U])
         | (vlSelf->top__DOT__dut__DOT__out_pos_dec
            [3U] ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec
            [3U])
         | (vlSelf->top__DOT__dut__DOT__out_pos_dec
            [4U] ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec
            [4U])
         | (vlSelf->top__DOT__dut__DOT__out_pos_dec
            [5U] ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec
            [5U])
         | (vlSelf->top__DOT__dut__DOT__out_pos_dec
            [6U] ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec
            [6U])
         | (vlSelf->top__DOT__dut__DOT__out_pos_dec
            [7U] ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec
            [7U])
         | (vlSelf->top__DOT__dut__DOT__out_pos_dec
            [8U] ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec
            [8U]));
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__dut__DOT__out_pos_dec
                               [0U] ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec
                               [0U]))) VL_DBG_MSGF("        CHANGE: src/min_finder.sv:43\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__dut__DOT__out_pos_dec
                               [1U] ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec
                               [1U]))) VL_DBG_MSGF("        CHANGE: src/min_finder.sv:43\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__dut__DOT__out_pos_dec
                               [2U] ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec
                               [2U]))) VL_DBG_MSGF("        CHANGE: src/min_finder.sv:43\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__dut__DOT__out_pos_dec
                               [3U] ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec
                               [3U]))) VL_DBG_MSGF("        CHANGE: src/min_finder.sv:43\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__dut__DOT__out_pos_dec
                               [4U] ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec
                               [4U]))) VL_DBG_MSGF("        CHANGE: src/min_finder.sv:43\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__dut__DOT__out_pos_dec
                               [5U] ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec
                               [5U]))) VL_DBG_MSGF("        CHANGE: src/min_finder.sv:43\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__dut__DOT__out_pos_dec
                               [6U] ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec
                               [6U]))) VL_DBG_MSGF("        CHANGE: src/min_finder.sv:43\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__dut__DOT__out_pos_dec
                               [7U] ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec
                               [7U]))) VL_DBG_MSGF("        CHANGE: src/min_finder.sv:43\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__dut__DOT__out_pos_dec
                               [8U] ^ vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec
                               [8U]))) VL_DBG_MSGF("        CHANGE: src/min_finder.sv:43\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec[0U] 
        = vlSelf->top__DOT__dut__DOT__out_pos_dec[0U];
    vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec[1U] 
        = vlSelf->top__DOT__dut__DOT__out_pos_dec[1U];
    vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec[2U] 
        = vlSelf->top__DOT__dut__DOT__out_pos_dec[2U];
    vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec[3U] 
        = vlSelf->top__DOT__dut__DOT__out_pos_dec[3U];
    vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec[4U] 
        = vlSelf->top__DOT__dut__DOT__out_pos_dec[4U];
    vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec[5U] 
        = vlSelf->top__DOT__dut__DOT__out_pos_dec[5U];
    vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec[6U] 
        = vlSelf->top__DOT__dut__DOT__out_pos_dec[6U];
    vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec[7U] 
        = vlSelf->top__DOT__dut__DOT__out_pos_dec[7U];
    vlSelf->__Vchglast__TOP__top__DOT__dut__DOT__out_pos_dec[8U] 
        = vlSelf->top__DOT__dut__DOT__out_pos_dec[8U];
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->I0_i & 0xf0U))) {
        Verilated::overWidthError("I0_i");}
    if (VL_UNLIKELY((vlSelf->I1_i & 0xf0U))) {
        Verilated::overWidthError("I1_i");}
    if (VL_UNLIKELY((vlSelf->I2_i & 0xf0U))) {
        Verilated::overWidthError("I2_i");}
    if (VL_UNLIKELY((vlSelf->I3_i & 0xf0U))) {
        Verilated::overWidthError("I3_i");}
    if (VL_UNLIKELY((vlSelf->I4_i & 0xf0U))) {
        Verilated::overWidthError("I4_i");}
    if (VL_UNLIKELY((vlSelf->I5_i & 0xf0U))) {
        Verilated::overWidthError("I5_i");}
    if (VL_UNLIKELY((vlSelf->I6_i & 0xf0U))) {
        Verilated::overWidthError("I6_i");}
    if (VL_UNLIKELY((vlSelf->I7_i & 0xf0U))) {
        Verilated::overWidthError("I7_i");}
    if (VL_UNLIKELY((vlSelf->I8_i & 0xf0U))) {
        Verilated::overWidthError("I8_i");}
    if (VL_UNLIKELY((vlSelf->I9_i & 0xf0U))) {
        Verilated::overWidthError("I9_i");}
}
#endif  // VL_DEBUG
