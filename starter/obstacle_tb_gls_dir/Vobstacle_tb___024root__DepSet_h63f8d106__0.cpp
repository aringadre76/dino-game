// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vobstacle_tb.h for the primary calling header

#include "Vobstacle_tb__pch.h"
#include "Vobstacle_tb___024root.h"

VL_ATTR_COLD void Vobstacle_tb___024root___eval_initial__TOP(Vobstacle_tb___024root* vlSelf);
VlCoroutine Vobstacle_tb___024root___eval_initial__TOP__Vtiming__0(Vobstacle_tb___024root* vlSelf);
VlCoroutine Vobstacle_tb___024root___eval_initial__TOP__Vtiming__1(Vobstacle_tb___024root* vlSelf);

void Vobstacle_tb___024root___eval_initial(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vobstacle_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vobstacle_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vobstacle_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__obstacle_tb__DOT__cactus__DOT___29___0 
        = vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_;
    vlSelfRef.__Vtrigprevexpr___TOP__obstacle_tb__DOT__cactus__DOT___29___1 
        = vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_;
    vlSelfRef.__Vtrigprevexpr___TOP__obstacle_tb__DOT__cactus__DOT___32___DOT__pos_arst__0 
        = vlSelfRef.obstacle_tb__DOT__cactus__DOT___32___DOT__pos_arst;
    vlSelfRef.__Vtrigprevexpr___TOP__obstacle_tb__DOT__clk_i__0 
        = vlSelfRef.obstacle_tb__DOT__clk_i;
}

VL_INLINE_OPT VlCoroutine Vobstacle_tb___024root___eval_initial__TOP__Vtiming__0(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.obstacle_tb__DOT__clk_i = 0U;
    while (1U) {
        vlSelfRef.obstacle_tb__DOT__clk_i = (1U & (~ (IData)(vlSelfRef.obstacle_tb__DOT__clk_i)));
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "dv/obstacle_tb.sv", 
                                             53);
    }
}

void Vobstacle_tb___024root___act_sequent__TOP__0(Vobstacle_tb___024root* vlSelf);
void Vobstacle_tb___024root___act_comb__TOP__0(Vobstacle_tb___024root* vlSelf);

void Vobstacle_tb___024root___eval_act(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vobstacle_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x11ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vobstacle_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vobstacle_tb___024root___act_sequent__TOP__0(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit;
    obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit = 0;
    CData/*1:0*/ obstacle_tb__DOT__bird__DOT____Vcellinp___53___B;
    obstacle_tb__DOT__bird__DOT____Vcellinp___53___B = 0;
    CData/*3:0*/ obstacle_tb__DOT__bird__DOT____Vcellinp___56___S;
    obstacle_tb__DOT__bird__DOT____Vcellinp___56___S = 0;
    CData/*0:0*/ obstacle_tb__DOT__bird__DOT___53___DOT__found_active_sel_bit;
    obstacle_tb__DOT__bird__DOT___53___DOT__found_active_sel_bit = 0;
    CData/*0:0*/ obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit;
    obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit = 0;
    // Body
    vlSelfRef.obstacle_tb__DOT__cactus__DOT___32___DOT__pos_arst 
        = (1U & (~ (IData)(vlSelfRef.obstacle_tb__DOT__rst_ni)));
    vlSelfRef.obstacle_tb__DOT__cactus__DOT___24_ = 
        ((IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q)
          ? (8U < (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q))
          : (IData)(vlSelfRef.obstacle_tb__DOT__spawn_i));
    vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellinp___42___A 
        = (((IData)(vlSelfRef.obstacle_tb__DOT__next_frame_i) 
            << 1U) | (2U != ((VL_GTES_III(11, 0x7d6U, (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q)) 
                              << 1U) | (IData)(vlSelfRef.obstacle_tb__DOT__spawn_i))));
    vlSelfRef.obstacle_tb__DOT__bird__DOT___01_ = (0x7ffU 
                                                   & (VL_GTES_III(11, 0x7d6U, (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q))
                                                       ? 
                                                      ((IData)(vlSelfRef.obstacle_tb__DOT__spawn_i)
                                                        ? 0x280U
                                                        : (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT____Vxrand_h8d92f7e9__1))
                                                       : 
                                                      ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q) 
                                                       - (IData)(8U))));
    vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___38___A 
        = (((3U != (((8U >= (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)) 
                     << 1U) | (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q))) 
            << 2U) | ((((IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q) 
                        | (IData)(vlSelfRef.obstacle_tb__DOT__spawn_i)) 
                       << 1U) | (IData)(vlSelfRef.obstacle_tb__DOT__next_frame_i)));
    vlSelfRef.obstacle_tb__DOT__cactus__DOT__pixel_in_range 
        = (((IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q) 
            & (((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                >= (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)) 
               & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                  < (0xfffU & ((IData)(0xfU) + (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)))))) 
           & ((0x16fU <= (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i)) 
              & (0x190U > (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i))));
    vlSelfRef.obstacle_tb__DOT__bird__DOT__pixel_in_range 
        = ((((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
             >= (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q)) 
            & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
               < (0xfffU & ((IData)(0x2aU) + (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q))))) 
           & (((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
               >= (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q)) 
              & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                 < (0xfffU & ((IData)(0x24U) + (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q))))));
    obstacle_tb__DOT__bird__DOT____Vcellinp___56___S 
        = ((8U & ((~ (IData)((0U != (3U & (IData)(vlSelfRef.obstacle_tb__DOT__rand_i))))) 
                  << 3U)) | (((1U == (3U & (IData)(vlSelfRef.obstacle_tb__DOT__rand_i))) 
                              << 2U) | (((2U == (3U 
                                                 & (IData)(vlSelfRef.obstacle_tb__DOT__rand_i))) 
                                         << 1U) | (3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelfRef.obstacle_tb__DOT__rand_i))))));
    vlSelfRef.obstacle_tb__DOT__bird__DOT___31_ = (0x3fU 
                                                   & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                      - (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q)));
    vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellout___67___Y 
        = (0x7ffU & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                     - (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q)));
    vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___48___B 
        = (((QData)((IData)(((0x20U >= (0x3fU & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                 - (IData)(0x2fU))))
                              ? vlSelfRef.obstacle_tb__DOT__cactus__DOT__CACTUS0
                             [(0x3fU & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                        - (IData)(0x2fU)))]
                              : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d74c0ea__0)))) 
            << 0x2dU) | (((QData)((IData)(((0x20U >= 
                                            (0x3fU 
                                             & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                - (IData)(0x2fU))))
                                            ? vlSelfRef.obstacle_tb__DOT__cactus__DOT__CACTUS1
                                           [(0x3fU 
                                             & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                - (IData)(0x2fU)))]
                                            : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d74c0ea__1)))) 
                          << 0x1eU) | (QData)((IData)(
                                                      ((((0x20U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                              - (IData)(0x2fU))))
                                                          ? 
                                                         vlSelfRef.obstacle_tb__DOT__cactus__DOT__CACTUS2
                                                         [
                                                         (0x3fU 
                                                          & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                             - (IData)(0x2fU)))]
                                                          : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d74c0ea__2)) 
                                                        << 0xfU) 
                                                       | ((0x20U 
                                                           >= 
                                                           (0x3fU 
                                                            & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                               - (IData)(0x2fU))))
                                                           ? 
                                                          vlSelfRef.obstacle_tb__DOT__cactus__DOT__CACTUS3
                                                          [
                                                          (0x3fU 
                                                           & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                              - (IData)(0x2fU)))]
                                                           : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d74c0ea__3)))))));
    vlSelfRef.obstacle_tb__DOT__bird__DOT___04_ = vlSelfRef.obstacle_tb__DOT__bird__DOT____Vxrand_h8d92f7e9__0;
    obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit = 0U;
    if ((1U & (IData)(obstacle_tb__DOT__bird__DOT____Vcellinp___56___S))) {
        vlSelfRef.obstacle_tb__DOT__bird__DOT___04_ 
            = (0x7ffU & (IData)(((IData)(obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit)
                                  ? vlSelfRef.obstacle_tb__DOT__bird__DOT___56___DOT____Vxrand_h7cf26fe2__0
                                  : 0x2a450495112ULL)));
        obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit = 1U;
    }
    if ((2U & (IData)(obstacle_tb__DOT__bird__DOT____Vcellinp___56___S))) {
        vlSelfRef.obstacle_tb__DOT__bird__DOT___04_ 
            = (0x7ffU & (IData)(((IData)(obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit)
                                  ? vlSelfRef.obstacle_tb__DOT__bird__DOT___56___DOT____Vxrand_h7cf26fe2__0
                                  : 0x548a092aULL)));
        obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit = 1U;
    }
    if ((4U & (IData)(obstacle_tb__DOT__bird__DOT____Vcellinp___56___S))) {
        vlSelfRef.obstacle_tb__DOT__bird__DOT___04_ 
            = (0x7ffU & (IData)(((IData)(obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit)
                                  ? vlSelfRef.obstacle_tb__DOT__bird__DOT___56___DOT____Vxrand_h7cf26fe2__0
                                  : 0xa9141ULL)));
        obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit = 1U;
    }
    if ((8U & (IData)(obstacle_tb__DOT__bird__DOT____Vcellinp___56___S))) {
        vlSelfRef.obstacle_tb__DOT__bird__DOT___04_ 
            = (0x7ffU & (IData)(((IData)(obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit)
                                  ? vlSelfRef.obstacle_tb__DOT__bird__DOT___56___DOT____Vxrand_h7cf26fe2__0
                                  : 0x152ULL)));
        obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit = 1U;
    }
    obstacle_tb__DOT__bird__DOT____Vcellinp___53___B 
        = ((2U & (((0x14U >= (0x1fU & ((IData)(0x14U) 
                                       - ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellout___67___Y) 
                                          >> 1U))))
                    ? (((0x11U >= (0x1fU & ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT___31_) 
                                            >> 1U)))
                         ? vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN
                        [(0x1fU & ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT___31_) 
                                   >> 1U))] : vlSelfRef.obstacle_tb__DOT__bird__DOT____Vxrand_h85eb8189__0) 
                       >> (0x1fU & ((IData)(0x14U) 
                                    - ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellout___67___Y) 
                                       >> 1U)))) : (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT___64___DOT____Vxrand_h8d96407a__0)) 
                  << 1U)) | (1U & ((0x14U >= (0x1fU 
                                              & ((IData)(0x14U) 
                                                 - 
                                                 ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellout___67___Y) 
                                                  >> 1U))))
                                    ? (((0x11U >= (0x1fU 
                                                   & ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT___31_) 
                                                      >> 1U)))
                                         ? vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP
                                        [(0x1fU & ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT___31_) 
                                                   >> 1U))]
                                         : vlSelfRef.obstacle_tb__DOT__bird__DOT____Vxrand_h85eb8189__1) 
                                       >> (0x1fU & 
                                           ((IData)(0x14U) 
                                            - ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellout___67___Y) 
                                               >> 1U))))
                                    : (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT___65___DOT____Vxrand_h8d96407a__0))));
    vlSelfRef.obstacle_tb__DOT__cactus__DOT___00_ = vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d74c0ea__4;
    obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit = 0U;
    if ((1U & (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___48___S))) {
        vlSelfRef.obstacle_tb__DOT__cactus__DOT___00_ 
            = (0x7fffU & (IData)(((IData)(obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit)
                                   ? vlSelfRef.obstacle_tb__DOT__cactus__DOT___48___DOT____Vxrand_hf9212c73__0
                                   : vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___48___B)));
        obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit = 1U;
    }
    if ((2U & (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___48___S))) {
        vlSelfRef.obstacle_tb__DOT__cactus__DOT___00_ 
            = (0x7fffU & (IData)((0xfffffffffffffffULL 
                                  & ((IData)(obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit)
                                      ? vlSelfRef.obstacle_tb__DOT__cactus__DOT___48___DOT____Vxrand_hf9212c73__0
                                      : VL_SHIFTR_QQI(60,60,32, vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___48___B, 0xfU)))));
        obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit = 1U;
    }
    if ((4U & (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___48___S))) {
        vlSelfRef.obstacle_tb__DOT__cactus__DOT___00_ 
            = (0x7fffU & (IData)((0xfffffffffffffffULL 
                                  & ((IData)(obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit)
                                      ? vlSelfRef.obstacle_tb__DOT__cactus__DOT___48___DOT____Vxrand_hf9212c73__0
                                      : VL_SHIFTR_QQI(60,60,32, vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___48___B, 0x1eU)))));
        obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit = 1U;
    }
    if ((8U & (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___48___S))) {
        vlSelfRef.obstacle_tb__DOT__cactus__DOT___00_ 
            = (0x7fffU & (IData)((0xfffffffffffffffULL 
                                  & ((IData)(obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit)
                                      ? vlSelfRef.obstacle_tb__DOT__cactus__DOT___48___DOT____Vxrand_hf9212c73__0
                                      : VL_SHIFTR_QQI(60,60,32, vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___48___B, 0x2dU)))));
        obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit = 1U;
    }
    vlSelfRef.obstacle_tb__DOT__bird__DOT___02_ = vlSelfRef.obstacle_tb__DOT__bird__DOT____Vxrand_h8d96407a__0;
    obstacle_tb__DOT__bird__DOT___53___DOT__found_active_sel_bit = 0U;
    if ((1U & (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellinp___53___S))) {
        vlSelfRef.obstacle_tb__DOT__bird__DOT___02_ 
            = (1U & ((IData)(obstacle_tb__DOT__bird__DOT___53___DOT__found_active_sel_bit)
                      ? vlSelfRef.obstacle_tb__DOT__bird__DOT___53___DOT____Vxrand_h8d944da6__0
                      : (IData)(obstacle_tb__DOT__bird__DOT____Vcellinp___53___B)));
        obstacle_tb__DOT__bird__DOT___53___DOT__found_active_sel_bit = 1U;
    }
    if ((2U & (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellinp___53___S))) {
        vlSelfRef.obstacle_tb__DOT__bird__DOT___02_ 
            = (1U & ((IData)(obstacle_tb__DOT__bird__DOT___53___DOT__found_active_sel_bit)
                      ? vlSelfRef.obstacle_tb__DOT__bird__DOT___53___DOT____Vxrand_h8d944da6__0
                      : VL_SHIFTR_III(32,32,32, (IData)(obstacle_tb__DOT__bird__DOT____Vcellinp___53___B), 1U)));
        obstacle_tb__DOT__bird__DOT___53___DOT__found_active_sel_bit = 1U;
    }
}

VL_INLINE_OPT void Vobstacle_tb___024root___act_comb__TOP__0(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___act_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x80000000U & (((IData)(0xeU) - (0x3fU 
                                                   & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                                      - (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)))) 
                                 << 0x19U)) | ((0x40000000U 
                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                   >> 1U)) 
                                               | ((0x20000000U 
                                                   & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                      >> 2U)) 
                                                  | ((0x10000000U 
                                                      & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                         >> 3U)) 
                                                     | ((0x8000000U 
                                                         & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                            >> 4U)) 
                                                        | ((0x4000000U 
                                                            & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                               >> 5U)) 
                                                           | ((0x2000000U 
                                                               & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                  >> 6U)) 
                                                              | ((0x1000000U 
                                                                  & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                     >> 7U)) 
                                                                 | ((0x800000U 
                                                                     & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                        >> 8U)) 
                                                                    | ((0x400000U 
                                                                        & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                           >> 9U)) 
                                                                       | ((0x200000U 
                                                                           & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                              >> 0xaU)) 
                                                                          | ((0x100000U 
                                                                              & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0xbU)) 
                                                                             | ((0x80000U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0xdU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x10U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x11U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x12U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x13U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x14U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x15U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x16U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x17U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x18U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x19U)) 
                                                                                | (0x3fU 
                                                                                & ((IData)(0xeU) 
                                                                                - 
                                                                                ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                                                                - (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q))))))))))))))))))))))))))))));
    vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ = __Vtemp_1;
    vlSelfRef.obstacle_tb__DOT__cactus__DOT___28_ = 
        (1U & ((0xeU >= (0xfU & vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_))
                ? (((((IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q) 
                      & (((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                          >= (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)) 
                         & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                            < (0xfffU & ((IData)(0xfU) 
                                         + (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)))))) 
                     & ((0x16fU <= (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i)) 
                        & (0x190U > (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i))))
                     ? (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT___00_)
                     : 0U) >> (0xfU & vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_))
                : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT___60___DOT____Vxrand_h8d96407a__0)));
}

void Vobstacle_tb___024root___nba_sequent__TOP__0(Vobstacle_tb___024root* vlSelf);
void Vobstacle_tb___024root___nba_sequent__TOP__1(Vobstacle_tb___024root* vlSelf);
void Vobstacle_tb___024root___nba_sequent__TOP__2(Vobstacle_tb___024root* vlSelf);
void Vobstacle_tb___024root___nba_comb__TOP__0(Vobstacle_tb___024root* vlSelf);
void Vobstacle_tb___024root___nba_comb__TOP__1(Vobstacle_tb___024root* vlSelf);
void Vobstacle_tb___024root___nba_comb__TOP__2(Vobstacle_tb___024root* vlSelf);
void Vobstacle_tb___024root___nba_comb__TOP__3(Vobstacle_tb___024root* vlSelf);

void Vobstacle_tb___024root___eval_nba(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vobstacle_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vobstacle_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vobstacle_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x14ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vobstacle_tb___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x13ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vobstacle_tb___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x12ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vobstacle_tb___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x13ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vobstacle_tb___024root___nba_comb__TOP__3(vlSelf);
    }
}

VL_INLINE_OPT void Vobstacle_tb___024root___nba_sequent__TOP__0(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ obstacle_tb__DOT__bird__DOT____Vcellinp___56___S;
    obstacle_tb__DOT__bird__DOT____Vcellinp___56___S = 0;
    CData/*0:0*/ obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit;
    obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit = 0;
    // Body
    obstacle_tb__DOT__bird__DOT____Vcellinp___56___S 
        = ((8U & ((~ (IData)((0U != (3U & (IData)(vlSelfRef.obstacle_tb__DOT__rand_i))))) 
                  << 3U)) | (((1U == (3U & (IData)(vlSelfRef.obstacle_tb__DOT__rand_i))) 
                              << 2U) | (((2U == (3U 
                                                 & (IData)(vlSelfRef.obstacle_tb__DOT__rand_i))) 
                                         << 1U) | (3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelfRef.obstacle_tb__DOT__rand_i))))));
    vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___48___B 
        = (((QData)((IData)(((0x20U >= (0x3fU & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                 - (IData)(0x2fU))))
                              ? vlSelfRef.obstacle_tb__DOT__cactus__DOT__CACTUS0
                             [(0x3fU & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                        - (IData)(0x2fU)))]
                              : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d74c0ea__0)))) 
            << 0x2dU) | (((QData)((IData)(((0x20U >= 
                                            (0x3fU 
                                             & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                - (IData)(0x2fU))))
                                            ? vlSelfRef.obstacle_tb__DOT__cactus__DOT__CACTUS1
                                           [(0x3fU 
                                             & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                - (IData)(0x2fU)))]
                                            : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d74c0ea__1)))) 
                          << 0x1eU) | (QData)((IData)(
                                                      ((((0x20U 
                                                          >= 
                                                          (0x3fU 
                                                           & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                              - (IData)(0x2fU))))
                                                          ? 
                                                         vlSelfRef.obstacle_tb__DOT__cactus__DOT__CACTUS2
                                                         [
                                                         (0x3fU 
                                                          & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                             - (IData)(0x2fU)))]
                                                          : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d74c0ea__2)) 
                                                        << 0xfU) 
                                                       | ((0x20U 
                                                           >= 
                                                           (0x3fU 
                                                            & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                               - (IData)(0x2fU))))
                                                           ? 
                                                          vlSelfRef.obstacle_tb__DOT__cactus__DOT__CACTUS3
                                                          [
                                                          (0x3fU 
                                                           & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                              - (IData)(0x2fU)))]
                                                           : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d74c0ea__3)))))));
    vlSelfRef.obstacle_tb__DOT__bird__DOT___04_ = vlSelfRef.obstacle_tb__DOT__bird__DOT____Vxrand_h8d92f7e9__0;
    obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit = 0U;
    if ((1U & (IData)(obstacle_tb__DOT__bird__DOT____Vcellinp___56___S))) {
        vlSelfRef.obstacle_tb__DOT__bird__DOT___04_ 
            = (0x7ffU & (IData)(((IData)(obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit)
                                  ? vlSelfRef.obstacle_tb__DOT__bird__DOT___56___DOT____Vxrand_h7cf26fe2__0
                                  : 0x2a450495112ULL)));
        obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit = 1U;
    }
    if ((2U & (IData)(obstacle_tb__DOT__bird__DOT____Vcellinp___56___S))) {
        vlSelfRef.obstacle_tb__DOT__bird__DOT___04_ 
            = (0x7ffU & (IData)(((IData)(obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit)
                                  ? vlSelfRef.obstacle_tb__DOT__bird__DOT___56___DOT____Vxrand_h7cf26fe2__0
                                  : 0x548a092aULL)));
        obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit = 1U;
    }
    if ((4U & (IData)(obstacle_tb__DOT__bird__DOT____Vcellinp___56___S))) {
        vlSelfRef.obstacle_tb__DOT__bird__DOT___04_ 
            = (0x7ffU & (IData)(((IData)(obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit)
                                  ? vlSelfRef.obstacle_tb__DOT__bird__DOT___56___DOT____Vxrand_h7cf26fe2__0
                                  : 0xa9141ULL)));
        obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit = 1U;
    }
    if ((8U & (IData)(obstacle_tb__DOT__bird__DOT____Vcellinp___56___S))) {
        vlSelfRef.obstacle_tb__DOT__bird__DOT___04_ 
            = (0x7ffU & (IData)(((IData)(obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit)
                                  ? vlSelfRef.obstacle_tb__DOT__bird__DOT___56___DOT____Vxrand_h7cf26fe2__0
                                  : 0x152ULL)));
        obstacle_tb__DOT__bird__DOT___56___DOT__found_active_sel_bit = 1U;
    }
}

VL_INLINE_OPT void Vobstacle_tb___024root___nba_sequent__TOP__1(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.obstacle_tb__DOT__cactus__DOT___32___DOT__pos_arst) {
        vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_flap_up_q = 0U;
        vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q = 0U;
        vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_flap_counter_q = 0U;
        vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q = 0x7d6U;
    } else {
        if (((IData)(vlSelfRef.obstacle_tb__DOT__next_frame_i) 
             & (7U == (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_flap_counter_q)))) {
            vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_flap_up_q 
                = vlSelfRef.obstacle_tb__DOT__bird__DOT___17_;
        }
        if (((IData)(vlSelfRef.obstacle_tb__DOT__spawn_i) 
             & (VL_GTES_III(11, 0x7d6U, (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q)) 
                & (IData)(vlSelfRef.obstacle_tb__DOT__next_frame_i)))) {
            vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q 
                = vlSelfRef.obstacle_tb__DOT__bird__DOT___04_;
        }
        if (vlSelfRef.obstacle_tb__DOT__next_frame_i) {
            vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_flap_counter_q 
                = vlSelfRef.obstacle_tb__DOT__bird__DOT___00_;
        }
        if ((3U == (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellinp___42___A))) {
            vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q 
                = vlSelfRef.obstacle_tb__DOT__bird__DOT___01_;
        }
    }
    vlSelfRef.obstacle_tb__DOT__bird__DOT___17_ = (1U 
                                                   & (~ (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_flap_up_q)));
    vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellinp___53___S 
        = ((2U & ((~ (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_flap_up_q)) 
                  << 1U)) | (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_flap_up_q));
    vlSelfRef.obstacle_tb__DOT__bird__DOT___00_ = (
                                                   (7U 
                                                    == (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_flap_counter_q))
                                                    ? 0U
                                                    : 
                                                   (0xffU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_flap_counter_q))));
}

VL_INLINE_OPT void Vobstacle_tb___024root___nba_sequent__TOP__2(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.obstacle_tb__DOT__cactus__DOT___32___DOT__pos_arst) {
        vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_image_q = 0U;
        vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q = 0x280U;
        vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q = 0U;
    } else {
        if (((~ (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q)) 
             & ((IData)(vlSelfRef.obstacle_tb__DOT__spawn_i) 
                & (IData)(vlSelfRef.obstacle_tb__DOT__next_frame_i)))) {
            vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_image_q 
                = (3U & (IData)(vlSelfRef.obstacle_tb__DOT__rand_i));
        }
        if ((7U == (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___38___A))) {
            vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q 
                = ((IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q)
                    ? (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT___26_)
                    : ((IData)(vlSelfRef.obstacle_tb__DOT__spawn_i)
                        ? 0x280U : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d92f7e9__0)));
        }
        if (vlSelfRef.obstacle_tb__DOT__next_frame_i) {
            vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q 
                = vlSelfRef.obstacle_tb__DOT__cactus__DOT___24_;
        }
    }
    vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___48___S 
        = ((8U & ((~ (IData)((0U != (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_image_q)))) 
                  << 3U)) | (((1U == (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_image_q)) 
                              << 2U) | (((2U == (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_image_q)) 
                                         << 1U) | (3U 
                                                   == (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_image_q)))));
    vlSelfRef.obstacle_tb__DOT__cactus__DOT___07_ = 
        ((0xfffff800U & vlSelfRef.obstacle_tb__DOT__cactus__DOT___07_) 
         | (0x7ffU & ((IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q) 
                      - (IData)(8U))));
    vlSelfRef.obstacle_tb__DOT__cactus__DOT___26_ = 
        (0x7ffU & ((8U >= (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q))
                    ? (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d92f7e9__1)
                    : vlSelfRef.obstacle_tb__DOT__cactus__DOT___07_));
}

VL_INLINE_OPT void Vobstacle_tb___024root___nba_comb__TOP__0(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ obstacle_tb__DOT__bird__DOT____Vcellinp___53___B;
    obstacle_tb__DOT__bird__DOT____Vcellinp___53___B = 0;
    CData/*0:0*/ obstacle_tb__DOT__bird__DOT___53___DOT__found_active_sel_bit;
    obstacle_tb__DOT__bird__DOT___53___DOT__found_active_sel_bit = 0;
    // Body
    vlSelfRef.obstacle_tb__DOT__bird__DOT___31_ = (0x3fU 
                                                   & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                      - (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q)));
    vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellinp___42___A 
        = (((IData)(vlSelfRef.obstacle_tb__DOT__next_frame_i) 
            << 1U) | (2U != ((VL_GTES_III(11, 0x7d6U, (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q)) 
                              << 1U) | (IData)(vlSelfRef.obstacle_tb__DOT__spawn_i))));
    vlSelfRef.obstacle_tb__DOT__bird__DOT___01_ = (0x7ffU 
                                                   & (VL_GTES_III(11, 0x7d6U, (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q))
                                                       ? 
                                                      ((IData)(vlSelfRef.obstacle_tb__DOT__spawn_i)
                                                        ? 0x280U
                                                        : (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT____Vxrand_h8d92f7e9__1))
                                                       : 
                                                      ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q) 
                                                       - (IData)(8U))));
    vlSelfRef.obstacle_tb__DOT__bird__DOT__pixel_in_range 
        = ((((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
             >= (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q)) 
            & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
               < (0xfffU & ((IData)(0x2aU) + (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q))))) 
           & (((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
               >= (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q)) 
              & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                 < (0xfffU & ((IData)(0x24U) + (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q))))));
    vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellout___67___Y 
        = (0x7ffU & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                     - (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q)));
    obstacle_tb__DOT__bird__DOT____Vcellinp___53___B 
        = ((2U & (((0x14U >= (0x1fU & ((IData)(0x14U) 
                                       - ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellout___67___Y) 
                                          >> 1U))))
                    ? (((0x11U >= (0x1fU & ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT___31_) 
                                            >> 1U)))
                         ? vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN
                        [(0x1fU & ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT___31_) 
                                   >> 1U))] : vlSelfRef.obstacle_tb__DOT__bird__DOT____Vxrand_h85eb8189__0) 
                       >> (0x1fU & ((IData)(0x14U) 
                                    - ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellout___67___Y) 
                                       >> 1U)))) : (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT___64___DOT____Vxrand_h8d96407a__0)) 
                  << 1U)) | (1U & ((0x14U >= (0x1fU 
                                              & ((IData)(0x14U) 
                                                 - 
                                                 ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellout___67___Y) 
                                                  >> 1U))))
                                    ? (((0x11U >= (0x1fU 
                                                   & ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT___31_) 
                                                      >> 1U)))
                                         ? vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP
                                        [(0x1fU & ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT___31_) 
                                                   >> 1U))]
                                         : vlSelfRef.obstacle_tb__DOT__bird__DOT____Vxrand_h85eb8189__1) 
                                       >> (0x1fU & 
                                           ((IData)(0x14U) 
                                            - ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellout___67___Y) 
                                               >> 1U))))
                                    : (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT___65___DOT____Vxrand_h8d96407a__0))));
    vlSelfRef.obstacle_tb__DOT__bird__DOT___02_ = vlSelfRef.obstacle_tb__DOT__bird__DOT____Vxrand_h8d96407a__0;
    obstacle_tb__DOT__bird__DOT___53___DOT__found_active_sel_bit = 0U;
    if ((1U & (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellinp___53___S))) {
        vlSelfRef.obstacle_tb__DOT__bird__DOT___02_ 
            = (1U & ((IData)(obstacle_tb__DOT__bird__DOT___53___DOT__found_active_sel_bit)
                      ? vlSelfRef.obstacle_tb__DOT__bird__DOT___53___DOT____Vxrand_h8d944da6__0
                      : (IData)(obstacle_tb__DOT__bird__DOT____Vcellinp___53___B)));
        obstacle_tb__DOT__bird__DOT___53___DOT__found_active_sel_bit = 1U;
    }
    if ((2U & (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellinp___53___S))) {
        vlSelfRef.obstacle_tb__DOT__bird__DOT___02_ 
            = (1U & ((IData)(obstacle_tb__DOT__bird__DOT___53___DOT__found_active_sel_bit)
                      ? vlSelfRef.obstacle_tb__DOT__bird__DOT___53___DOT____Vxrand_h8d944da6__0
                      : VL_SHIFTR_III(32,32,32, (IData)(obstacle_tb__DOT__bird__DOT____Vcellinp___53___B), 1U)));
        obstacle_tb__DOT__bird__DOT___53___DOT__found_active_sel_bit = 1U;
    }
}

VL_INLINE_OPT void Vobstacle_tb___024root___nba_comb__TOP__1(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___nba_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = ((0x80000000U & (((IData)(0xeU) - (0x3fU 
                                                   & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                                      - (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)))) 
                                 << 0x19U)) | ((0x40000000U 
                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                   >> 1U)) 
                                               | ((0x20000000U 
                                                   & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                      >> 2U)) 
                                                  | ((0x10000000U 
                                                      & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                         >> 3U)) 
                                                     | ((0x8000000U 
                                                         & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                            >> 4U)) 
                                                        | ((0x4000000U 
                                                            & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                               >> 5U)) 
                                                           | ((0x2000000U 
                                                               & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                  >> 6U)) 
                                                              | ((0x1000000U 
                                                                  & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                     >> 7U)) 
                                                                 | ((0x800000U 
                                                                     & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                        >> 8U)) 
                                                                    | ((0x400000U 
                                                                        & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                           >> 9U)) 
                                                                       | ((0x200000U 
                                                                           & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                              >> 0xaU)) 
                                                                          | ((0x100000U 
                                                                              & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0xbU)) 
                                                                             | ((0x80000U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0xdU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x10U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x11U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x12U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x13U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x14U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x15U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x16U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x17U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x18U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ 
                                                                                >> 0x19U)) 
                                                                                | (0x3fU 
                                                                                & ((IData)(0xeU) 
                                                                                - 
                                                                                ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                                                                - (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q))))))))))))))))))))))))))))));
    vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_ = __Vtemp_1;
}

VL_INLINE_OPT void Vobstacle_tb___024root___nba_comb__TOP__2(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___nba_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit;
    obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit = 0;
    // Body
    vlSelfRef.obstacle_tb__DOT__cactus__DOT___00_ = vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d74c0ea__4;
    obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit = 0U;
    if ((1U & (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___48___S))) {
        vlSelfRef.obstacle_tb__DOT__cactus__DOT___00_ 
            = (0x7fffU & (IData)(((IData)(obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit)
                                   ? vlSelfRef.obstacle_tb__DOT__cactus__DOT___48___DOT____Vxrand_hf9212c73__0
                                   : vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___48___B)));
        obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit = 1U;
    }
    if ((2U & (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___48___S))) {
        vlSelfRef.obstacle_tb__DOT__cactus__DOT___00_ 
            = (0x7fffU & (IData)((0xfffffffffffffffULL 
                                  & ((IData)(obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit)
                                      ? vlSelfRef.obstacle_tb__DOT__cactus__DOT___48___DOT____Vxrand_hf9212c73__0
                                      : VL_SHIFTR_QQI(60,60,32, vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___48___B, 0xfU)))));
        obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit = 1U;
    }
    if ((4U & (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___48___S))) {
        vlSelfRef.obstacle_tb__DOT__cactus__DOT___00_ 
            = (0x7fffU & (IData)((0xfffffffffffffffULL 
                                  & ((IData)(obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit)
                                      ? vlSelfRef.obstacle_tb__DOT__cactus__DOT___48___DOT____Vxrand_hf9212c73__0
                                      : VL_SHIFTR_QQI(60,60,32, vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___48___B, 0x1eU)))));
        obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit = 1U;
    }
    if ((8U & (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___48___S))) {
        vlSelfRef.obstacle_tb__DOT__cactus__DOT___00_ 
            = (0x7fffU & (IData)((0xfffffffffffffffULL 
                                  & ((IData)(obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit)
                                      ? vlSelfRef.obstacle_tb__DOT__cactus__DOT___48___DOT____Vxrand_hf9212c73__0
                                      : VL_SHIFTR_QQI(60,60,32, vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___48___B, 0x2dU)))));
        obstacle_tb__DOT__cactus__DOT___48___DOT__found_active_sel_bit = 1U;
    }
    vlSelfRef.obstacle_tb__DOT__cactus__DOT___24_ = 
        ((IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q)
          ? (8U < (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q))
          : (IData)(vlSelfRef.obstacle_tb__DOT__spawn_i));
    vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vcellinp___38___A 
        = (((3U != (((8U >= (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)) 
                     << 1U) | (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q))) 
            << 2U) | ((((IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q) 
                        | (IData)(vlSelfRef.obstacle_tb__DOT__spawn_i)) 
                       << 1U) | (IData)(vlSelfRef.obstacle_tb__DOT__next_frame_i)));
    vlSelfRef.obstacle_tb__DOT__cactus__DOT__pixel_in_range 
        = (((IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q) 
            & (((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                >= (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)) 
               & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                  < (0xfffU & ((IData)(0xfU) + (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)))))) 
           & ((0x16fU <= (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i)) 
              & (0x190U > (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i))));
}

VL_INLINE_OPT void Vobstacle_tb___024root___nba_comb__TOP__3(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___nba_comb__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.obstacle_tb__DOT__cactus__DOT___28_ = 
        (1U & ((0xeU >= (0xfU & vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_))
                ? (((((IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q) 
                      & (((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                          >= (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)) 
                         & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                            < (0xfffU & ((IData)(0xfU) 
                                         + (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)))))) 
                     & ((0x16fU <= (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i)) 
                        & (0x190U > (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i))))
                     ? (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT___00_)
                     : 0U) >> (0xfU & vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_))
                : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT___60___DOT____Vxrand_h8d96407a__0)));
}

void Vobstacle_tb___024root___timing_resume(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_he6fbe2b8__0.resume(
                                                   "@(negedge obstacle_tb.clk_i)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vobstacle_tb___024root___timing_commit(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_he6fbe2b8__0.commit(
                                                   "@(negedge obstacle_tb.clk_i)");
    }
}

void Vobstacle_tb___024root___eval_triggers__act(Vobstacle_tb___024root* vlSelf);

bool Vobstacle_tb___024root___eval_phase__act(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vobstacle_tb___024root___eval_triggers__act(vlSelf);
    Vobstacle_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vobstacle_tb___024root___timing_resume(vlSelf);
        Vobstacle_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vobstacle_tb___024root___eval_phase__nba(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vobstacle_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vobstacle_tb___024root___dump_triggers__nba(Vobstacle_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vobstacle_tb___024root___dump_triggers__act(Vobstacle_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vobstacle_tb___024root___eval(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___eval\n"); );
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
            Vobstacle_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("dv/obstacle_tb.sv", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vobstacle_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("dv/obstacle_tb.sv", 4, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vobstacle_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vobstacle_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vobstacle_tb___024root___eval_debug_assertions(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
