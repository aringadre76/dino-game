// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtitle_tb.h for the primary calling header

#ifndef VERILATED_VTITLE_TB___024ROOT_H_
#define VERILATED_VTITLE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtitle_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtitle_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ title_tb__DOT__clk_i;
    CData/*0:0*/ title_tb__DOT__title__DOT___08_;
    CData/*0:0*/ title_tb__DOT__title__DOT___30___DOT____Vxrand_h8d96407a__0;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__title_tb__DOT__clk_i__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ title_tb__DOT__pixel_x_i;
    SData/*9:0*/ title_tb__DOT__pixel_y_i;
    IData/*31:0*/ title_tb__DOT__title__DOT___15_;
    IData/*31:0*/ title_tb__DOT__title__DOT___16_;
    IData/*31:0*/ title_tb__DOT__title__DOT____Vcellinp___29___A;
    IData/*31:0*/ __Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___15___0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___16___0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___15___1;
    IData/*31:0*/ __Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___16___1;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ title_tb__DOT__title_gif;
    QData/*46:0*/ title_tb__DOT__title__DOT____Vxrand_h7cc986cc__0;
    VlUnpacked<QData/*46:0*/, 7> title_tb__DOT__title__DOT__title_mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd075d385__0;
    VlTriggerVec<3> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtitle_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtitle_tb___024root(Vtitle_tb__Syms* symsp, const char* v__name);
    ~Vtitle_tb___024root();
    VL_UNCOPYABLE(Vtitle_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
