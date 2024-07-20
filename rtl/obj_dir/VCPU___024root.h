// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"

class VCPU__Syms;

class VCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ CPU__DOT__alusrc;
    CData/*1:0*/ CPU__DOT__immsrc;
    CData/*1:0*/ CPU__DOT__resultsrc;
    CData/*2:0*/ CPU__DOT__flags;
    CData/*4:0*/ CPU__DOT__aluctrl;
    CData/*0:0*/ CPU__DOT__control__DOT__branch;
    CData/*0:0*/ CPU__DOT__control__DOT__jump;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(a0,31,0);
    IData/*31:0*/ CPU__DOT__pc;
    IData/*31:0*/ CPU__DOT__instr;
    IData/*31:0*/ CPU__DOT__rd1;
    IData/*31:0*/ CPU__DOT__rd2;
    IData/*31:0*/ CPU__DOT__imm_op;
    IData/*31:0*/ CPU__DOT__src_b;
    IData/*31:0*/ CPU__DOT__alu_result;
    IData/*31:0*/ CPU__DOT__mem_data;
    IData/*31:0*/ CPU__DOT__programCounter__DOT__next_PC;
    IData/*31:0*/ CPU__DOT__regfile__DOT____Vlvbound_h5453182d__0;
    VlUnpacked<IData/*31:0*/, 31> CPU__DOT__regfile__DOT__registers;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> CPU__DOT__instructions__DOT__ram_array;
    VlAssocArray<IData/*31:0*/, IData/*31:0*/> CPU__DOT__dataMem__DOT__Memory;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU___024root(VCPU__Syms* symsp, const char* name);
    ~VCPU___024root();
    VL_UNCOPYABLE(VCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
