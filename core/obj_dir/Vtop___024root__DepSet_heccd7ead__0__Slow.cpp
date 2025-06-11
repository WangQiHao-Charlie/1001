// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6772616dU;
    __Vtemp_1[2U] = 0x70726fU;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.top__DOT__system_imem__DOT__memory)
                 , 0, ~0ULL);
    vlSelfRef.top__DOT__RegWrite = 0U;
    vlSelfRef.top__DOT__MemRead = 0U;
    vlSelfRef.top__DOT__MemWrite = 0U;
    vlSelfRef.top__DOT__ALUSrc = 0U;
    vlSelfRef.top__DOT__alu_op = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ top__DOT__funct7;
    top__DOT__funct7 = 0;
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
    vlSelfRef.debug_current_addr = vlSelfRef.top__DOT__current_addr;
    vlSelfRef.debug_current_inst = vlSelfRef.top__DOT__system_imem__DOT__memory
        [(0xffU & (vlSelfRef.top__DOT__current_addr 
                   >> 2U))];
    vlSelfRef.top__DOT__current_inst = vlSelfRef.top__DOT__system_imem__DOT__memory
        [(0xffU & (vlSelfRef.top__DOT__current_addr 
                   >> 2U))];
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
    top__DOT__ALU_in_2 = ((IData)(vlSelfRef.top__DOT__ALUSrc)
                           ? vlSelfRef.top__DOT__imm_i
                           : top__DOT__rd2);
    vlSelfRef.top__DOT__system_lsu__DOT__mem_wdata_reg = 0U;
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

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->debug_current_addr = VL_RAND_RESET_I(32);
    vlSelf->debug_current_inst = VL_RAND_RESET_I(32);
    vlSelf->debug_ALU_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__current_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__current_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__next_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__imm_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemRead = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__lsu_op = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ALU_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_addr = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__system_imem__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top__DOT__system_dmem__DOT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__system_lsu__DOT__rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__system_lsu__DOT__mem_we_reg = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__system_lsu__DOT__mem_wdata_reg = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__system_regfile__DOT__regfile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
