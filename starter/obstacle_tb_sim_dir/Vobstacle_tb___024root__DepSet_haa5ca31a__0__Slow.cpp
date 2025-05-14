// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vobstacle_tb.h for the primary calling header

#include "Vobstacle_tb__pch.h"
#include "Vobstacle_tb__Syms.h"
#include "Vobstacle_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vobstacle_tb___024root___dump_triggers__stl(Vobstacle_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vobstacle_tb___024root___eval_triggers__stl(Vobstacle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, (vlSelfRef.obstacle_tb__DOT__bird__DOT___12_ 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__obstacle_tb__DOT__bird__DOT___12___0));
    vlSelfRef.__Vtrigprevexpr___TOP__obstacle_tb__DOT__bird__DOT___12___0 
        = vlSelfRef.obstacle_tb__DOT__bird__DOT___12_;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VstlDidInit))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vobstacle_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
