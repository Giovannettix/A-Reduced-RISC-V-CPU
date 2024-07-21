// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU__Syms.h"


VL_ATTR_COLD void VCPU___024root__trace_init_sub__TOP__0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+57,"clk", false,-1);
    tracep->declBit(c+58,"rst", false,-1);
    tracep->declBus(c+59,"a0", false,-1, 31,0);
    tracep->declBus(c+60,"a1", false,-1, 31,0);
    tracep->declBus(c+61,"t1", false,-1, 31,0);
    tracep->pushNamePrefix("CPU ");
    tracep->declBit(c+57,"clk", false,-1);
    tracep->declBit(c+58,"rst", false,-1);
    tracep->declBus(c+59,"a0", false,-1, 31,0);
    tracep->declBus(c+60,"a1", false,-1, 31,0);
    tracep->declBus(c+61,"t1", false,-1, 31,0);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBus(c+3,"pcTarget", false,-1, 31,0);
    tracep->declBit(c+4,"alusrc", false,-1);
    tracep->declBit(c+5,"regwrite", false,-1);
    tracep->declBit(c+6,"memwrite", false,-1);
    tracep->declBus(c+7,"resultsrc", false,-1, 1,0);
    tracep->declBus(c+49,"pcsrc", false,-1, 1,0);
    tracep->declBus(c+50,"flags", false,-1, 2,0);
    tracep->declBus(c+8,"funct3", false,-1, 2,0);
    tracep->declBus(c+9,"immsrc", false,-1, 2,0);
    tracep->declBus(c+10,"aluctrl", false,-1, 4,0);
    tracep->declBus(c+62,"rd1", false,-1, 31,0);
    tracep->declBus(c+63,"rd2", false,-1, 31,0);
    tracep->declBus(c+11,"imm_op", false,-1, 31,0);
    tracep->declBus(c+12,"rs1", false,-1, 4,0);
    tracep->declBus(c+13,"rs2", false,-1, 4,0);
    tracep->declBus(c+14,"rd", false,-1, 4,0);
    tracep->declBus(c+51,"src_b", false,-1, 31,0);
    tracep->declBus(c+52,"alu_result", false,-1, 31,0);
    tracep->declBus(c+15,"mem_data", false,-1, 31,0);
    tracep->declBus(c+64,"result", false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+10,"ALUCtrl_i", false,-1, 4,0);
    tracep->declBus(c+62,"SrcA_i", false,-1, 31,0);
    tracep->declBus(c+51,"SrcB_i", false,-1, 31,0);
    tracep->declBus(c+52,"ALUResult_o", false,-1, 31,0);
    tracep->declBus(c+50,"Flags_o", false,-1, 2,0);
    tracep->declBit(c+66,"zero", false,-1);
    tracep->declBit(c+67,"gt", false,-1);
    tracep->declBit(c+68,"gtu", false,-1);
    tracep->declBus(c+62,"SrcA_s", false,-1, 31,0);
    tracep->declBus(c+51,"SrcB_s", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_mux ");
    tracep->declBus(c+63,"RegOp_i", false,-1, 31,0);
    tracep->declBus(c+11,"ImmOp_i", false,-1, 31,0);
    tracep->declBit(c+4,"ALUsrc_i", false,-1);
    tracep->declBus(c+51,"ALUop_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("control ");
    tracep->declBus(c+50,"Flags_i", false,-1, 2,0);
    tracep->declBus(c+2,"Instr_i", false,-1, 31,0);
    tracep->declBus(c+8,"funct3", false,-1, 2,0);
    tracep->declBit(c+5,"RegWrite_o", false,-1);
    tracep->declBit(c+4,"ALUsrc_o", false,-1);
    tracep->declBit(c+6,"MemWrite_o", false,-1);
    tracep->declBus(c+9,"ImmSrc_o", false,-1, 2,0);
    tracep->declBus(c+10,"ALUctrl_o", false,-1, 4,0);
    tracep->declBus(c+49,"PCsrc_o", false,-1, 1,0);
    tracep->declBus(c+7,"ResultSrc_o", false,-1, 1,0);
    tracep->declBus(c+16,"op", false,-1, 6,0);
    tracep->declBit(c+17,"funct7", false,-1);
    tracep->declBit(c+53,"zero", false,-1);
    tracep->declBit(c+54,"gt", false,-1);
    tracep->declBit(c+55,"gtu", false,-1);
    tracep->declBit(c+56,"branch", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dataMem ");
    tracep->declBit(c+57,"clk", false,-1);
    tracep->declBus(c+52,"a", false,-1, 31,0);
    tracep->declBus(c+63,"wd", false,-1, 31,0);
    tracep->declBus(c+8,"funct3", false,-1, 2,0);
    tracep->declBit(c+6,"we", false,-1);
    tracep->declBus(c+15,"rd", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("extend ");
    tracep->declBus(c+2,"instr_i", false,-1, 31,0);
    tracep->declBus(c+9,"ImmSrc_i", false,-1, 2,0);
    tracep->declBus(c+11,"ImmOp_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instructions ");
    tracep->declBus(c+1,"a", false,-1, 31,0);
    tracep->declBus(c+2,"rd", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("programCounter ");
    tracep->declBit(c+57,"clk", false,-1);
    tracep->declBit(c+58,"rst", false,-1);
    tracep->declBus(c+49,"PCsrc_i", false,-1, 1,0);
    tracep->declBus(c+3,"PCtarget_i", false,-1, 31,0);
    tracep->declBus(c+52,"PCalu_i", false,-1, 31,0);
    tracep->declBus(c+1,"pc_o", false,-1, 31,0);
    tracep->declBus(c+65,"next_PC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBit(c+57,"clk", false,-1);
    tracep->declBus(c+12,"AD1", false,-1, 4,0);
    tracep->declBus(c+13,"AD2", false,-1, 4,0);
    tracep->declBus(c+14,"AD3", false,-1, 4,0);
    tracep->declBit(c+5,"WE3", false,-1);
    tracep->declBus(c+64,"WD3", false,-1, 31,0);
    tracep->declBus(c+62,"RD1", false,-1, 31,0);
    tracep->declBus(c+63,"RD2", false,-1, 31,0);
    tracep->declBus(c+59,"a0", false,-1, 31,0);
    tracep->declBus(c+60,"a1", false,-1, 31,0);
    tracep->declBus(c+61,"t1", false,-1, 31,0);
    for (int i = 0; i < 31; ++i) {
        tracep->declBus(c+18+i*1,"registers", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result_mux ");
    tracep->declBus(c+52,"ALU_i", false,-1, 31,0);
    tracep->declBus(c+15,"Mem_i", false,-1, 31,0);
    tracep->declBus(c+1,"PC_i", false,-1, 31,0);
    tracep->declBus(c+3,"PCtarget_i", false,-1, 31,0);
    tracep->declBus(c+7,"ResultSrc_i", false,-1, 1,0);
    tracep->declBus(c+64,"Result_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("target ");
    tracep->declBus(c+11,"ImmOp_i", false,-1, 31,0);
    tracep->declBus(c+1,"PC_i", false,-1, 31,0);
    tracep->declBus(c+3,"pcTarget_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VCPU___024root__trace_init_top(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_init_top\n"); );
    // Body
    VCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCPU___024root__trace_register(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCPU___024root__trace_full_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_full_top_0\n"); );
    // Init
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCPU___024root__trace_full_sub_0(VCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->CPU__DOT__pc),32);
    bufp->fullIData(oldp+2,(vlSelf->CPU__DOT__instr),32);
    bufp->fullIData(oldp+3,(vlSelf->CPU__DOT__pcTarget),32);
    bufp->fullBit(oldp+4,(vlSelf->CPU__DOT__alusrc));
    bufp->fullBit(oldp+5,(vlSelf->CPU__DOT__regwrite));
    bufp->fullBit(oldp+6,(vlSelf->CPU__DOT__memwrite));
    bufp->fullCData(oldp+7,(vlSelf->CPU__DOT__resultsrc),2);
    bufp->fullCData(oldp+8,((7U & (vlSelf->CPU__DOT__instr 
                                   >> 0xcU))),3);
    bufp->fullCData(oldp+9,(vlSelf->CPU__DOT__immsrc),3);
    bufp->fullCData(oldp+10,(vlSelf->CPU__DOT__aluctrl),5);
    bufp->fullIData(oldp+11,(vlSelf->CPU__DOT__imm_op),32);
    bufp->fullCData(oldp+12,((0x1fU & (vlSelf->CPU__DOT__instr 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+13,((0x1fU & (vlSelf->CPU__DOT__instr 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+14,((0x1fU & (vlSelf->CPU__DOT__instr 
                                       >> 7U))),5);
    bufp->fullIData(oldp+15,(vlSelf->CPU__DOT__mem_data),32);
    bufp->fullCData(oldp+16,((0x7fU & vlSelf->CPU__DOT__instr)),7);
    bufp->fullBit(oldp+17,((1U & (vlSelf->CPU__DOT__instr 
                                  >> 0x1eU))));
    bufp->fullIData(oldp+18,(vlSelf->CPU__DOT__regfile__DOT__registers[0]),32);
    bufp->fullIData(oldp+19,(vlSelf->CPU__DOT__regfile__DOT__registers[1]),32);
    bufp->fullIData(oldp+20,(vlSelf->CPU__DOT__regfile__DOT__registers[2]),32);
    bufp->fullIData(oldp+21,(vlSelf->CPU__DOT__regfile__DOT__registers[3]),32);
    bufp->fullIData(oldp+22,(vlSelf->CPU__DOT__regfile__DOT__registers[4]),32);
    bufp->fullIData(oldp+23,(vlSelf->CPU__DOT__regfile__DOT__registers[5]),32);
    bufp->fullIData(oldp+24,(vlSelf->CPU__DOT__regfile__DOT__registers[6]),32);
    bufp->fullIData(oldp+25,(vlSelf->CPU__DOT__regfile__DOT__registers[7]),32);
    bufp->fullIData(oldp+26,(vlSelf->CPU__DOT__regfile__DOT__registers[8]),32);
    bufp->fullIData(oldp+27,(vlSelf->CPU__DOT__regfile__DOT__registers[9]),32);
    bufp->fullIData(oldp+28,(vlSelf->CPU__DOT__regfile__DOT__registers[10]),32);
    bufp->fullIData(oldp+29,(vlSelf->CPU__DOT__regfile__DOT__registers[11]),32);
    bufp->fullIData(oldp+30,(vlSelf->CPU__DOT__regfile__DOT__registers[12]),32);
    bufp->fullIData(oldp+31,(vlSelf->CPU__DOT__regfile__DOT__registers[13]),32);
    bufp->fullIData(oldp+32,(vlSelf->CPU__DOT__regfile__DOT__registers[14]),32);
    bufp->fullIData(oldp+33,(vlSelf->CPU__DOT__regfile__DOT__registers[15]),32);
    bufp->fullIData(oldp+34,(vlSelf->CPU__DOT__regfile__DOT__registers[16]),32);
    bufp->fullIData(oldp+35,(vlSelf->CPU__DOT__regfile__DOT__registers[17]),32);
    bufp->fullIData(oldp+36,(vlSelf->CPU__DOT__regfile__DOT__registers[18]),32);
    bufp->fullIData(oldp+37,(vlSelf->CPU__DOT__regfile__DOT__registers[19]),32);
    bufp->fullIData(oldp+38,(vlSelf->CPU__DOT__regfile__DOT__registers[20]),32);
    bufp->fullIData(oldp+39,(vlSelf->CPU__DOT__regfile__DOT__registers[21]),32);
    bufp->fullIData(oldp+40,(vlSelf->CPU__DOT__regfile__DOT__registers[22]),32);
    bufp->fullIData(oldp+41,(vlSelf->CPU__DOT__regfile__DOT__registers[23]),32);
    bufp->fullIData(oldp+42,(vlSelf->CPU__DOT__regfile__DOT__registers[24]),32);
    bufp->fullIData(oldp+43,(vlSelf->CPU__DOT__regfile__DOT__registers[25]),32);
    bufp->fullIData(oldp+44,(vlSelf->CPU__DOT__regfile__DOT__registers[26]),32);
    bufp->fullIData(oldp+45,(vlSelf->CPU__DOT__regfile__DOT__registers[27]),32);
    bufp->fullIData(oldp+46,(vlSelf->CPU__DOT__regfile__DOT__registers[28]),32);
    bufp->fullIData(oldp+47,(vlSelf->CPU__DOT__regfile__DOT__registers[29]),32);
    bufp->fullIData(oldp+48,(vlSelf->CPU__DOT__regfile__DOT__registers[30]),32);
    bufp->fullCData(oldp+49,(vlSelf->CPU__DOT__pcsrc),2);
    bufp->fullCData(oldp+50,(vlSelf->CPU__DOT__flags),3);
    bufp->fullIData(oldp+51,(vlSelf->CPU__DOT__src_b),32);
    bufp->fullIData(oldp+52,(vlSelf->CPU__DOT__alu_result),32);
    bufp->fullBit(oldp+53,((1U & ((IData)(vlSelf->CPU__DOT__flags) 
                                  >> 2U))));
    bufp->fullBit(oldp+54,((1U & ((IData)(vlSelf->CPU__DOT__flags) 
                                  >> 1U))));
    bufp->fullBit(oldp+55,((1U & (IData)(vlSelf->CPU__DOT__flags))));
    bufp->fullBit(oldp+56,(vlSelf->CPU__DOT__control__DOT__branch));
    bufp->fullBit(oldp+57,(vlSelf->clk));
    bufp->fullBit(oldp+58,(vlSelf->rst));
    bufp->fullIData(oldp+59,(vlSelf->a0),32);
    bufp->fullIData(oldp+60,(vlSelf->a1),32);
    bufp->fullIData(oldp+61,(vlSelf->t1),32);
    bufp->fullIData(oldp+62,(vlSelf->CPU__DOT__rd1),32);
    bufp->fullIData(oldp+63,(vlSelf->CPU__DOT__rd2),32);
    bufp->fullIData(oldp+64,(((0U == (IData)(vlSelf->CPU__DOT__resultsrc))
                               ? vlSelf->CPU__DOT__alu_result
                               : ((1U == (IData)(vlSelf->CPU__DOT__resultsrc))
                                   ? vlSelf->CPU__DOT__mem_data
                                   : ((2U == (IData)(vlSelf->CPU__DOT__resultsrc))
                                       ? vlSelf->CPU__DOT__pc
                                       : ((3U == (IData)(vlSelf->CPU__DOT__resultsrc))
                                           ? vlSelf->CPU__DOT__pcTarget
                                           : vlSelf->CPU__DOT__alu_result))))),32);
    bufp->fullIData(oldp+65,(((0U == (IData)(vlSelf->CPU__DOT__pcsrc))
                               ? ((IData)(4U) + vlSelf->CPU__DOT__pc)
                               : ((1U == (IData)(vlSelf->CPU__DOT__pcsrc))
                                   ? vlSelf->CPU__DOT__pcTarget
                                   : ((2U == (IData)(vlSelf->CPU__DOT__pcsrc))
                                       ? vlSelf->CPU__DOT__alu_result
                                       : ((IData)(4U) 
                                          + vlSelf->CPU__DOT__pc))))),32);
    bufp->fullBit(oldp+66,(vlSelf->CPU__DOT__alu__DOT__zero));
    bufp->fullBit(oldp+67,(vlSelf->CPU__DOT__alu__DOT__gt));
    bufp->fullBit(oldp+68,(vlSelf->CPU__DOT__alu__DOT__gtu));
}
