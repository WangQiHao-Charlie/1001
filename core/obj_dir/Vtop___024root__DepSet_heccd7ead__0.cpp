// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__top__DOT__system_dmem__DOT__memory__v0;
    __VdlyVal__top__DOT__system_dmem__DOT__memory__v0 = 0;
    SData/*9:0*/ __VdlyDim0__top__DOT__system_dmem__DOT__memory__v0;
    __VdlyDim0__top__DOT__system_dmem__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__system_dmem__DOT__memory__v0;
    __VdlySet__top__DOT__system_dmem__DOT__memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__system_dmem__DOT__memory__v1;
    __VdlyVal__top__DOT__system_dmem__DOT__memory__v1 = 0;
    SData/*9:0*/ __VdlyDim0__top__DOT__system_dmem__DOT__memory__v1;
    __VdlyDim0__top__DOT__system_dmem__DOT__memory__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__system_dmem__DOT__memory__v1;
    __VdlySet__top__DOT__system_dmem__DOT__memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__system_dmem__DOT__memory__v2;
    __VdlyVal__top__DOT__system_dmem__DOT__memory__v2 = 0;
    SData/*9:0*/ __VdlyDim0__top__DOT__system_dmem__DOT__memory__v2;
    __VdlyDim0__top__DOT__system_dmem__DOT__memory__v2 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__system_dmem__DOT__memory__v2;
    __VdlySet__top__DOT__system_dmem__DOT__memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__system_dmem__DOT__memory__v3;
    __VdlyVal__top__DOT__system_dmem__DOT__memory__v3 = 0;
    SData/*9:0*/ __VdlyDim0__top__DOT__system_dmem__DOT__memory__v3;
    __VdlyDim0__top__DOT__system_dmem__DOT__memory__v3 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__system_dmem__DOT__memory__v3;
    __VdlySet__top__DOT__system_dmem__DOT__memory__v3 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__system_regfile__DOT__regfile__v0;
    __VdlyVal__top__DOT__system_regfile__DOT__regfile__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__system_regfile__DOT__regfile__v0;
    __VdlyDim0__top__DOT__system_regfile__DOT__regfile__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__system_regfile__DOT__regfile__v0;
    __VdlySet__top__DOT__system_regfile__DOT__regfile__v0 = 0;
    // Body
    VL_WRITEF_NX("=== DMEM ===\nmem[0] = %02x %02x %02x %02x\nmem[4] = %02x %02x %02x %02x\nmem[8] = %02x %02x %02x %02x\nmem[12] = %02x %02x %02x %02x\n========== Regfile State ==========\nx00 = %08x | x01 = %08x | x02 = %08x | x03 = %08x\nx04 = %08x | x05 = %08x | x06 = %08x | x07 = %08x\nx08 = %08x | x09 = %08x | x10 = %08x | x11 = %08x\nx12 = %08x | x13 = %08x | x14 = %08x | x15 = %08x\n===================================\nopcode = 0x%b\n",0,
                 8,vlSelfRef.top__DOT__system_dmem__DOT__memory
                 [0U],8,vlSelfRef.top__DOT__system_dmem__DOT__memory
                 [1U],8,vlSelfRef.top__DOT__system_dmem__DOT__memory
                 [2U],8,vlSelfRef.top__DOT__system_dmem__DOT__memory
                 [3U],8,vlSelfRef.top__DOT__system_dmem__DOT__memory
                 [4U],8,vlSelfRef.top__DOT__system_dmem__DOT__memory
                 [5U],8,vlSelfRef.top__DOT__system_dmem__DOT__memory
                 [6U],8,vlSelfRef.top__DOT__system_dmem__DOT__memory
                 [7U],8,vlSelfRef.top__DOT__system_dmem__DOT__memory
                 [8U],8,vlSelfRef.top__DOT__system_dmem__DOT__memory
                 [9U],8,vlSelfRef.top__DOT__system_dmem__DOT__memory
                 [0xaU],8,vlSelfRef.top__DOT__system_dmem__DOT__memory
                 [0xbU],8,vlSelfRef.top__DOT__system_dmem__DOT__memory
                 [0xcU],8,vlSelfRef.top__DOT__system_dmem__DOT__memory
                 [0xdU],8,vlSelfRef.top__DOT__system_dmem__DOT__memory
                 [0xeU],8,vlSelfRef.top__DOT__system_dmem__DOT__memory
                 [0xfU],32,vlSelfRef.top__DOT__system_regfile__DOT__regfile
                 [0U],32,vlSelfRef.top__DOT__system_regfile__DOT__regfile
                 [1U],32,vlSelfRef.top__DOT__system_regfile__DOT__regfile
                 [2U],32,vlSelfRef.top__DOT__system_regfile__DOT__regfile
                 [3U],32,vlSelfRef.top__DOT__system_regfile__DOT__regfile
                 [4U],32,vlSelfRef.top__DOT__system_regfile__DOT__regfile
                 [5U],32,vlSelfRef.top__DOT__system_regfile__DOT__regfile
                 [6U],32,vlSelfRef.top__DOT__system_regfile__DOT__regfile
                 [7U],32,vlSelfRef.top__DOT__system_regfile__DOT__regfile
                 [8U],32,vlSelfRef.top__DOT__system_regfile__DOT__regfile
                 [9U],32,vlSelfRef.top__DOT__system_regfile__DOT__regfile
                 [0xaU],32,vlSelfRef.top__DOT__system_regfile__DOT__regfile
                 [0xbU],32,vlSelfRef.top__DOT__system_regfile__DOT__regfile
                 [0xcU],32,vlSelfRef.top__DOT__system_regfile__DOT__regfile
                 [0xdU],32,vlSelfRef.top__DOT__system_regfile__DOT__regfile
                 [0xeU],32,vlSelfRef.top__DOT__system_regfile__DOT__regfile
                 [0xfU],1,vlSelfRef.top__DOT__RegWrite);
    __VdlySet__top__DOT__system_dmem__DOT__memory__v0 = 0U;
    __VdlySet__top__DOT__system_dmem__DOT__memory__v1 = 0U;
    __VdlySet__top__DOT__system_dmem__DOT__memory__v2 = 0U;
    __VdlySet__top__DOT__system_dmem__DOT__memory__v3 = 0U;
    __VdlySet__top__DOT__system_regfile__DOT__regfile__v0 = 0U;
    if ((0U != (IData)(vlSelfRef.top__DOT__system_lsu__DOT__mem_we_reg))) {
        if ((1U & (IData)(vlSelfRef.top__DOT__system_lsu__DOT__mem_we_reg))) {
            __VdlyVal__top__DOT__system_dmem__DOT__memory__v0 
                = (0xffU & vlSelfRef.top__DOT__system_lsu__DOT__mem_wdata_reg);
            __VdlyDim0__top__DOT__system_dmem__DOT__memory__v0 
                = (0x3ffU & vlSelfRef.top__DOT__data_addr);
            __VdlySet__top__DOT__system_dmem__DOT__memory__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.top__DOT__system_lsu__DOT__mem_we_reg))) {
            __VdlyVal__top__DOT__system_dmem__DOT__memory__v1 
                = (0xffU & (vlSelfRef.top__DOT__system_lsu__DOT__mem_wdata_reg 
                            >> 8U));
            __VdlyDim0__top__DOT__system_dmem__DOT__memory__v1 
                = (0x3ffU & ((IData)(1U) + vlSelfRef.top__DOT__data_addr));
            __VdlySet__top__DOT__system_dmem__DOT__memory__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.top__DOT__system_lsu__DOT__mem_we_reg))) {
            __VdlyVal__top__DOT__system_dmem__DOT__memory__v2 
                = (0xffU & (vlSelfRef.top__DOT__system_lsu__DOT__mem_wdata_reg 
                            >> 0x10U));
            __VdlyDim0__top__DOT__system_dmem__DOT__memory__v2 
                = (0x3ffU & ((IData)(2U) + vlSelfRef.top__DOT__data_addr));
            __VdlySet__top__DOT__system_dmem__DOT__memory__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.top__DOT__system_lsu__DOT__mem_we_reg))) {
            __VdlyVal__top__DOT__system_dmem__DOT__memory__v3 
                = (vlSelfRef.top__DOT__system_lsu__DOT__mem_wdata_reg 
                   >> 0x18U);
            __VdlyDim0__top__DOT__system_dmem__DOT__memory__v3 
                = (0x3ffU & ((IData)(3U) + vlSelfRef.top__DOT__data_addr));
            __VdlySet__top__DOT__system_dmem__DOT__memory__v3 = 1U;
        }
    }
    if (((IData)(vlSelfRef.top__DOT__RegWrite) & (0U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelfRef.top__DOT__current_inst 
                                                      >> 7U))))) {
        __VdlyVal__top__DOT__system_regfile__DOT__regfile__v0 
            = (1U & ((0x37U == (IData)(vlSelfRef.top__DOT__opcode))
                      ? (0xfffff000U & vlSelfRef.top__DOT__current_inst)
                      : ((0x17U == (IData)(vlSelfRef.top__DOT__opcode))
                          ? (vlSelfRef.top__DOT__current_addr 
                             + (0xfffff000U & vlSelfRef.top__DOT__current_inst))
                          : ((IData)(vlSelfRef.top__DOT__MemRead)
                              ? vlSelfRef.top__DOT__system_lsu__DOT__rdata_reg
                              : vlSelfRef.top__DOT__ALU_out))));
        __VdlyDim0__top__DOT__system_regfile__DOT__regfile__v0 
            = (0x1fU & (vlSelfRef.top__DOT__current_inst 
                        >> 7U));
        __VdlySet__top__DOT__system_regfile__DOT__regfile__v0 = 1U;
    }
    if (__VdlySet__top__DOT__system_dmem__DOT__memory__v0) {
        vlSelfRef.top__DOT__system_dmem__DOT__memory[__VdlyDim0__top__DOT__system_dmem__DOT__memory__v0] 
            = __VdlyVal__top__DOT__system_dmem__DOT__memory__v0;
    }
    if (__VdlySet__top__DOT__system_dmem__DOT__memory__v1) {
        vlSelfRef.top__DOT__system_dmem__DOT__memory[__VdlyDim0__top__DOT__system_dmem__DOT__memory__v1] 
            = __VdlyVal__top__DOT__system_dmem__DOT__memory__v1;
    }
    if (__VdlySet__top__DOT__system_dmem__DOT__memory__v2) {
        vlSelfRef.top__DOT__system_dmem__DOT__memory[__VdlyDim0__top__DOT__system_dmem__DOT__memory__v2] 
            = __VdlyVal__top__DOT__system_dmem__DOT__memory__v2;
    }
    if (__VdlySet__top__DOT__system_dmem__DOT__memory__v3) {
        vlSelfRef.top__DOT__system_dmem__DOT__memory[__VdlyDim0__top__DOT__system_dmem__DOT__memory__v3] 
            = __VdlyVal__top__DOT__system_dmem__DOT__memory__v3;
    }
    if (__VdlySet__top__DOT__system_regfile__DOT__regfile__v0) {
        vlSelfRef.top__DOT__system_regfile__DOT__regfile[__VdlyDim0__top__DOT__system_regfile__DOT__regfile__v0] 
            = __VdlyVal__top__DOT__system_regfile__DOT__regfile__v0;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ top__DOT__funct7;
    top__DOT__funct7 = 0;
    // Body
    vlSelfRef.top__DOT__current_addr = ((IData)(vlSelfRef.reset)
                                         ? 0U : vlSelfRef.top__DOT__next_addr);
    vlSelfRef.debug_current_addr = vlSelfRef.top__DOT__current_addr;
    vlSelfRef.debug_current_inst = vlSelfRef.top__DOT__system_imem__DOT__memory
        [(0xffU & (vlSelfRef.top__DOT__current_addr 
                   >> 2U))];
    vlSelfRef.top__DOT__current_inst = vlSelfRef.top__DOT__system_imem__DOT__memory
        [(0xffU & (vlSelfRef.top__DOT__current_addr 
                   >> 2U))];
    vlSelfRef.top__DOT__imm_i = (((- (IData)((vlSelfRef.top__DOT__current_inst 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelfRef.top__DOT__current_inst 
                                              >> 0x14U));
    vlSelfRef.top__DOT__RegWrite = 0U;
    vlSelfRef.top__DOT__MemRead = 0U;
    vlSelfRef.top__DOT__MemWrite = 0U;
    vlSelfRef.top__DOT__ALUSrc = 0U;
    vlSelfRef.top__DOT__alu_op = 0U;
    vlSelfRef.top__DOT__opcode = (0x7fU & vlSelfRef.top__DOT__current_inst);
    vlSelfRef.top__DOT__funct3 = (7U & (vlSelfRef.top__DOT__current_inst 
                                        >> 0xcU));
    top__DOT__funct7 = (vlSelfRef.top__DOT__current_inst 
                        >> 0x19U);
    if ((1U & (~ ((IData)(vlSelfRef.top__DOT__opcode) 
                  >> 6U)))) {
        if ((0x20U & (IData)(vlSelfRef.top__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelfRef.top__DOT__opcode))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__opcode) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.top__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.top__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.top__DOT__opcode))) {
                                vlSelfRef.top__DOT__RegWrite = 1U;
                                vlSelfRef.top__DOT__ALUSrc = 1U;
                                vlSelfRef.top__DOT__alu_op = 0U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelfRef.top__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__opcode))) {
                            vlSelfRef.top__DOT__ALUSrc = 0U;
                            vlSelfRef.top__DOT__RegWrite = 1U;
                            vlSelfRef.top__DOT__alu_op 
                                = ((4U & (IData)(vlSelfRef.top__DOT__funct3))
                                    ? ((2U & (IData)(vlSelfRef.top__DOT__funct3))
                                        ? ((1U & (IData)(vlSelfRef.top__DOT__funct3))
                                            ? 2U : 3U)
                                        : ((1U & (IData)(vlSelfRef.top__DOT__funct3))
                                            ? ((0x20U 
                                                == (IData)(top__DOT__funct7))
                                                ? 9U
                                                : 8U)
                                            : 4U)) : 
                                   ((2U & (IData)(vlSelfRef.top__DOT__funct3))
                                     ? ((1U & (IData)(vlSelfRef.top__DOT__funct3))
                                         ? 6U : 5U)
                                     : ((1U & (IData)(vlSelfRef.top__DOT__funct3))
                                         ? 7U : ((0x20U 
                                                  == (IData)(top__DOT__funct7))
                                                  ? 1U
                                                  : 0U))));
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__opcode) 
                                 >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.top__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__opcode))) {
                            vlSelfRef.top__DOT__MemWrite = 1U;
                            vlSelfRef.top__DOT__ALUSrc = 1U;
                            vlSelfRef.top__DOT__alu_op = 0U;
                            vlSelfRef.top__DOT__lsu_op 
                                = ((0U == (IData)(vlSelfRef.top__DOT__funct3))
                                    ? 0U : ((1U == (IData)(vlSelfRef.top__DOT__funct3))
                                             ? 1U : 
                                            ((2U == (IData)(vlSelfRef.top__DOT__funct3))
                                              ? 2U : 7U)));
                        }
                    }
                }
            }
        } else if ((0x10U & (IData)(vlSelfRef.top__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__opcode) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.top__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.top__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.top__DOT__opcode))) {
                            vlSelfRef.top__DOT__RegWrite = 1U;
                            vlSelfRef.top__DOT__ALUSrc = 1U;
                            vlSelfRef.top__DOT__alu_op = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.top__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__opcode))) {
                        vlSelfRef.top__DOT__ALUSrc = 1U;
                        vlSelfRef.top__DOT__RegWrite = 1U;
                        vlSelfRef.top__DOT__alu_op 
                            = ((4U & (IData)(vlSelfRef.top__DOT__funct3))
                                ? ((2U & (IData)(vlSelfRef.top__DOT__funct3))
                                    ? ((1U & (IData)(vlSelfRef.top__DOT__funct3))
                                        ? 2U : 3U) : 
                                   ((1U & (IData)(vlSelfRef.top__DOT__funct3))
                                     ? ((0x20U == (IData)(top__DOT__funct7))
                                         ? 9U : 8U)
                                     : 4U)) : ((2U 
                                                & (IData)(vlSelfRef.top__DOT__funct3))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__funct3))
                                                    ? 6U
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.top__DOT__funct3))
                                                    ? 7U
                                                    : 0U)));
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.top__DOT__opcode) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.top__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.top__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.top__DOT__opcode))) {
                        vlSelfRef.top__DOT__ALUSrc = 1U;
                        vlSelfRef.top__DOT__RegWrite = 1U;
                        vlSelfRef.top__DOT__MemRead = 1U;
                        vlSelfRef.top__DOT__alu_op = 0U;
                        vlSelfRef.top__DOT__lsu_op 
                            = ((4U & (IData)(vlSelfRef.top__DOT__funct3))
                                ? ((2U & (IData)(vlSelfRef.top__DOT__funct3))
                                    ? 7U : ((1U & (IData)(vlSelfRef.top__DOT__funct3))
                                             ? 4U : 3U))
                                : ((2U & (IData)(vlSelfRef.top__DOT__funct3))
                                    ? ((1U & (IData)(vlSelfRef.top__DOT__funct3))
                                        ? 7U : 2U) : 
                                   ((1U & (IData)(vlSelfRef.top__DOT__funct3))
                                     ? 1U : 0U)));
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ top__DOT__rd1;
    top__DOT__rd1 = 0;
    IData/*31:0*/ top__DOT__rd2;
    top__DOT__rd2 = 0;
    IData/*31:0*/ top__DOT__ALU_in_2;
    top__DOT__ALU_in_2 = 0;
    IData/*31:0*/ top__DOT__mem_rdata;
    top__DOT__mem_rdata = 0;
    CData/*0:0*/ top__DOT__branch_taken;
    top__DOT__branch_taken = 0;
    // Body
    top__DOT__rd2 = ((0U == (0x1fU & (vlSelfRef.top__DOT__current_inst 
                                      >> 0x14U))) ? 0U
                      : vlSelfRef.top__DOT__system_regfile__DOT__regfile
                     [(0x1fU & (vlSelfRef.top__DOT__current_inst 
                                >> 0x14U))]);
    top__DOT__rd1 = ((0U == (0x1fU & (vlSelfRef.top__DOT__current_inst 
                                      >> 0xfU))) ? 0U
                      : vlSelfRef.top__DOT__system_regfile__DOT__regfile
                     [(0x1fU & (vlSelfRef.top__DOT__current_inst 
                                >> 0xfU))]);
    vlSelfRef.top__DOT__system_lsu__DOT__mem_wdata_reg = 0U;
    top__DOT__ALU_in_2 = ((IData)(vlSelfRef.top__DOT__ALUSrc)
                           ? vlSelfRef.top__DOT__imm_i
                           : top__DOT__rd2);
    vlSelfRef.top__DOT__next_addr = ((IData)(4U) + vlSelfRef.top__DOT__current_addr);
    top__DOT__branch_taken = 0U;
    if ((0x6fU == (IData)(vlSelfRef.top__DOT__opcode))) {
        top__DOT__branch_taken = 1U;
        vlSelfRef.top__DOT__next_addr = vlSelfRef.top__DOT__current_addr;
    } else if ((0x67U == (IData)(vlSelfRef.top__DOT__opcode))) {
        top__DOT__branch_taken = 1U;
        vlSelfRef.top__DOT__next_addr = (0xfffffffeU 
                                         & (top__DOT__rd1 
                                            + vlSelfRef.top__DOT__imm_i));
    } else if ((0x63U == (IData)(vlSelfRef.top__DOT__opcode))) {
        top__DOT__branch_taken = ((4U & (IData)(vlSelfRef.top__DOT__funct3))
                                   ? ((2U & (IData)(vlSelfRef.top__DOT__funct3))
                                       ? ((1U & (IData)(vlSelfRef.top__DOT__funct3))
                                           ? (top__DOT__rd1 
                                              >= top__DOT__rd2)
                                           : (top__DOT__rd1 
                                              < top__DOT__rd2))
                                       : ((1U & (IData)(vlSelfRef.top__DOT__funct3))
                                           ? VL_GTES_III(32, top__DOT__rd1, top__DOT__rd2)
                                           : VL_LTS_III(32, top__DOT__rd1, top__DOT__rd2)))
                                   : ((1U & (~ ((IData)(vlSelfRef.top__DOT__funct3) 
                                                >> 1U))) 
                                      && ((1U & (IData)(vlSelfRef.top__DOT__funct3))
                                           ? (top__DOT__rd1 
                                              != top__DOT__rd2)
                                           : (top__DOT__rd1 
                                              == top__DOT__rd2))));
        if (top__DOT__branch_taken) {
            vlSelfRef.top__DOT__next_addr = vlSelfRef.top__DOT__current_addr;
        }
    }
    vlSelfRef.top__DOT__data_addr = (top__DOT__rd1 
                                     + ((3U == (IData)(vlSelfRef.top__DOT__opcode))
                                         ? vlSelfRef.top__DOT__imm_i
                                         : (((- (IData)(
                                                        (vlSelfRef.top__DOT__current_inst 
                                                         >> 0x1fU))) 
                                             << 0xcU) 
                                            | ((0xfe0U 
                                                & (vlSelfRef.top__DOT__current_inst 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelfRef.top__DOT__current_inst 
                                                     >> 7U))))));
    vlSelfRef.top__DOT__ALU_out = ((8U & (IData)(vlSelfRef.top__DOT__alu_op))
                                    ? ((4U & (IData)(vlSelfRef.top__DOT__alu_op))
                                        ? ((2U & (IData)(vlSelfRef.top__DOT__alu_op))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.top__DOT__alu_op))
                                                ? top__DOT__ALU_in_2
                                                : 0U)
                                            : 0U) : 
                                       ((2U & (IData)(vlSelfRef.top__DOT__alu_op))
                                         ? 0U : ((1U 
                                                  & (IData)(vlSelfRef.top__DOT__alu_op))
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,5, top__DOT__rd1, 
                                                                (0x1fU 
                                                                 & top__DOT__ALU_in_2))
                                                  : 
                                                 (top__DOT__rd1 
                                                  >> 
                                                  (0x1fU 
                                                   & top__DOT__ALU_in_2)))))
                                    : ((4U & (IData)(vlSelfRef.top__DOT__alu_op))
                                        ? ((2U & (IData)(vlSelfRef.top__DOT__alu_op))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.top__DOT__alu_op))
                                                ? (top__DOT__rd1 
                                                   << 
                                                   (0x1fU 
                                                    & top__DOT__ALU_in_2))
                                                : (
                                                   (top__DOT__rd1 
                                                    < top__DOT__ALU_in_2)
                                                    ? 1U
                                                    : 0U))
                                            : ((1U 
                                                & (IData)(vlSelfRef.top__DOT__alu_op))
                                                ? (
                                                   VL_LTS_III(32, top__DOT__rd1, top__DOT__ALU_in_2)
                                                    ? 1U
                                                    : 0U)
                                                : (top__DOT__rd1 
                                                   ^ top__DOT__ALU_in_2)))
                                        : ((2U & (IData)(vlSelfRef.top__DOT__alu_op))
                                            ? ((1U 
                                                & (IData)(vlSelfRef.top__DOT__alu_op))
                                                ? (top__DOT__rd1 
                                                   | top__DOT__ALU_in_2)
                                                : (top__DOT__rd1 
                                                   & top__DOT__ALU_in_2))
                                            : ((1U 
                                                & (IData)(vlSelfRef.top__DOT__alu_op))
                                                ? (top__DOT__rd1 
                                                   - top__DOT__ALU_in_2)
                                                : (top__DOT__rd1 
                                                   + top__DOT__ALU_in_2)))));
    vlSelfRef.top__DOT__system_lsu__DOT__mem_we_reg = 0U;
    if (vlSelfRef.top__DOT__MemWrite) {
        if ((0U == (IData)(vlSelfRef.top__DOT__lsu_op))) {
            vlSelfRef.top__DOT__system_lsu__DOT__mem_wdata_reg 
                = ((top__DOT__rd2 << 0x18U) | ((0xff0000U 
                                                & (top__DOT__rd2 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & (top__DOT__rd2 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & top__DOT__rd2))));
            vlSelfRef.top__DOT__system_lsu__DOT__mem_we_reg 
                = ((2U & vlSelfRef.top__DOT__data_addr)
                    ? ((1U & vlSelfRef.top__DOT__data_addr)
                        ? 8U : 4U) : ((1U & vlSelfRef.top__DOT__data_addr)
                                       ? 2U : 1U));
        } else if ((1U == (IData)(vlSelfRef.top__DOT__lsu_op))) {
            vlSelfRef.top__DOT__system_lsu__DOT__mem_wdata_reg 
                = ((top__DOT__rd2 << 0x10U) | (0xffffU 
                                               & top__DOT__rd2));
            if ((2U & vlSelfRef.top__DOT__data_addr)) {
                if ((2U & vlSelfRef.top__DOT__data_addr)) {
                    vlSelfRef.top__DOT__system_lsu__DOT__mem_we_reg = 0xcU;
                }
            } else {
                vlSelfRef.top__DOT__system_lsu__DOT__mem_we_reg = 3U;
            }
        } else if ((2U == (IData)(vlSelfRef.top__DOT__lsu_op))) {
            vlSelfRef.top__DOT__system_lsu__DOT__mem_wdata_reg 
                = top__DOT__rd2;
            vlSelfRef.top__DOT__system_lsu__DOT__mem_we_reg = 0xfU;
        }
    }
    top__DOT__mem_rdata = ((IData)(vlSelfRef.top__DOT__MemRead)
                            ? (((vlSelfRef.top__DOT__system_dmem__DOT__memory
                                 [(0x3ffU & ((IData)(3U) 
                                             + vlSelfRef.top__DOT__data_addr))] 
                                 << 0x18U) | (vlSelfRef.top__DOT__system_dmem__DOT__memory
                                              [(0x3ffU 
                                                & ((IData)(2U) 
                                                   + vlSelfRef.top__DOT__data_addr))] 
                                              << 0x10U)) 
                               | ((vlSelfRef.top__DOT__system_dmem__DOT__memory
                                   [(0x3ffU & ((IData)(1U) 
                                               + vlSelfRef.top__DOT__data_addr))] 
                                   << 8U) | vlSelfRef.top__DOT__system_dmem__DOT__memory
                                  [(0x3ffU & vlSelfRef.top__DOT__data_addr)]))
                            : 0U);
    vlSelfRef.debug_ALU_out = vlSelfRef.top__DOT__ALU_out;
    vlSelfRef.top__DOT__system_lsu__DOT__rdata_reg = 0U;
    if ((4U & (IData)(vlSelfRef.top__DOT__lsu_op))) {
        if ((2U & (IData)(vlSelfRef.top__DOT__lsu_op))) {
            vlSelfRef.top__DOT__system_lsu__DOT__rdata_reg = 0xdeadbeefU;
        } else if ((1U & (IData)(vlSelfRef.top__DOT__lsu_op))) {
            vlSelfRef.top__DOT__system_lsu__DOT__rdata_reg = 0xdeadbeefU;
        } else if ((2U & vlSelfRef.top__DOT__data_addr)) {
            if ((2U & vlSelfRef.top__DOT__data_addr)) {
                vlSelfRef.top__DOT__system_lsu__DOT__rdata_reg 
                    = (top__DOT__mem_rdata >> 0x10U);
            }
        } else {
            vlSelfRef.top__DOT__system_lsu__DOT__rdata_reg 
                = (0xffffU & top__DOT__mem_rdata);
        }
    } else if ((2U & (IData)(vlSelfRef.top__DOT__lsu_op))) {
        vlSelfRef.top__DOT__system_lsu__DOT__rdata_reg 
            = ((1U & (IData)(vlSelfRef.top__DOT__lsu_op))
                ? ((2U & vlSelfRef.top__DOT__data_addr)
                    ? ((1U & vlSelfRef.top__DOT__data_addr)
                        ? (top__DOT__mem_rdata >> 0x18U)
                        : (0xffU & (top__DOT__mem_rdata 
                                    >> 0x10U))) : (
                                                   (1U 
                                                    & vlSelfRef.top__DOT__data_addr)
                                                    ? 
                                                   (0xffU 
                                                    & (top__DOT__mem_rdata 
                                                       >> 8U))
                                                    : 
                                                   (0xffU 
                                                    & top__DOT__mem_rdata)))
                : top__DOT__mem_rdata);
    } else if ((1U & (IData)(vlSelfRef.top__DOT__lsu_op))) {
        if ((2U & vlSelfRef.top__DOT__data_addr)) {
            if ((2U & vlSelfRef.top__DOT__data_addr)) {
                vlSelfRef.top__DOT__system_lsu__DOT__rdata_reg 
                    = (((- (IData)((top__DOT__mem_rdata 
                                    >> 0x1fU))) << 0x10U) 
                       | (top__DOT__mem_rdata >> 0x10U));
            }
        } else {
            vlSelfRef.top__DOT__system_lsu__DOT__rdata_reg 
                = (((- (IData)((1U & (top__DOT__mem_rdata 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & top__DOT__mem_rdata));
        }
    } else {
        vlSelfRef.top__DOT__system_lsu__DOT__rdata_reg 
            = ((2U & vlSelfRef.top__DOT__data_addr)
                ? ((1U & vlSelfRef.top__DOT__data_addr)
                    ? (((- (IData)((top__DOT__mem_rdata 
                                    >> 0x1fU))) << 8U) 
                       | (top__DOT__mem_rdata >> 0x18U))
                    : (((- (IData)((1U & (top__DOT__mem_rdata 
                                          >> 0x17U)))) 
                        << 8U) | (0xffU & (top__DOT__mem_rdata 
                                           >> 0x10U))))
                : ((1U & vlSelfRef.top__DOT__data_addr)
                    ? (((- (IData)((1U & (top__DOT__mem_rdata 
                                          >> 0xfU)))) 
                        << 8U) | (0xffU & (top__DOT__mem_rdata 
                                           >> 8U)))
                    : (((- (IData)((1U & (top__DOT__mem_rdata 
                                          >> 7U)))) 
                        << 8U) | (0xffU & top__DOT__mem_rdata))));
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
