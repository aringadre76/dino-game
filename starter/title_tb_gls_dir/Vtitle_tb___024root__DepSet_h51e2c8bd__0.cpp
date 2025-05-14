// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtitle_tb.h for the primary calling header

#include "Vtitle_tb__pch.h"
#include "Vtitle_tb___024root.h"

VL_ATTR_COLD void Vtitle_tb___024root___eval_initial__TOP(Vtitle_tb___024root* vlSelf);
VlCoroutine Vtitle_tb___024root___eval_initial__TOP__Vtiming__0(Vtitle_tb___024root* vlSelf);
VlCoroutine Vtitle_tb___024root___eval_initial__TOP__Vtiming__1(Vtitle_tb___024root* vlSelf);

void Vtitle_tb___024root___eval_initial(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtitle_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtitle_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtitle_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___15___0 
        = vlSelfRef.title_tb__DOT__title__DOT___15_;
    vlSelfRef.__Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___16___0 
        = vlSelfRef.title_tb__DOT__title__DOT___16_;
    vlSelfRef.__Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___15___1 
        = vlSelfRef.title_tb__DOT__title__DOT___15_;
    vlSelfRef.__Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___16___1 
        = vlSelfRef.title_tb__DOT__title__DOT___16_;
    vlSelfRef.__Vtrigprevexpr___TOP__title_tb__DOT__clk_i__0 = 0U;
}

VL_INLINE_OPT VlCoroutine Vtitle_tb___024root___eval_initial__TOP__Vtiming__0(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.title_tb__DOT__clk_i = 0U;
    while (1U) {
        vlSelfRef.title_tb__DOT__clk_i = (1U & (~ (IData)(vlSelfRef.title_tb__DOT__clk_i)));
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "dv/title_tb.sv", 
                                             26);
    }
}

void Vtitle_tb___024root___act_comb__TOP__0(Vtitle_tb___024root* vlSelf);
void Vtitle_tb___024root___act_comb__TOP__1(Vtitle_tb___024root* vlSelf);

void Vtitle_tb___024root___eval_act(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xaULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtitle_tb___024root___act_comb__TOP__0(vlSelf);
    }
    if ((9ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtitle_tb___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtitle_tb___024root___act_comb__TOP__0(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___act_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x80000000U & (((IData)(0x2eU) - 
                                  (0x3fU & VL_DIV_III(32, 
                                                      (0xffffU 
                                                       & ((IData)(0x2fU) 
                                                          * (IData)(vlSelfRef.title_tb__DOT__pixel_x_i))), (IData)(0x280U)))) 
                                 << 0x19U)) | ((0x40000000U 
                                                & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                   >> 1U)) 
                                               | ((0x20000000U 
                                                   & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                      >> 2U)) 
                                                  | ((0x10000000U 
                                                      & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                         >> 3U)) 
                                                     | ((0x8000000U 
                                                         & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                            >> 4U)) 
                                                        | ((0x4000000U 
                                                            & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                               >> 5U)) 
                                                           | ((0x2000000U 
                                                               & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                  >> 6U)) 
                                                              | ((0x1000000U 
                                                                  & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                     >> 7U)) 
                                                                 | ((0x800000U 
                                                                     & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                        >> 8U)) 
                                                                    | ((0x400000U 
                                                                        & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                           >> 9U)) 
                                                                       | ((0x200000U 
                                                                           & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                              >> 0xaU)) 
                                                                          | ((0x100000U 
                                                                              & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                                >> 0xbU)) 
                                                                             | ((0x80000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                                >> 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                                >> 0xdU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                                >> 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                                >> 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                                >> 0x10U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                                >> 0x11U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                                >> 0x12U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                                >> 0x13U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                                >> 0x14U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                                >> 0x15U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                                >> 0x16U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                                >> 0x17U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                                >> 0x18U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                                                                >> 0x19U)) 
                                                                                | (0x3fU 
                                                                                & ((IData)(0x2eU) 
                                                                                - 
                                                                                VL_DIV_III(32, 
                                                                                (0xffffU 
                                                                                & ((IData)(0x2fU) 
                                                                                * (IData)(vlSelfRef.title_tb__DOT__pixel_x_i))), (IData)(0x280U))))))))))))))))))))))))))))));
    vlSelfRef.title_tb__DOT__title__DOT___16_ = __Vtemp_1;
}

VL_INLINE_OPT void Vtitle_tb___024root___act_comb__TOP__1(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___act_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x80000000U & (((IData)(vlSelfRef.title_tb__DOT__pixel_y_i) 
                                  - (IData)(0x24U)) 
                                 << 0x15U)) | ((0x40000000U 
                                                & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                   >> 1U)) 
                                               | ((0x20000000U 
                                                   & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                      >> 2U)) 
                                                  | ((0x10000000U 
                                                      & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                         >> 3U)) 
                                                     | ((0x8000000U 
                                                         & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                            >> 4U)) 
                                                        | ((0x4000000U 
                                                            & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                               >> 5U)) 
                                                           | ((0x2000000U 
                                                               & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                  >> 6U)) 
                                                              | ((0x1000000U 
                                                                  & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                     >> 7U)) 
                                                                 | ((0x800000U 
                                                                     & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                        >> 8U)) 
                                                                    | ((0x400000U 
                                                                        & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                           >> 9U)) 
                                                                       | ((0x200000U 
                                                                           & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                              >> 0xaU)) 
                                                                          | ((0x100000U 
                                                                              & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                                >> 0xbU)) 
                                                                             | ((0x80000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                                >> 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                                >> 0xdU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                                >> 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                                >> 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                                >> 0x10U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                                >> 0x11U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                                >> 0x12U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                                >> 0x13U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                                >> 0x14U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                                >> 0x15U)) 
                                                                                | (0x3ffU 
                                                                                & ((IData)(vlSelfRef.title_tb__DOT__pixel_y_i) 
                                                                                - (IData)(0x24U)))))))))))))))))))))))));
    vlSelfRef.title_tb__DOT__title__DOT___15_ = __Vtemp_1;
    vlSelfRef.title_tb__DOT__title__DOT____Vcellinp___29___A 
        = ((0x80000000U & vlSelfRef.title_tb__DOT__title__DOT___15_) 
           | ((0x40000000U & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                              >> 1U)) | ((0x20000000U 
                                          & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                             >> 2U)) 
                                         | ((0x10000000U 
                                             & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                >> 3U)) 
                                            | ((0x8000000U 
                                                & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                   >> 4U)) 
                                               | ((0x4000000U 
                                                   & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                      >> 5U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                         >> 6U)) 
                                                     | ((0x1000000U 
                                                         & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                            >> 7U)) 
                                                        | ((0x800000U 
                                                            & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                               >> 8U)) 
                                                           | ((0x400000U 
                                                               & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                  >> 9U)) 
                                                              | ((0x200000U 
                                                                  & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                     >> 0xaU)) 
                                                                 | ((0x100000U 
                                                                     & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                        >> 0xbU)) 
                                                                    | ((0x80000U 
                                                                        & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                           >> 0xcU)) 
                                                                       | ((0x40000U 
                                                                           & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                              >> 0xdU)) 
                                                                          | ((0x20000U 
                                                                              & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                                >> 0xeU)) 
                                                                             | ((0x10000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                                >> 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                                >> 0x10U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                                >> 0x11U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                                >> 0x12U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                                >> 0x13U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                                >> 0x14U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                                                                >> 0x15U)) 
                                                                                | (0x3ffU 
                                                                                & vlSelfRef.title_tb__DOT__title__DOT___15_)))))))))))))))))))))));
    vlSelfRef.title_tb__DOT__title__DOT___08_ = (((
                                                   ((0x280U 
                                                     > (IData)(vlSelfRef.title_tb__DOT__pixel_x_i)) 
                                                    & (0x24U 
                                                       <= (IData)(vlSelfRef.title_tb__DOT__pixel_y_i))) 
                                                   & (0x54U 
                                                      > (IData)(vlSelfRef.title_tb__DOT__pixel_y_i))) 
                                                  & (0x2fU 
                                                     > 
                                                     (0x3fU 
                                                      & VL_DIV_III(32, 
                                                                   (0xffffU 
                                                                    & ((IData)(0x2fU) 
                                                                       * (IData)(vlSelfRef.title_tb__DOT__pixel_x_i))), (IData)(0x280U))))) 
                                                 & (7U 
                                                    > 
                                                    (7U 
                                                     & VL_DIV_III(32, 
                                                                  ((IData)(7U) 
                                                                   * vlSelfRef.title_tb__DOT__title__DOT____Vcellinp___29___A), (IData)(0x30U)))));
}

void Vtitle_tb___024root___nba_sequent__TOP__0(Vtitle_tb___024root* vlSelf);

void Vtitle_tb___024root___eval_nba(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtitle_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtitle_tb___024root___nba_sequent__TOP__0(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.title_tb__DOT__title__DOT___08_ = (((
                                                   ((0x280U 
                                                     > (IData)(vlSelfRef.title_tb__DOT__pixel_x_i)) 
                                                    & (0x24U 
                                                       <= (IData)(vlSelfRef.title_tb__DOT__pixel_y_i))) 
                                                   & (0x54U 
                                                      > (IData)(vlSelfRef.title_tb__DOT__pixel_y_i))) 
                                                  & (0x2fU 
                                                     > 
                                                     (0x3fU 
                                                      & VL_DIV_III(32, 
                                                                   (0xffffU 
                                                                    & ((IData)(0x2fU) 
                                                                       * (IData)(vlSelfRef.title_tb__DOT__pixel_x_i))), (IData)(0x280U))))) 
                                                 & (7U 
                                                    > 
                                                    (7U 
                                                     & VL_DIV_III(32, 
                                                                  ((IData)(7U) 
                                                                   * vlSelfRef.title_tb__DOT__title__DOT____Vcellinp___29___A), (IData)(0x30U)))));
}

void Vtitle_tb___024root___timing_resume(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd075d385__0.resume(
                                                   "@(negedge title_tb.clk_i)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtitle_tb___024root___timing_commit(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd075d385__0.commit(
                                                   "@(negedge title_tb.clk_i)");
    }
}

void Vtitle_tb___024root___eval_triggers__act(Vtitle_tb___024root* vlSelf);

bool Vtitle_tb___024root___eval_phase__act(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtitle_tb___024root___eval_triggers__act(vlSelf);
    Vtitle_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtitle_tb___024root___timing_resume(vlSelf);
        Vtitle_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtitle_tb___024root___eval_phase__nba(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtitle_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtitle_tb___024root___dump_triggers__nba(Vtitle_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtitle_tb___024root___dump_triggers__act(Vtitle_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtitle_tb___024root___eval(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtitle_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dv/title_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtitle_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dv/title_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtitle_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtitle_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtitle_tb___024root___eval_debug_assertions(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
