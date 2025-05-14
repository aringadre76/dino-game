// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtitle_tb__Syms.h"


void Vtitle_tb___024root__trace_chg_0_sub_0(Vtitle_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtitle_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root__trace_chg_0\n"); );
    // Init
    Vtitle_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtitle_tb___024root*>(voidSelf);
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtitle_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtitle_tb___024root__trace_chg_0_sub_0(Vtitle_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+0,(vlSelfRef.title_tb__DOT__title__DOT__title_mem[0]),47);
        bufp->chgQData(oldp+2,(vlSelfRef.title_tb__DOT__title__DOT__title_mem[1]),47);
        bufp->chgQData(oldp+4,(vlSelfRef.title_tb__DOT__title__DOT__title_mem[2]),47);
        bufp->chgQData(oldp+6,(vlSelfRef.title_tb__DOT__title__DOT__title_mem[3]),47);
        bufp->chgQData(oldp+8,(vlSelfRef.title_tb__DOT__title__DOT__title_mem[4]),47);
        bufp->chgQData(oldp+10,(vlSelfRef.title_tb__DOT__title__DOT__title_mem[5]),47);
        bufp->chgQData(oldp+12,(vlSelfRef.title_tb__DOT__title__DOT__title_mem[6]),47);
    }
    bufp->chgBit(oldp+14,(vlSelfRef.title_tb__DOT__clk_i));
    bufp->chgSData(oldp+15,(vlSelfRef.title_tb__DOT__pixel_x_i),10);
    bufp->chgSData(oldp+16,(vlSelfRef.title_tb__DOT__pixel_y_i),10);
    bufp->chgQData(oldp+17,(vlSelfRef.title_tb__DOT__title_gif),64);
    bufp->chgBit(oldp+19,(((((((0x280U > (IData)(vlSelfRef.title_tb__DOT__pixel_x_i)) 
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
                               ? (IData)((((6U >= (7U 
                                                   & VL_DIV_III(32, 
                                                                ((IData)(7U) 
                                                                 * vlSelfRef.title_tb__DOT__title__DOT____Vcellinp___29___A), (IData)(0x30U))))
                                            ? vlSelfRef.title_tb__DOT__title__DOT__title_mem
                                           [(7U & VL_DIV_III(32, 
                                                             ((IData)(7U) 
                                                              * vlSelfRef.title_tb__DOT__title__DOT____Vcellinp___29___A), (IData)(0x30U)))]
                                            : vlSelfRef.title_tb__DOT__title__DOT____Vxrand_h7cc986cc__0) 
                                          >> (0x3fU 
                                              & vlSelfRef.title_tb__DOT__title__DOT___16_)))
                               : (IData)(vlSelfRef.title_tb__DOT__title__DOT___30___DOT____Vxrand_h8d96407a__0)))));
    bufp->chgCData(oldp+20,((0x3fU & VL_DIV_III(32, 
                                                (0xffffU 
                                                 & ((IData)(0x2fU) 
                                                    * (IData)(vlSelfRef.title_tb__DOT__pixel_x_i))), (IData)(0x280U)))),6);
    bufp->chgCData(oldp+21,((7U & VL_DIV_III(32, ((IData)(7U) 
                                                  * vlSelfRef.title_tb__DOT__title__DOT____Vcellinp___29___A), (IData)(0x30U)))),3);
}

void Vtitle_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root__trace_cleanup\n"); );
    // Init
    Vtitle_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtitle_tb___024root*>(voidSelf);
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
