// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vobstacle_tb__Syms.h"


void Vobstacle_tb___024root__trace_chg_0_sub_0(Vobstacle_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vobstacle_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root__trace_chg_0\n"); );
    // Init
    Vobstacle_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vobstacle_tb___024root*>(voidSelf);
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vobstacle_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vobstacle_tb___024root__trace_chg_0_sub_0(Vobstacle_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[0]),21);
        bufp->chgIData(oldp+1,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[1]),21);
        bufp->chgIData(oldp+2,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[2]),21);
        bufp->chgIData(oldp+3,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[3]),21);
        bufp->chgIData(oldp+4,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[4]),21);
        bufp->chgIData(oldp+5,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[5]),21);
        bufp->chgIData(oldp+6,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[6]),21);
        bufp->chgIData(oldp+7,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[7]),21);
        bufp->chgIData(oldp+8,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[8]),21);
        bufp->chgIData(oldp+9,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[9]),21);
        bufp->chgIData(oldp+10,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[10]),21);
        bufp->chgIData(oldp+11,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[11]),21);
        bufp->chgIData(oldp+12,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[12]),21);
        bufp->chgIData(oldp+13,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[13]),21);
        bufp->chgIData(oldp+14,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[14]),21);
        bufp->chgIData(oldp+15,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[15]),21);
        bufp->chgIData(oldp+16,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[16]),21);
        bufp->chgIData(oldp+17,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[17]),21);
        bufp->chgIData(oldp+18,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[0]),21);
        bufp->chgIData(oldp+19,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[1]),21);
        bufp->chgIData(oldp+20,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[2]),21);
        bufp->chgIData(oldp+21,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[3]),21);
        bufp->chgIData(oldp+22,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[4]),21);
        bufp->chgIData(oldp+23,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[5]),21);
        bufp->chgIData(oldp+24,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[6]),21);
        bufp->chgIData(oldp+25,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[7]),21);
        bufp->chgIData(oldp+26,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[8]),21);
        bufp->chgIData(oldp+27,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[9]),21);
        bufp->chgIData(oldp+28,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[10]),21);
        bufp->chgIData(oldp+29,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[11]),21);
        bufp->chgIData(oldp+30,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[12]),21);
        bufp->chgIData(oldp+31,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[13]),21);
        bufp->chgIData(oldp+32,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[14]),21);
        bufp->chgIData(oldp+33,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[15]),21);
        bufp->chgIData(oldp+34,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[16]),21);
        bufp->chgIData(oldp+35,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[17]),21);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+36,(vlSelfRef.obstacle_tb__DOT__rst_ni));
        bufp->chgBit(oldp+37,(vlSelfRef.obstacle_tb__DOT__next_frame_i));
        bufp->chgCData(oldp+38,(vlSelfRef.obstacle_tb__DOT__rand_i),8);
        bufp->chgBit(oldp+39,(vlSelfRef.obstacle_tb__DOT__spawn_i));
        bufp->chgSData(oldp+40,(vlSelfRef.obstacle_tb__DOT__pixel_x_i),10);
        bufp->chgSData(oldp+41,(vlSelfRef.obstacle_tb__DOT__pixel_y_i),10);
        bufp->chgQData(oldp+42,(vlSelfRef.obstacle_tb__DOT__cactus_gif),64);
        bufp->chgQData(oldp+44,(vlSelfRef.obstacle_tb__DOT__bird_gif),64);
        bufp->chgCData(oldp+46,((3U & (IData)(vlSelfRef.obstacle_tb__DOT__rand_i))),2);
        bufp->chgBit(oldp+47,(((0x16fU <= (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i)) 
                               & (0x190U > (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i)))));
        bufp->chgCData(oldp+48,((0x3fU & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                          - (IData)(0x2fU)))),6);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+49,(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_flap_counter_q),8);
        bufp->chgBit(oldp+50,(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_flap_up_q));
        bufp->chgSData(oldp+51,(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q),11);
        bufp->chgSData(oldp+52,(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q),11);
        bufp->chgBit(oldp+53,(VL_GTES_III(11, 0x7d6U, (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q))));
        bufp->chgBit(oldp+54,((1U & (~ (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_flap_up_q)))));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+55,(vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q));
        bufp->chgCData(oldp+56,(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_image_q),2);
        bufp->chgSData(oldp+57,(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q),11);
    }
    bufp->chgBit(oldp+58,(vlSelfRef.obstacle_tb__DOT__clk_i));
    bufp->chgBit(oldp+59,(((((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                             >= (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q)) 
                            & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                               < (0xfffU & ((IData)(0x2aU) 
                                            + (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q))))) 
                           & (((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                               >= (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q)) 
                              & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                 < (0xfffU & ((IData)(0x24U) 
                                              + (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q))))))));
    bufp->chgBit(oldp+60,((((((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                              >= (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q)) 
                             & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                < (0xfffU & ((IData)(0x2aU) 
                                             + (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q))))) 
                            & (((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                >= (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q)) 
                               & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                  < (0xfffU & ((IData)(0x24U) 
                                               + (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q)))))) 
                           & (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT___02_))));
    bufp->chgBit(oldp+61,((((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                            >= (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q)) 
                           & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                              < (0xfffU & ((IData)(0x2aU) 
                                           + (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q)))))));
    bufp->chgBit(oldp+62,((((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                            >= (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q)) 
                           & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                              < (0xfffU & ((IData)(0x24U) 
                                           + (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q)))))));
    bufp->chgSData(oldp+63,((0x3ffU & ((IData)(0x14U) 
                                       - ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellout___67___Y) 
                                          >> 1U)))),10);
    bufp->chgCData(oldp+64,((0x1fU & ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT___31_) 
                                      >> 1U))),5);
    bufp->chgBit(oldp+65,(((IData)(vlSelfRef.obstacle_tb__DOT__next_frame_i) 
                           & (7U == (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_flap_counter_q)))));
    bufp->chgBit(oldp+66,(vlSelfRef.obstacle_tb__DOT__cactus__DOT___32___DOT__pos_arst));
    bufp->chgSData(oldp+67,(((((IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q) 
                               & (((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                   >= (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)) 
                                  & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                     < (0xfffU & ((IData)(0xfU) 
                                                  + (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)))))) 
                              & ((0x16fU <= (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i)) 
                                 & (0x190U > (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i))))
                              ? (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT___00_)
                              : 0U)),15);
    bufp->chgBit(oldp+68,((((IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q) 
                            & (((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                >= (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)) 
                               & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                  < (0xfffU & ((IData)(0xfU) 
                                               + (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)))))) 
                           & ((0x16fU <= (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i)) 
                              & (0x190U > (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i))))));
    bufp->chgBit(oldp+69,(((((IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q) 
                             & (((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                 >= (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)) 
                                & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                   < (0xfffU & ((IData)(0xfU) 
                                                + (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)))))) 
                            & ((0x16fU <= (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i)) 
                               & (0x190U > (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i)))) 
                           & ((0xeU >= (0xfU & vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_))
                               ? (((((IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q) 
                                     & (((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                         >= (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)) 
                                        & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                           < (0xfffU 
                                              & ((IData)(0xfU) 
                                                 + (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)))))) 
                                    & ((0x16fU <= (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i)) 
                                       & (0x190U > (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i))))
                                    ? (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT___00_)
                                    : 0U) >> (0xfU 
                                              & vlSelfRef.obstacle_tb__DOT__cactus__DOT___29_))
                               : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT___60___DOT____Vxrand_h8d96407a__0)))));
    bufp->chgBit(oldp+70,((((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                            >= (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)) 
                           & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                              < (0xfffU & ((IData)(0xfU) 
                                           + (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)))))));
    bufp->chgCData(oldp+71,((0x3fU & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                      - (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)))),6);
    bufp->chgBit(oldp+72,(((IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q)
                            ? (8U < (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q))
                            : (IData)(vlSelfRef.obstacle_tb__DOT__spawn_i))));
}

void Vobstacle_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root__trace_cleanup\n"); );
    // Init
    Vobstacle_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vobstacle_tb___024root*>(voidSelf);
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
