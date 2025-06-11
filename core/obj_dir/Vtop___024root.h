// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*3:0*/ top__DOT__alu_op;
    CData/*0:0*/ top__DOT__RegWrite;
    CData/*0:0*/ top__DOT__MemRead;
    CData/*0:0*/ top__DOT__MemWrite;
    CData/*0:0*/ top__DOT__ALUSrc;
    CData/*6:0*/ top__DOT__opcode;
    CData/*2:0*/ top__DOT__funct3;
    CData/*2:0*/ top__DOT__lsu_op;
    CData/*3:0*/ top__DOT__system_lsu__DOT__mem_we_reg;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(debug_current_addr,31,0);
    VL_OUT(debug_current_inst,31,0);
    VL_OUT(debug_ALU_out,31,0);
    IData/*31:0*/ top__DOT__current_addr;
    IData/*31:0*/ top__DOT__current_inst;
    IData/*31:0*/ top__DOT__next_addr;
    IData/*31:0*/ top__DOT__imm_i;
    IData/*31:0*/ top__DOT__ALU_out;
    IData/*31:0*/ top__DOT__data_addr;
    IData/*31:0*/ top__DOT__system_lsu__DOT__rdata_reg;
    IData/*31:0*/ top__DOT__system_lsu__DOT__mem_wdata_reg;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> top__DOT__system_imem__DOT__memory;
    VlUnpacked<CData/*7:0*/, 1024> top__DOT__system_dmem__DOT__memory;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__system_regfile__DOT__regfile;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
