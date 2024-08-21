// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "verilated.h"

#include "VCPU___024root.h"

VL_ATTR_COLD void VCPU___024root___initial__TOP__0(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___initial__TOP__0\n"); );
    // Body
    VL_WRITEF("Loading program.\n");
    VL_READMEM_N(true, 8, std::string{"f1.mem"}, vlSelf->CPU__DOT__instructions__DOT__ram_array
                 , 0, ~0ULL);
    VL_WRITEF("Program Loaded\n");
}

extern const VlUnpacked<CData/*0:0*/, 256> VCPU__ConstPool__TABLE_h284d473c_0;
extern const VlUnpacked<CData/*0:0*/, 256> VCPU__ConstPool__TABLE_h9c8081ca_0;
extern const VlUnpacked<CData/*0:0*/, 256> VCPU__ConstPool__TABLE_h9bdefb87_0;
extern const VlUnpacked<CData/*1:0*/, 256> VCPU__ConstPool__TABLE_hb055fb71_0;

VL_ATTR_COLD void VCPU___024root___settle__TOP__0(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___settle__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    // Body
    vlSelf->a0 = vlSelf->CPU__DOT__regfile__DOT__registers
        [9U];
    vlSelf->a1 = vlSelf->CPU__DOT__regfile__DOT__registers
        [0xaU];
    vlSelf->t0 = vlSelf->CPU__DOT__regfile__DOT__registers
        [4U];
    vlSelf->t1 = vlSelf->CPU__DOT__regfile__DOT__registers
        [5U];
    vlSelf->t5 = vlSelf->CPU__DOT__regfile__DOT__registers
        [0x1cU];
    vlSelf->t6 = vlSelf->CPU__DOT__regfile__DOT__registers
        [0x1eU];
    vlSelf->CPU__DOT__instr = ((vlSelf->CPU__DOT__instructions__DOT__ram_array
                                .at(vlSelf->CPU__DOT__pc) 
                                << 0x18U) | ((vlSelf->CPU__DOT__instructions__DOT__ram_array
                                              .at(((IData)(1U) 
                                                   + vlSelf->CPU__DOT__pc)) 
                                              << 0x10U) 
                                             | ((vlSelf->CPU__DOT__instructions__DOT__ram_array
                                                 .at(
                                                     ((IData)(2U) 
                                                      + vlSelf->CPU__DOT__pc)) 
                                                 << 8U) 
                                                | vlSelf->CPU__DOT__instructions__DOT__ram_array
                                                .at(
                                                    ((IData)(3U) 
                                                     + vlSelf->CPU__DOT__pc)))));
    if (((0x33U == (0x7fU & vlSelf->CPU__DOT__instr)) 
         | (0x13U == (0x7fU & vlSelf->CPU__DOT__instr)))) {
        vlSelf->CPU__DOT__resultsrc = 0U;
        vlSelf->CPU__DOT__aluctrl = (((((((((0U == 
                                             (7U & 
                                              (vlSelf->CPU__DOT__instr 
                                               >> 0xcU))) 
                                            | (1U == 
                                               (7U 
                                                & (vlSelf->CPU__DOT__instr 
                                                   >> 0xcU)))) 
                                           | (2U == 
                                              (7U & 
                                               (vlSelf->CPU__DOT__instr 
                                                >> 0xcU)))) 
                                          | (3U == 
                                             (7U & 
                                              (vlSelf->CPU__DOT__instr 
                                               >> 0xcU)))) 
                                         | (4U == (7U 
                                                   & (vlSelf->CPU__DOT__instr 
                                                      >> 0xcU)))) 
                                        | (5U == (7U 
                                                  & (vlSelf->CPU__DOT__instr 
                                                     >> 0xcU)))) 
                                       | (6U == (7U 
                                                 & (vlSelf->CPU__DOT__instr 
                                                    >> 0xcU)))) 
                                      | (7U == (7U 
                                                & (vlSelf->CPU__DOT__instr 
                                                   >> 0xcU))))
                                      ? ((0U == (7U 
                                                 & (vlSelf->CPU__DOT__instr 
                                                    >> 0xcU)))
                                          ? ((0x20U 
                                              & vlSelf->CPU__DOT__instr)
                                              ? ((0x40000000U 
                                                  & vlSelf->CPU__DOT__instr)
                                                  ? 1U
                                                  : 0U)
                                              : 0U)
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->CPU__DOT__instr 
                                                >> 0xcU)))
                                              ? ((0x20U 
                                                  & vlSelf->CPU__DOT__instr)
                                                  ? 2U
                                                  : 3U)
                                              : ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->CPU__DOT__instr 
                                                      >> 0xcU)))
                                                  ? 4U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->CPU__DOT__instr 
                                                       >> 0xcU)))
                                                   ? 5U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->CPU__DOT__instr 
                                                        >> 0xcU)))
                                                    ? 6U
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->CPU__DOT__instr 
                                                         >> 0xcU)))
                                                     ? 
                                                    ((0x20U 
                                                      & vlSelf->CPU__DOT__instr)
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSelf->CPU__DOT__instr)
                                                       ? 8U
                                                       : 7U)
                                                      : 
                                                     ((0x40000000U 
                                                       & vlSelf->CPU__DOT__instr)
                                                       ? 0xaU
                                                       : 9U))
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->CPU__DOT__instr 
                                                          >> 0xcU)))
                                                      ? 0xbU
                                                      : 0xcU)))))))
                                      : 0U);
        vlSelf->CPU__DOT__alusrc = (1U & (~ (vlSelf->CPU__DOT__instr 
                                             >> 5U)));
        vlSelf->CPU__DOT__control__DOT__branch = 0U;
        vlSelf->CPU__DOT__immsrc = 0U;
    } else if ((0x63U == (0x7fU & vlSelf->CPU__DOT__instr))) {
        vlSelf->CPU__DOT__resultsrc = 0U;
        vlSelf->CPU__DOT__aluctrl = 1U;
        vlSelf->CPU__DOT__alusrc = 0U;
        if ((0U == (7U & (vlSelf->CPU__DOT__instr >> 0xcU)))) {
            vlSelf->CPU__DOT__control__DOT__branch 
                = (1U & ((IData)(vlSelf->CPU__DOT__flags) 
                         >> 2U));
        } else if ((1U == (7U & (vlSelf->CPU__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->CPU__DOT__control__DOT__branch 
                = (1U & (~ ((IData)(vlSelf->CPU__DOT__flags) 
                            >> 2U)));
        } else if ((4U == (7U & (vlSelf->CPU__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->CPU__DOT__control__DOT__branch 
                = (1U & (~ ((IData)(vlSelf->CPU__DOT__flags) 
                            >> 1U)));
        } else if ((5U == (7U & (vlSelf->CPU__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->CPU__DOT__control__DOT__branch 
                = (1U & ((IData)(vlSelf->CPU__DOT__flags) 
                         >> 1U));
        } else if ((6U == (7U & (vlSelf->CPU__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->CPU__DOT__control__DOT__branch 
                = (1U & (~ (IData)(vlSelf->CPU__DOT__flags)));
        } else if ((7U == (7U & (vlSelf->CPU__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->CPU__DOT__control__DOT__branch 
                = (1U & (IData)(vlSelf->CPU__DOT__flags));
        }
        vlSelf->CPU__DOT__immsrc = 2U;
    } else if (((3U == (0x7fU & vlSelf->CPU__DOT__instr)) 
                | (0x23U == (0x7fU & vlSelf->CPU__DOT__instr)))) {
        vlSelf->CPU__DOT__resultsrc = 1U;
        vlSelf->CPU__DOT__aluctrl = 0U;
        vlSelf->CPU__DOT__alusrc = 1U;
        vlSelf->CPU__DOT__control__DOT__branch = 0U;
        vlSelf->CPU__DOT__immsrc = (1U & (vlSelf->CPU__DOT__instr 
                                          >> 0x1eU));
    } else if (((0x67U == (0x7fU & vlSelf->CPU__DOT__instr)) 
                | (0x6fU == (0x7fU & vlSelf->CPU__DOT__instr)))) {
        vlSelf->CPU__DOT__resultsrc = 2U;
        vlSelf->CPU__DOT__aluctrl = 0U;
        vlSelf->CPU__DOT__alusrc = 1U;
        vlSelf->CPU__DOT__control__DOT__branch = 0U;
        vlSelf->CPU__DOT__immsrc = (3U & (- (IData)(
                                                    (1U 
                                                     & (vlSelf->CPU__DOT__instr 
                                                        >> 3U)))));
    } else if (((0x17U == (0x7fU & vlSelf->CPU__DOT__instr)) 
                | (0x37U == (0x7fU & vlSelf->CPU__DOT__instr)))) {
        vlSelf->CPU__DOT__resultsrc = (3U & (- (IData)(
                                                       (1U 
                                                        & (vlSelf->CPU__DOT__instr 
                                                           >> 0x1eU)))));
        vlSelf->CPU__DOT__aluctrl = 0xdU;
        vlSelf->CPU__DOT__alusrc = 1U;
        vlSelf->CPU__DOT__control__DOT__branch = 0U;
        vlSelf->CPU__DOT__immsrc = 4U;
    }
    vlSelf->CPU__DOT__rd1 = ((0U != (0x1fU & (vlSelf->CPU__DOT__instr 
                                              >> 0xfU)))
                              ? ((0x1eU >= (0x1fU & 
                                            ((vlSelf->CPU__DOT__instr 
                                              >> 0xfU) 
                                             - (IData)(1U))))
                                  ? vlSelf->CPU__DOT__regfile__DOT__registers
                                 [(0x1fU & ((vlSelf->CPU__DOT__instr 
                                             >> 0xfU) 
                                            - (IData)(1U)))]
                                  : 0U) : 0U);
    vlSelf->CPU__DOT__rd2 = ((0U != (0x1fU & (vlSelf->CPU__DOT__instr 
                                              >> 0x14U)))
                              ? ((0x1eU >= (0x1fU & 
                                            ((vlSelf->CPU__DOT__instr 
                                              >> 0x14U) 
                                             - (IData)(1U))))
                                  ? vlSelf->CPU__DOT__regfile__DOT__registers
                                 [(0x1fU & ((vlSelf->CPU__DOT__instr 
                                             >> 0x14U) 
                                            - (IData)(1U)))]
                                  : 0U) : 0U);
    __Vtableidx1 = (((IData)(vlSelf->CPU__DOT__control__DOT__branch) 
                     << 7U) | (0x7fU & vlSelf->CPU__DOT__instr));
    vlSelf->CPU__DOT__regwrite = VCPU__ConstPool__TABLE_h284d473c_0
        [__Vtableidx1];
    vlSelf->CPU__DOT__alusrc = VCPU__ConstPool__TABLE_h9c8081ca_0
        [__Vtableidx1];
    vlSelf->CPU__DOT__memwrite = VCPU__ConstPool__TABLE_h9bdefb87_0
        [__Vtableidx1];
    vlSelf->CPU__DOT__pcsrc = VCPU__ConstPool__TABLE_hb055fb71_0
        [__Vtableidx1];
    vlSelf->CPU__DOT__imm_op = ((0U == (IData)(vlSelf->CPU__DOT__immsrc))
                                 ? (((- (IData)((vlSelf->CPU__DOT__instr 
                                                 >> 0x1fU))) 
                                     << 0xcU) | (vlSelf->CPU__DOT__instr 
                                                 >> 0x14U))
                                 : ((1U == (IData)(vlSelf->CPU__DOT__immsrc))
                                     ? (((- (IData)(
                                                    (vlSelf->CPU__DOT__instr 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        ((0xfe0U & 
                                          (vlSelf->CPU__DOT__instr 
                                           >> 0x14U)) 
                                         | (0x1fU & 
                                            (vlSelf->CPU__DOT__instr 
                                             >> 7U))))
                                     : ((2U == (IData)(vlSelf->CPU__DOT__immsrc))
                                         ? (((- (IData)(
                                                        (vlSelf->CPU__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSelf->CPU__DOT__instr 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->CPU__DOT__instr 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->CPU__DOT__instr 
                                                        >> 7U)))))
                                         : ((3U == (IData)(vlSelf->CPU__DOT__immsrc))
                                             ? (((- (IData)(
                                                            (vlSelf->CPU__DOT__instr 
                                                             >> 0x1fU))) 
                                                 << 0x14U) 
                                                | ((0xff000U 
                                                    & vlSelf->CPU__DOT__instr) 
                                                   | ((0x800U 
                                                       & (vlSelf->CPU__DOT__instr 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->CPU__DOT__instr 
                                                            >> 0x14U)))))
                                             : ((4U 
                                                 == (IData)(vlSelf->CPU__DOT__immsrc))
                                                 ? 
                                                (0xfffff000U 
                                                 & vlSelf->CPU__DOT__instr)
                                                 : 0U)))));
    vlSelf->CPU__DOT__pcTarget = (vlSelf->CPU__DOT__pc 
                                  + vlSelf->CPU__DOT__imm_op);
    vlSelf->CPU__DOT__src_b = ((IData)(vlSelf->CPU__DOT__alusrc)
                                ? vlSelf->CPU__DOT__imm_op
                                : vlSelf->CPU__DOT__rd2);
    vlSelf->CPU__DOT__alu_result = (((((((((0U == (IData)(vlSelf->CPU__DOT__aluctrl)) 
                                           | (1U == (IData)(vlSelf->CPU__DOT__aluctrl))) 
                                          | (2U == (IData)(vlSelf->CPU__DOT__aluctrl))) 
                                         | (3U == (IData)(vlSelf->CPU__DOT__aluctrl))) 
                                        | (4U == (IData)(vlSelf->CPU__DOT__aluctrl))) 
                                       | (5U == (IData)(vlSelf->CPU__DOT__aluctrl))) 
                                      | (6U == (IData)(vlSelf->CPU__DOT__aluctrl))) 
                                     | (7U == (IData)(vlSelf->CPU__DOT__aluctrl)))
                                     ? ((0U == (IData)(vlSelf->CPU__DOT__aluctrl))
                                         ? (vlSelf->CPU__DOT__rd1 
                                            + vlSelf->CPU__DOT__src_b)
                                         : ((1U == (IData)(vlSelf->CPU__DOT__aluctrl))
                                             ? (vlSelf->CPU__DOT__rd1 
                                                - vlSelf->CPU__DOT__src_b)
                                             : ((2U 
                                                 == (IData)(vlSelf->CPU__DOT__aluctrl))
                                                 ? 
                                                (vlSelf->CPU__DOT__rd1 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->CPU__DOT__src_b))
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->CPU__DOT__aluctrl))
                                                  ? 
                                                 ((0x1fU 
                                                   >= vlSelf->CPU__DOT__src_b)
                                                   ? 
                                                  (vlSelf->CPU__DOT__rd1 
                                                   << vlSelf->CPU__DOT__src_b)
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->CPU__DOT__aluctrl))
                                                   ? 
                                                  VL_LTS_III(32, vlSelf->CPU__DOT__rd1, vlSelf->CPU__DOT__src_b)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->CPU__DOT__aluctrl))
                                                    ? 
                                                   (vlSelf->CPU__DOT__rd1 
                                                    < vlSelf->CPU__DOT__src_b)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->CPU__DOT__aluctrl))
                                                     ? 
                                                    (vlSelf->CPU__DOT__rd1 
                                                     ^ vlSelf->CPU__DOT__src_b)
                                                     : 
                                                    (vlSelf->CPU__DOT__rd1 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->CPU__DOT__src_b)))))))))
                                     : ((8U == (IData)(vlSelf->CPU__DOT__aluctrl))
                                         ? VL_SHIFTRS_III(32,32,5, vlSelf->CPU__DOT__rd1, 
                                                          (0x1fU 
                                                           & vlSelf->CPU__DOT__src_b))
                                         : ((9U == (IData)(vlSelf->CPU__DOT__aluctrl))
                                             ? ((0x1fU 
                                                 >= vlSelf->CPU__DOT__src_b)
                                                 ? 
                                                (vlSelf->CPU__DOT__rd1 
                                                 >> vlSelf->CPU__DOT__src_b)
                                                 : 0U)
                                             : ((0xaU 
                                                 == (IData)(vlSelf->CPU__DOT__aluctrl))
                                                 ? 
                                                ((0x1fU 
                                                  >= vlSelf->CPU__DOT__src_b)
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,32, vlSelf->CPU__DOT__rd1, vlSelf->CPU__DOT__src_b)
                                                  : 
                                                 (- 
                                                  (vlSelf->CPU__DOT__rd1 
                                                   >> 0x1fU)))
                                                 : 
                                                ((0xbU 
                                                  == (IData)(vlSelf->CPU__DOT__aluctrl))
                                                  ? 
                                                 (vlSelf->CPU__DOT__rd1 
                                                  | vlSelf->CPU__DOT__src_b)
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->CPU__DOT__aluctrl))
                                                   ? 
                                                  (vlSelf->CPU__DOT__rd1 
                                                   & vlSelf->CPU__DOT__src_b)
                                                   : 
                                                  ((0xdU 
                                                    == (IData)(vlSelf->CPU__DOT__aluctrl))
                                                    ? vlSelf->CPU__DOT__src_b
                                                    : 
                                                   (vlSelf->CPU__DOT__rd1 
                                                    + vlSelf->CPU__DOT__src_b))))))));
    vlSelf->CPU__DOT__flags = (((0U == vlSelf->CPU__DOT__alu_result) 
                                << 2U) | ((VL_GTES_III(32, vlSelf->CPU__DOT__rd1, vlSelf->CPU__DOT__src_b) 
                                           << 1U) | 
                                          (vlSelf->CPU__DOT__rd1 
                                           >= vlSelf->CPU__DOT__src_b)));
    vlSelf->CPU__DOT__programCounter__DOT__next_PC 
        = ((0U == (IData)(vlSelf->CPU__DOT__pcsrc))
            ? ((IData)(4U) + vlSelf->CPU__DOT__pc) : 
           ((1U == (IData)(vlSelf->CPU__DOT__pcsrc))
             ? vlSelf->CPU__DOT__pcTarget : ((2U == (IData)(vlSelf->CPU__DOT__pcsrc))
                                              ? vlSelf->CPU__DOT__alu_result
                                              : ((IData)(4U) 
                                                 + vlSelf->CPU__DOT__pc))));
    vlSelf->CPU__DOT__mem_data = ((0xbfc00fffU < vlSelf->CPU__DOT__alu_result)
                                   ? ((0xffffffffU 
                                       == vlSelf->CPU__DOT__alu_result)
                                       ? vlSelf->ioin1
                                       : vlSelf->ioin2)
                                   : ((0U == (7U & 
                                              (vlSelf->CPU__DOT__instr 
                                               >> 0xcU)))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->CPU__DOT__dataMem__DOT__Memory
                                                          .at(vlSelf->CPU__DOT__alu_result) 
                                                          >> 7U)))) 
                                           << 8U) | vlSelf->CPU__DOT__dataMem__DOT__Memory
                                          .at(vlSelf->CPU__DOT__alu_result))
                                       : ((1U == (7U 
                                                  & (vlSelf->CPU__DOT__instr 
                                                     >> 0xcU)))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->CPU__DOT__dataMem__DOT__Memory
                                                              .at(
                                                                  ((IData)(1U) 
                                                                   + vlSelf->CPU__DOT__alu_result)) 
                                                              >> 7U)))) 
                                               << 0x10U) 
                                              | ((vlSelf->CPU__DOT__dataMem__DOT__Memory
                                                  .at(
                                                      ((IData)(1U) 
                                                       + vlSelf->CPU__DOT__alu_result)) 
                                                  << 8U) 
                                                 | vlSelf->CPU__DOT__dataMem__DOT__Memory
                                                 .at(vlSelf->CPU__DOT__alu_result)))
                                           : ((2U == 
                                               (7U 
                                                & (vlSelf->CPU__DOT__instr 
                                                   >> 0xcU)))
                                               ? ((vlSelf->CPU__DOT__dataMem__DOT__Memory
                                                   .at(
                                                       ((IData)(3U) 
                                                        + vlSelf->CPU__DOT__alu_result)) 
                                                   << 0x18U) 
                                                  | ((vlSelf->CPU__DOT__dataMem__DOT__Memory
                                                      .at(
                                                          ((IData)(2U) 
                                                           + vlSelf->CPU__DOT__alu_result)) 
                                                      << 0x10U) 
                                                     | ((vlSelf->CPU__DOT__dataMem__DOT__Memory
                                                         .at(
                                                             ((IData)(1U) 
                                                              + vlSelf->CPU__DOT__alu_result)) 
                                                         << 8U) 
                                                        | vlSelf->CPU__DOT__dataMem__DOT__Memory
                                                        .at(vlSelf->CPU__DOT__alu_result))))
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->CPU__DOT__instr 
                                                       >> 0xcU)))
                                                   ? vlSelf->CPU__DOT__dataMem__DOT__Memory
                                                  .at(vlSelf->CPU__DOT__alu_result)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->CPU__DOT__instr 
                                                        >> 0xcU)))
                                                    ? 
                                                   ((vlSelf->CPU__DOT__dataMem__DOT__Memory
                                                     .at(
                                                         ((IData)(1U) 
                                                          + vlSelf->CPU__DOT__alu_result)) 
                                                     << 8U) 
                                                    | vlSelf->CPU__DOT__dataMem__DOT__Memory
                                                    .at(vlSelf->CPU__DOT__alu_result))
                                                    : 
                                                   ((vlSelf->CPU__DOT__dataMem__DOT__Memory
                                                     .at(
                                                         ((IData)(3U) 
                                                          + vlSelf->CPU__DOT__alu_result)) 
                                                     << 0x18U) 
                                                    | ((vlSelf->CPU__DOT__dataMem__DOT__Memory
                                                        .at(
                                                            ((IData)(2U) 
                                                             + vlSelf->CPU__DOT__alu_result)) 
                                                        << 0x10U) 
                                                       | ((vlSelf->CPU__DOT__dataMem__DOT__Memory
                                                           .at(
                                                               ((IData)(1U) 
                                                                + vlSelf->CPU__DOT__alu_result)) 
                                                           << 8U) 
                                                          | vlSelf->CPU__DOT__dataMem__DOT__Memory
                                                          .at(vlSelf->CPU__DOT__alu_result))))))))));
}

VL_ATTR_COLD void VCPU___024root___eval_initial(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_initial\n"); );
    // Body
    VCPU___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VCPU___024root___eval_settle(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_settle\n"); );
    // Body
    VCPU___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VCPU___024root___final(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___final\n"); );
}

VL_ATTR_COLD void VCPU___024root___ctor_var_reset(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ioin1 = VL_RAND_RESET_I(32);
    vlSelf->ioin2 = VL_RAND_RESET_I(32);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->a1 = VL_RAND_RESET_I(32);
    vlSelf->t0 = VL_RAND_RESET_I(32);
    vlSelf->t1 = VL_RAND_RESET_I(32);
    vlSelf->t5 = VL_RAND_RESET_I(32);
    vlSelf->t6 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__pcTarget = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__alusrc = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__regwrite = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__memwrite = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__resultsrc = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__pcsrc = VL_RAND_RESET_I(2);
    vlSelf->CPU__DOT__flags = VL_RAND_RESET_I(3);
    vlSelf->CPU__DOT__immsrc = VL_RAND_RESET_I(3);
    vlSelf->CPU__DOT__aluctrl = VL_RAND_RESET_I(5);
    vlSelf->CPU__DOT__rd1 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__rd2 = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__imm_op = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__src_b = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__programCounter__DOT__next_PC = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__instructions__DOT__ram_array.atDefault() = 0;
    vlSelf->CPU__DOT__control__DOT__branch = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        vlSelf->CPU__DOT__regfile__DOT__registers[__Vi0] = 0;
    }
    vlSelf->CPU__DOT__regfile__DOT____Vlvbound_h1b83e157__0 = 0;
    vlSelf->CPU__DOT__dataMem__DOT__Memory.atDefault() = 0;
    vlSelf->__Vchglast__TOP__CPU__DOT__flags = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
