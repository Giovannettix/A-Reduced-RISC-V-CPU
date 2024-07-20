// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU__Syms.h"


void VCPU___024root__trace_chg_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_chg_top_0\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VCPU___024root__trace_chg_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->CPU__DOT__pc),32);
        bufp->chgIData(oldp+1,(vlSelf->CPU__DOT__instr),32);
        bufp->chgIData(oldp+2,((vlSelf->CPU__DOT__pc 
                                + vlSelf->CPU__DOT__imm_op)),32);
        bufp->chgBit(oldp+3,(vlSelf->CPU__DOT__alusrc));
        bufp->chgBit(oldp+4,(((((((3U == (0x7fU & vlSelf->CPU__DOT__instr)) 
                                  | (0x13U == (0x7fU 
                                               & vlSelf->CPU__DOT__instr))) 
                                 | (0x33U == (0x7fU 
                                              & vlSelf->CPU__DOT__instr))) 
                                | (0x37U == (0x7fU 
                                             & vlSelf->CPU__DOT__instr))) 
                               | (0x67U == (0x7fU & vlSelf->CPU__DOT__instr))) 
                              | (0x6fU == (0x7fU & vlSelf->CPU__DOT__instr)))));
        bufp->chgBit(oldp+5,((0x23U == (0x7fU & vlSelf->CPU__DOT__instr))));
        bufp->chgCData(oldp+6,(vlSelf->CPU__DOT__immsrc),2);
        bufp->chgCData(oldp+7,(vlSelf->CPU__DOT__resultsrc),2);
        bufp->chgCData(oldp+8,(vlSelf->CPU__DOT__aluctrl),5);
        bufp->chgIData(oldp+9,(vlSelf->CPU__DOT__imm_op),32);
        bufp->chgCData(oldp+10,((0x1fU & (vlSelf->CPU__DOT__instr 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+11,((0x1fU & (vlSelf->CPU__DOT__instr 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+12,((0x1fU & (vlSelf->CPU__DOT__instr 
                                          >> 7U))),5);
        bufp->chgIData(oldp+13,(vlSelf->CPU__DOT__mem_data),32);
        bufp->chgCData(oldp+14,((0x7fU & vlSelf->CPU__DOT__instr)),7);
        bufp->chgCData(oldp+15,((7U & (vlSelf->CPU__DOT__instr 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+16,((1U & (vlSelf->CPU__DOT__instr 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+17,(vlSelf->CPU__DOT__control__DOT__jump));
        bufp->chgIData(oldp+18,(vlSelf->CPU__DOT__regfile__DOT__registers[0]),32);
        bufp->chgIData(oldp+19,(vlSelf->CPU__DOT__regfile__DOT__registers[1]),32);
        bufp->chgIData(oldp+20,(vlSelf->CPU__DOT__regfile__DOT__registers[2]),32);
        bufp->chgIData(oldp+21,(vlSelf->CPU__DOT__regfile__DOT__registers[3]),32);
        bufp->chgIData(oldp+22,(vlSelf->CPU__DOT__regfile__DOT__registers[4]),32);
        bufp->chgIData(oldp+23,(vlSelf->CPU__DOT__regfile__DOT__registers[5]),32);
        bufp->chgIData(oldp+24,(vlSelf->CPU__DOT__regfile__DOT__registers[6]),32);
        bufp->chgIData(oldp+25,(vlSelf->CPU__DOT__regfile__DOT__registers[7]),32);
        bufp->chgIData(oldp+26,(vlSelf->CPU__DOT__regfile__DOT__registers[8]),32);
        bufp->chgIData(oldp+27,(vlSelf->CPU__DOT__regfile__DOT__registers[9]),32);
        bufp->chgIData(oldp+28,(vlSelf->CPU__DOT__regfile__DOT__registers[10]),32);
        bufp->chgIData(oldp+29,(vlSelf->CPU__DOT__regfile__DOT__registers[11]),32);
        bufp->chgIData(oldp+30,(vlSelf->CPU__DOT__regfile__DOT__registers[12]),32);
        bufp->chgIData(oldp+31,(vlSelf->CPU__DOT__regfile__DOT__registers[13]),32);
        bufp->chgIData(oldp+32,(vlSelf->CPU__DOT__regfile__DOT__registers[14]),32);
        bufp->chgIData(oldp+33,(vlSelf->CPU__DOT__regfile__DOT__registers[15]),32);
        bufp->chgIData(oldp+34,(vlSelf->CPU__DOT__regfile__DOT__registers[16]),32);
        bufp->chgIData(oldp+35,(vlSelf->CPU__DOT__regfile__DOT__registers[17]),32);
        bufp->chgIData(oldp+36,(vlSelf->CPU__DOT__regfile__DOT__registers[18]),32);
        bufp->chgIData(oldp+37,(vlSelf->CPU__DOT__regfile__DOT__registers[19]),32);
        bufp->chgIData(oldp+38,(vlSelf->CPU__DOT__regfile__DOT__registers[20]),32);
        bufp->chgIData(oldp+39,(vlSelf->CPU__DOT__regfile__DOT__registers[21]),32);
        bufp->chgIData(oldp+40,(vlSelf->CPU__DOT__regfile__DOT__registers[22]),32);
        bufp->chgIData(oldp+41,(vlSelf->CPU__DOT__regfile__DOT__registers[23]),32);
        bufp->chgIData(oldp+42,(vlSelf->CPU__DOT__regfile__DOT__registers[24]),32);
        bufp->chgIData(oldp+43,(vlSelf->CPU__DOT__regfile__DOT__registers[25]),32);
        bufp->chgIData(oldp+44,(vlSelf->CPU__DOT__regfile__DOT__registers[26]),32);
        bufp->chgIData(oldp+45,(vlSelf->CPU__DOT__regfile__DOT__registers[27]),32);
        bufp->chgIData(oldp+46,(vlSelf->CPU__DOT__regfile__DOT__registers[28]),32);
        bufp->chgIData(oldp+47,(vlSelf->CPU__DOT__regfile__DOT__registers[29]),32);
        bufp->chgIData(oldp+48,(vlSelf->CPU__DOT__regfile__DOT__registers[30]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+49,(vlSelf->CPU__DOT__flags),3);
        bufp->chgIData(oldp+50,(vlSelf->CPU__DOT__src_b),32);
        bufp->chgIData(oldp+51,(vlSelf->CPU__DOT__alu_result),32);
        bufp->chgBit(oldp+52,((0U == vlSelf->CPU__DOT__alu_result)));
        bufp->chgBit(oldp+53,((1U & ((IData)(vlSelf->CPU__DOT__flags) 
                                     >> 2U))));
        bufp->chgBit(oldp+54,((1U & ((IData)(vlSelf->CPU__DOT__flags) 
                                     >> 1U))));
        bufp->chgBit(oldp+55,((1U & (IData)(vlSelf->CPU__DOT__flags))));
        bufp->chgBit(oldp+56,(vlSelf->CPU__DOT__control__DOT__branch));
    }
    bufp->chgBit(oldp+57,(vlSelf->clk));
    bufp->chgBit(oldp+58,(vlSelf->rst));
    bufp->chgIData(oldp+59,(vlSelf->a0),32);
    bufp->chgBit(oldp+60,(((IData)(vlSelf->CPU__DOT__control__DOT__branch) 
                           | (IData)(vlSelf->CPU__DOT__control__DOT__jump))));
    bufp->chgIData(oldp+61,(vlSelf->CPU__DOT__rd1),32);
    bufp->chgIData(oldp+62,(vlSelf->CPU__DOT__rd2),32);
    bufp->chgIData(oldp+63,(((0U == (IData)(vlSelf->CPU__DOT__resultsrc))
                              ? vlSelf->CPU__DOT__alu_result
                              : ((1U == (IData)(vlSelf->CPU__DOT__resultsrc))
                                  ? vlSelf->CPU__DOT__mem_data
                                  : ((2U == (IData)(vlSelf->CPU__DOT__resultsrc))
                                      ? vlSelf->CPU__DOT__pc
                                      : vlSelf->CPU__DOT__alu_result)))),32);
    bufp->chgBit(oldp+64,(VL_GTES_III(32, vlSelf->CPU__DOT__rd1, vlSelf->CPU__DOT__src_b)));
    bufp->chgBit(oldp+65,((vlSelf->CPU__DOT__rd1 >= vlSelf->CPU__DOT__src_b)));
    bufp->chgIData(oldp+66,((((IData)(vlSelf->CPU__DOT__control__DOT__branch) 
                              | (IData)(vlSelf->CPU__DOT__control__DOT__jump))
                              ? (vlSelf->CPU__DOT__pc 
                                 + vlSelf->CPU__DOT__imm_op)
                              : ((IData)(4U) + vlSelf->CPU__DOT__pc))),32);
}

void VCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_cleanup\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
