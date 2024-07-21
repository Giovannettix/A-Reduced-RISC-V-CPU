// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "verilated.h"

#include "VCPU___024root.h"

VL_ATTR_COLD void VCPU___024root___initial__TOP__0(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___initial__TOP__0\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h3d20b13c__0;
    // Body
    VL_WRITEF("Loading program.\n");
    __Vtemp_h3d20b13c__0[0U] = 0x2e6d656dU;
    __Vtemp_h3d20b13c__0[1U] = 0x66696564U;
    __Vtemp_h3d20b13c__0[2U] = 0x6d6f6469U;
    __Vtemp_h3d20b13c__0[3U] = 0x7465725fU;
    __Vtemp_h3d20b13c__0[4U] = 0x636f756eU;
    VL_READMEM_N(true, 32, VL_CVT_PACK_STR_NW(5, __Vtemp_h3d20b13c__0)
                 , vlSelf->CPU__DOT__instructions__DOT__ram_array
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*0:0*/, 128> VCPU__ConstPool__TABLE_hff97be09_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCPU__ConstPool__TABLE_h529afe2e_0;
extern const VlUnpacked<CData/*0:0*/, 128> VCPU__ConstPool__TABLE_h29afd16c_0;

VL_ATTR_COLD void VCPU___024root___settle__TOP__0(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___settle__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlSelf->a0 = vlSelf->CPU__DOT__regfile__DOT__registers
        [0xaU];
    vlSelf->a1 = vlSelf->CPU__DOT__regfile__DOT__registers
        [0xbU];
    vlSelf->t1 = vlSelf->CPU__DOT__regfile__DOT__registers
        [6U];
    vlSelf->CPU__DOT__instr = vlSelf->CPU__DOT__instructions__DOT__ram_array
        .at((vlSelf->CPU__DOT__pc >> 2U));
    __Vtableidx1 = (0x7fU & vlSelf->CPU__DOT__instr);
    vlSelf->CPU__DOT__regwrite = VCPU__ConstPool__TABLE_hff97be09_0
        [__Vtableidx1];
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
    } else if ((0x63U == (0x7fU & vlSelf->CPU__DOT__instr))) {
        vlSelf->CPU__DOT__resultsrc = 0U;
        vlSelf->CPU__DOT__aluctrl = 1U;
        vlSelf->CPU__DOT__alusrc = 0U;
    } else if (((3U == (0x7fU & vlSelf->CPU__DOT__instr)) 
                | (0x23U == (0x7fU & vlSelf->CPU__DOT__instr)))) {
        vlSelf->CPU__DOT__resultsrc = 1U;
        vlSelf->CPU__DOT__aluctrl = 0U;
        vlSelf->CPU__DOT__alusrc = 1U;
    } else if (((0x67U == (0x7fU & vlSelf->CPU__DOT__instr)) 
                | (0x6fU == (0x7fU & vlSelf->CPU__DOT__instr)))) {
        vlSelf->CPU__DOT__resultsrc = 2U;
        vlSelf->CPU__DOT__aluctrl = 0U;
        vlSelf->CPU__DOT__alusrc = 1U;
    } else if (((0x17U == (0x7fU & vlSelf->CPU__DOT__instr)) 
                | (0x37U == (0x7fU & vlSelf->CPU__DOT__instr)))) {
        vlSelf->CPU__DOT__resultsrc = (3U & (- (IData)(
                                                       (1U 
                                                        & (vlSelf->CPU__DOT__instr 
                                                           >> 0x1eU)))));
        vlSelf->CPU__DOT__aluctrl = 0xdU;
        vlSelf->CPU__DOT__alusrc = 1U;
    }
    vlSelf->CPU__DOT__alusrc = VCPU__ConstPool__TABLE_h529afe2e_0
        [__Vtableidx1];
    vlSelf->CPU__DOT__memwrite = VCPU__ConstPool__TABLE_h29afd16c_0
        [__Vtableidx1];
    if (((0x33U == (0x7fU & vlSelf->CPU__DOT__instr)) 
         | (0x13U == (0x7fU & vlSelf->CPU__DOT__instr)))) {
        vlSelf->CPU__DOT__immsrc = 0U;
    } else if ((0x63U == (0x7fU & vlSelf->CPU__DOT__instr))) {
        vlSelf->CPU__DOT__immsrc = 2U;
    } else if (((3U == (0x7fU & vlSelf->CPU__DOT__instr)) 
                | (0x23U == (0x7fU & vlSelf->CPU__DOT__instr)))) {
        vlSelf->CPU__DOT__immsrc = (1U & (vlSelf->CPU__DOT__instr 
                                          >> 0x1eU));
    } else if (((0x67U == (0x7fU & vlSelf->CPU__DOT__instr)) 
                | (0x6fU == (0x7fU & vlSelf->CPU__DOT__instr)))) {
        vlSelf->CPU__DOT__immsrc = (3U & (- (IData)(
                                                    (1U 
                                                     & (vlSelf->CPU__DOT__instr 
                                                        >> 3U)))));
    } else if (((0x17U == (0x7fU & vlSelf->CPU__DOT__instr)) 
                | (0x37U == (0x7fU & vlSelf->CPU__DOT__instr)))) {
        vlSelf->CPU__DOT__immsrc = 4U;
    }
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
    if (((0x33U == (0x7fU & vlSelf->CPU__DOT__instr)) 
         | (0x13U == (0x7fU & vlSelf->CPU__DOT__instr)))) {
        vlSelf->CPU__DOT__control__DOT__branch = 0U;
    } else if ((0x63U == (0x7fU & vlSelf->CPU__DOT__instr))) {
        if ((0U == (7U & (vlSelf->CPU__DOT__instr >> 0xcU)))) {
            vlSelf->CPU__DOT__control__DOT__branch 
                = (1U & (~ ((IData)(vlSelf->CPU__DOT__flags) 
                            >> 2U)));
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
    } else if (((3U == (0x7fU & vlSelf->CPU__DOT__instr)) 
                | (0x23U == (0x7fU & vlSelf->CPU__DOT__instr)))) {
        vlSelf->CPU__DOT__control__DOT__branch = 0U;
    } else if (((0x67U == (0x7fU & vlSelf->CPU__DOT__instr)) 
                | (0x6fU == (0x7fU & vlSelf->CPU__DOT__instr)))) {
        vlSelf->CPU__DOT__control__DOT__branch = 0U;
    } else if (((0x17U == (0x7fU & vlSelf->CPU__DOT__instr)) 
                | (0x37U == (0x7fU & vlSelf->CPU__DOT__instr)))) {
        vlSelf->CPU__DOT__control__DOT__branch = 0U;
    }
    vlSelf->CPU__DOT__pcsrc = ((0x67U == (0x7fU & vlSelf->CPU__DOT__instr))
                                ? 2U : (((IData)(vlSelf->CPU__DOT__control__DOT__branch) 
                                         | (0x6fU == 
                                            (0x7fU 
                                             & vlSelf->CPU__DOT__instr)))
                                         ? 1U : 0U));
    vlSelf->CPU__DOT__programCounter__DOT__next_PC 
        = ((0U == (IData)(vlSelf->CPU__DOT__pcsrc))
            ? ((IData)(4U) + vlSelf->CPU__DOT__pc) : 
           ((1U == (IData)(vlSelf->CPU__DOT__pcsrc))
             ? vlSelf->CPU__DOT__pcTarget : ((2U == (IData)(vlSelf->CPU__DOT__pcsrc))
                                              ? vlSelf->CPU__DOT__alu_result
                                              : ((IData)(4U) 
                                                 + vlSelf->CPU__DOT__pc))));
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
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->a1 = VL_RAND_RESET_I(32);
    vlSelf->t1 = VL_RAND_RESET_I(32);
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
    vlSelf->CPU__DOT__regfile__DOT____Vlvbound_h5453182d__0 = 0;
    vlSelf->CPU__DOT__alu__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__alu__DOT__gt = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__alu__DOT__gtu = VL_RAND_RESET_I(1);
    vlSelf->CPU__DOT__dataMem__DOT__Memory.atDefault() = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
