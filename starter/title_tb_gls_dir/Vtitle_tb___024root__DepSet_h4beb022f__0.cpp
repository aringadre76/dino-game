// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtitle_tb.h for the primary calling header

#include "Vtitle_tb__pch.h"
#include "Vtitle_tb__Syms.h"
#include "Vtitle_tb___024root.h"

extern "C" void* gif_open(const char* filename, int width, int height);

VL_INLINE_OPT void Vtitle_tb___024root____Vdpiimwrap_title_tb__DOT__gif_open_TOP(std::string filename, IData/*31:0*/ width, IData/*31:0*/ height, QData/*63:0*/ &gif_open__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root____Vdpiimwrap_title_tb__DOT__gif_open_TOP\n"); );
    // Body
    const char* filename__Vcvt;
    for (size_t filename__Vidx = 0; filename__Vidx < 1; ++filename__Vidx) filename__Vcvt = filename.c_str();
    int width__Vcvt;
    for (size_t width__Vidx = 0; width__Vidx < 1; ++width__Vidx) width__Vcvt = width;
    int height__Vcvt;
    for (size_t height__Vidx = 0; height__Vidx < 1; ++height__Vidx) height__Vcvt = height;
    void* gif_open__Vfuncrtn__Vcvt;
    gif_open__Vfuncrtn__Vcvt = gif_open(filename__Vcvt, width__Vcvt, height__Vcvt);
    gif_open__Vfuncrtn = VL_CVT_VP_Q(gif_open__Vfuncrtn__Vcvt);
}

extern "C" void gif_write_pixel(void* writer, int x, int y, int r, int g, int b);

VL_INLINE_OPT void Vtitle_tb___024root____Vdpiimwrap_title_tb__DOT__gif_write_pixel_TOP(QData/*63:0*/ writer, IData/*31:0*/ x, IData/*31:0*/ y, IData/*31:0*/ r, IData/*31:0*/ g, IData/*31:0*/ b) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root____Vdpiimwrap_title_tb__DOT__gif_write_pixel_TOP\n"); );
    // Body
    void* writer__Vcvt;
    for (size_t writer__Vidx = 0; writer__Vidx < 1; ++writer__Vidx) writer__Vcvt = VL_CVT_Q_VP(writer);
    int x__Vcvt;
    for (size_t x__Vidx = 0; x__Vidx < 1; ++x__Vidx) x__Vcvt = x;
    int y__Vcvt;
    for (size_t y__Vidx = 0; y__Vidx < 1; ++y__Vidx) y__Vcvt = y;
    int r__Vcvt;
    for (size_t r__Vidx = 0; r__Vidx < 1; ++r__Vidx) r__Vcvt = r;
    int g__Vcvt;
    for (size_t g__Vidx = 0; g__Vidx < 1; ++g__Vidx) g__Vcvt = g;
    int b__Vcvt;
    for (size_t b__Vidx = 0; b__Vidx < 1; ++b__Vidx) b__Vcvt = b;
    gif_write_pixel(writer__Vcvt, x__Vcvt, y__Vcvt, r__Vcvt, g__Vcvt, b__Vcvt);
}

extern "C" void gif_next_frame(void* writer);

VL_INLINE_OPT void Vtitle_tb___024root____Vdpiimwrap_title_tb__DOT__gif_next_frame_TOP(QData/*63:0*/ writer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root____Vdpiimwrap_title_tb__DOT__gif_next_frame_TOP\n"); );
    // Body
    void* writer__Vcvt;
    for (size_t writer__Vidx = 0; writer__Vidx < 1; ++writer__Vidx) writer__Vcvt = VL_CVT_Q_VP(writer);
    gif_next_frame(writer__Vcvt);
}

extern "C" int gif_close(void* writer);

VL_INLINE_OPT void Vtitle_tb___024root____Vdpiimwrap_title_tb__DOT__gif_close_TOP(QData/*63:0*/ writer, IData/*31:0*/ &gif_close__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root____Vdpiimwrap_title_tb__DOT__gif_close_TOP\n"); );
    // Body
    void* writer__Vcvt;
    for (size_t writer__Vidx = 0; writer__Vidx < 1; ++writer__Vidx) writer__Vcvt = VL_CVT_Q_VP(writer);
    int gif_close__Vfuncrtn__Vcvt;
    gif_close__Vfuncrtn__Vcvt = gif_close(writer__Vcvt);
    gif_close__Vfuncrtn = gif_close__Vfuncrtn__Vcvt;
}

VL_INLINE_OPT VlCoroutine Vtitle_tb___024root___eval_initial__TOP__Vtiming__1(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vfunc_title_tb__DOT__gif_open__0__Vfuncout;
    __Vfunc_title_tb__DOT__gif_open__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_title_tb__DOT__gif_close__3__Vfuncout;
    __Vfunc_title_tb__DOT__gif_close__3__Vfuncout = 0;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.fst"});
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("Begin simulation.\n",0);
    (void)VL_URANDOM_SEEDED_II(0x64U);
    Vtitle_tb___024root____Vdpiimwrap_title_tb__DOT__gif_open_TOP(
                                                                  std::string{"title.gif"}, 0x280U, 0x1e0U, __Vfunc_title_tb__DOT__gif_open__0__Vfuncout);
    vlSelfRef.title_tb__DOT__title_gif = __Vfunc_title_tb__DOT__gif_open__0__Vfuncout;
    Vtitle_tb___024root____Vdpiimwrap_title_tb__DOT__gif_next_frame_TOP(vlSelfRef.title_tb__DOT__title_gif);
    vlSelfRef.title_tb__DOT__pixel_x_i = 0U;
    while ((0x280U > (IData)(vlSelfRef.title_tb__DOT__pixel_x_i))) {
        vlSelfRef.title_tb__DOT__pixel_y_i = 0U;
        while ((0x1e0U > (IData)(vlSelfRef.title_tb__DOT__pixel_y_i))) {
            co_await vlSelfRef.__VtrigSched_hd075d385__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge title_tb.clk_i)", 
                                                                 "dv/title_tb.sv", 
                                                                 43);
            if (((IData)(vlSelfRef.title_tb__DOT__title__DOT___08_) 
                 & ((0x2eU >= (0x3fU & vlSelfRef.title_tb__DOT__title__DOT___16_))
                     ? (IData)((((6U >= (7U & VL_DIV_III(32, 
                                                         ((IData)(7U) 
                                                          * vlSelfRef.title_tb__DOT__title__DOT____Vcellinp___29___A), (IData)(0x30U))))
                                  ? vlSelfRef.title_tb__DOT__title__DOT__title_mem
                                 [(7U & VL_DIV_III(32, 
                                                   ((IData)(7U) 
                                                    * vlSelfRef.title_tb__DOT__title__DOT____Vcellinp___29___A), (IData)(0x30U)))]
                                  : vlSelfRef.title_tb__DOT__title__DOT____Vxrand_h7cc986cc__0) 
                                >> (0x3fU & vlSelfRef.title_tb__DOT__title__DOT___16_)))
                     : (IData)(vlSelfRef.title_tb__DOT__title__DOT___30___DOT____Vxrand_h8d96407a__0)))) {
                Vtitle_tb___024root____Vdpiimwrap_title_tb__DOT__gif_write_pixel_TOP(vlSelfRef.title_tb__DOT__title_gif, (IData)(vlSelfRef.title_tb__DOT__pixel_x_i), vlSelfRef.title_tb__DOT__pixel_y_i, 0xffU, 0xffU, 0xffU);
            }
            vlSelfRef.title_tb__DOT__pixel_y_i = (0x3ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.title_tb__DOT__pixel_y_i)));
        }
        vlSelfRef.title_tb__DOT__pixel_x_i = (0x3ffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.title_tb__DOT__pixel_x_i)));
    }
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY((1U & (~ (IData)((0U != ([&]() {
                                        Vtitle_tb___024root____Vdpiimwrap_title_tb__DOT__gif_close_TOP(vlSelfRef.title_tb__DOT__title_gif, __Vfunc_title_tb__DOT__gif_close__3__Vfuncout);
                                    }(), __Vfunc_title_tb__DOT__gif_close__3__Vfuncout))))))) {
            VL_WRITEF_NX("[%0t] %%Error: title_tb.sv:49: Assertion failed in %Ntitle_tb.sim: 'assert' failed.\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("dv/title_tb.sv", 49, "");
        }
    }
    VL_WRITEF_NX("End simulation.\n",0);
    VL_FINISH_MT("dv/title_tb.sv", 52, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtitle_tb___024root___dump_triggers__act(Vtitle_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtitle_tb___024root___eval_triggers__act(Vtitle_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtitle_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (vlSelfRef.title_tb__DOT__title__DOT___15_ 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___15___1));
    vlSelfRef.__VactTriggered.set(1U, (vlSelfRef.title_tb__DOT__title__DOT___16_ 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___16___1));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(3U, ((~ (IData)(vlSelfRef.title_tb__DOT__clk_i)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__title_tb__DOT__clk_i__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___15___1 
        = vlSelfRef.title_tb__DOT__title__DOT___15_;
    vlSelfRef.__Vtrigprevexpr___TOP__title_tb__DOT__title__DOT___16___1 
        = vlSelfRef.title_tb__DOT__title__DOT___16_;
    vlSelfRef.__Vtrigprevexpr___TOP__title_tb__DOT__clk_i__0 
        = vlSelfRef.title_tb__DOT__clk_i;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtitle_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
