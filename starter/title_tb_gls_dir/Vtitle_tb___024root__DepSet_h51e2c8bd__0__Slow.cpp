// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtitle_tb.h for the primary calling header

#include "Vtitle_tb__pch.h"
#include "Vtitle_tb___024root.h"

VL_ATTR_COLD void Vtitle_tb___024root___eval_static(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtitle_tb___024root___eval_initial__TOP(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.title_tb__DOT__title__DOT____Vxrand_h7cc986cc__0 
        = (0x7fffffffffffULL & VL_RAND_RESET_ASSIGN_Q(47));
    vlSelfRef.title_tb__DOT__title__DOT__title_mem[0U] = 0x78cf1f078c9eULL;
    vlSelfRef.title_tb__DOT__title__DOT__title_mem[1U] = 0x64cc99064c99ULL;
    vlSelfRef.title_tb__DOT__title__DOT__title_mem[2U] = 0x64cc99064c99ULL;
    vlSelfRef.title_tb__DOT__title__DOT__title_mem[3U] = 0x64cc99078c99ULL;
    vlSelfRef.title_tb__DOT__title__DOT__title_mem[4U] = 0x64cc99064c99ULL;
    vlSelfRef.title_tb__DOT__title__DOT__title_mem[5U] = 0x64cc99064c99ULL;
    vlSelfRef.title_tb__DOT__title__DOT__title_mem[6U] = 0x78cc9f064f19ULL;
    vlSelfRef.title_tb__DOT__title__DOT___30___DOT____Vxrand_h8d96407a__0 
        = (1U & VL_RAND_RESET_ASSIGN_I(1));
}

VL_ATTR_COLD void Vtitle_tb___024root___eval_final(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtitle_tb___024root___dump_triggers__stl(Vtitle_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtitle_tb___024root___eval_phase__stl(Vtitle_tb___024root* vlSelf);

VL_ATTR_COLD void Vtitle_tb___024root___eval_settle(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtitle_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("dv/title_tb.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtitle_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtitle_tb___024root___dump_triggers__stl(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] title_tb.title._15_)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] title_tb.title._16_)\n");
    }
}
#endif  // VL_DEBUG

void Vtitle_tb___024root___act_comb__TOP__0(Vtitle_tb___024root* vlSelf);
void Vtitle_tb___024root___act_comb__TOP__1(Vtitle_tb___024root* vlSelf);

VL_ATTR_COLD void Vtitle_tb___024root___eval_stl(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtitle_tb___024root___act_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtitle_tb___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void Vtitle_tb___024root___eval_triggers__stl(Vtitle_tb___024root* vlSelf);

VL_ATTR_COLD bool Vtitle_tb___024root___eval_phase__stl(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtitle_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtitle_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtitle_tb___024root___dump_triggers__act(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] title_tb.title._15_)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] title_tb.title._16_)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge title_tb.clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtitle_tb___024root___dump_triggers__nba(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] title_tb.title._15_)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] title_tb.title._16_)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge title_tb.clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtitle_tb___024root___ctor_var_reset(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->title_tb__DOT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->title_tb__DOT__pixel_x_i = VL_RAND_RESET_I(10);
    vlSelf->title_tb__DOT__pixel_y_i = VL_RAND_RESET_I(10);
    vlSelf->title_tb__DOT__title_gif = 0;
    vlSelf->title_tb__DOT__title__DOT____Vxrand_h7cc986cc__0 = VL_RAND_RESET_Q(47);
    vlSelf->title_tb__DOT__title__DOT___08_ = VL_RAND_RESET_I(1);
    vlSelf->title_tb__DOT__title__DOT___15_ = VL_RAND_RESET_I(32);
    vlSelf->title_tb__DOT__title__DOT___16_ = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->title_tb__DOT__title__DOT__title_mem[__Vi0] = VL_RAND_RESET_Q(47);
    }
    vlSelf->title_tb__DOT__title__DOT____Vcellinp___29___A = VL_RAND_RESET_I(32);
    vlSelf->title_tb__DOT__title__DOT___30___DOT____Vxrand_h8d96407a__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___15___0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___16___0 = VL_RAND_RESET_I(32);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___15___1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___16___1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__title_tb__DOT__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
