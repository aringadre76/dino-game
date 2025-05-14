// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtitle_tb__Syms.h"


VL_ATTR_COLD void Vtitle_tb___024root__trace_init_sub__TOP__dinorun_pkg__0(Vtitle_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtitle_tb___024root__trace_init_sub__TOP__0(Vtitle_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("dinorun_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtitle_tb___024root__trace_init_sub__TOP__dinorun_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("title_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+15,0,"clk_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"pixel_x_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+17,0,"pixel_y_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declQuad(c+18,0,"title_gif",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LONGINT, false,-1, 63,0);
    tracep->pushPrefix("title", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+20,0,"pixel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"pixel_x_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+17,0,"pixel_y_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+21,0,"title_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+22,0,"title_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("title_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+1+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 46,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtitle_tb___024root__trace_init_sub__TOP__dinorun_pkg__0(Vtitle_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root__trace_init_sub__TOP__dinorun_pkg__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+23,0,"ScreenWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+24,0,"ScreenHeight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+25,0,"Ground",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+23,0,"ObstacleInitialX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtitle_tb___024root__trace_init_top(Vtitle_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtitle_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtitle_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtitle_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtitle_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtitle_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtitle_tb___024root__trace_register(Vtitle_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtitle_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtitle_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtitle_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtitle_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtitle_tb___024root__trace_const_0_sub_0(Vtitle_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtitle_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root__trace_const_0\n"); );
    // Init
    Vtitle_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtitle_tb___024root*>(voidSelf);
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtitle_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtitle_tb___024root__trace_const_0_sub_0(Vtitle_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+23,(0x280U),32);
    bufp->fullIData(oldp+24,(0x1e0U),32);
    bufp->fullIData(oldp+25,(0x190U),32);
}

VL_ATTR_COLD void Vtitle_tb___024root__trace_full_0_sub_0(Vtitle_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtitle_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root__trace_full_0\n"); );
    // Init
    Vtitle_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtitle_tb___024root*>(voidSelf);
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtitle_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtitle_tb___024root__trace_full_0_sub_0(Vtitle_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelfRef.title_tb__DOT__title__DOT__title_mem[0]),47);
    bufp->fullQData(oldp+3,(vlSelfRef.title_tb__DOT__title__DOT__title_mem[1]),47);
    bufp->fullQData(oldp+5,(vlSelfRef.title_tb__DOT__title__DOT__title_mem[2]),47);
    bufp->fullQData(oldp+7,(vlSelfRef.title_tb__DOT__title__DOT__title_mem[3]),47);
    bufp->fullQData(oldp+9,(vlSelfRef.title_tb__DOT__title__DOT__title_mem[4]),47);
    bufp->fullQData(oldp+11,(vlSelfRef.title_tb__DOT__title__DOT__title_mem[5]),47);
    bufp->fullQData(oldp+13,(vlSelfRef.title_tb__DOT__title__DOT__title_mem[6]),47);
    bufp->fullBit(oldp+15,(vlSelfRef.title_tb__DOT__clk_i));
    bufp->fullSData(oldp+16,(vlSelfRef.title_tb__DOT__pixel_x_i),10);
    bufp->fullSData(oldp+17,(vlSelfRef.title_tb__DOT__pixel_y_i),10);
    bufp->fullQData(oldp+18,(vlSelfRef.title_tb__DOT__title_gif),64);
    bufp->fullBit(oldp+20,(((((((0x280U > (IData)(vlSelfRef.title_tb__DOT__pixel_x_i)) 
                                & (0x24U <= (IData)(vlSelfRef.title_tb__DOT__pixel_y_i))) 
                               & (0x54U > (IData)(vlSelfRef.title_tb__DOT__pixel_y_i))) 
                              & (0x2fU > (0x3fU & VL_DIV_III(32, 
                                                             (0xffffU 
                                                              & ((IData)(0x2fU) 
                                                                 * (IData)(vlSelfRef.title_tb__DOT__pixel_x_i))), (IData)(0x280U))))) 
                             & (7U > (7U & VL_DIV_III(32, 
                                                      ((IData)(7U) 
                                                       * vlSelfRef.title_tb__DOT__title__DOT____Vcellinp___29___A), (IData)(0x30U))))) 
                            & ((0x2eU >= (0x3fU & vlSelfRef.title_tb__DOT__title__DOT___16_))
                                ? (IData)((((6U >= 
                                             (7U & 
                                              VL_DIV_III(32, 
                                                         ((IData)(7U) 
                                                          * vlSelfRef.title_tb__DOT__title__DOT____Vcellinp___29___A), (IData)(0x30U))))
                                             ? vlSelfRef.title_tb__DOT__title__DOT__title_mem
                                            [(7U & 
                                              VL_DIV_III(32, 
                                                         ((IData)(7U) 
                                                          * vlSelfRef.title_tb__DOT__title__DOT____Vcellinp___29___A), (IData)(0x30U)))]
                                             : vlSelfRef.title_tb__DOT__title__DOT____Vxrand_h7cc986cc__0) 
                                           >> (0x3fU 
                                               & vlSelfRef.title_tb__DOT__title__DOT___16_)))
                                : (IData)(vlSelfRef.title_tb__DOT__title__DOT___30___DOT____Vxrand_h8d96407a__0)))));
    bufp->fullCData(oldp+21,((0x3fU & VL_DIV_III(32, 
                                                 (0xffffU 
                                                  & ((IData)(0x2fU) 
                                                     * (IData)(vlSelfRef.title_tb__DOT__pixel_x_i))), (IData)(0x280U)))),6);
    bufp->fullCData(oldp+22,((7U & VL_DIV_III(32, ((IData)(7U) 
                                                   * vlSelfRef.title_tb__DOT__title__DOT____Vcellinp___29___A), (IData)(0x30U)))),3);
}
