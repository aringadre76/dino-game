// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtitle_tb.h for the primary calling header

#include "Vtitle_tb__pch.h"
#include "Vtitle_tb__Syms.h"
#include "Vtitle_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtitle_tb___024root___dump_triggers__stl(Vtitle_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtitle_tb___024root___eval_triggers__stl(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___15___0));
    vlSelfRef.__VstlTriggered.set(2U, (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___16___0));
    vlSelfRef.__Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___15___0 
        = vlSelfRef.title_tb__DOT__title__DOT___15_;
    vlSelfRef.__Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___16___0 
        = vlSelfRef.title_tb__DOT__title__DOT___16_;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VstlDidInit))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
        vlSelfRef.__VstlTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtitle_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
