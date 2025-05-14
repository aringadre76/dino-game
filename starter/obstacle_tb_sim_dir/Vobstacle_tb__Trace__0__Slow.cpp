// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vobstacle_tb__Syms.h"


VL_ATTR_COLD void Vobstacle_tb___024root__trace_init_sub__TOP__dinorun_pkg__Vdedup0__0(Vobstacle_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vobstacle_tb___024root__trace_init_sub__TOP__0(Vobstacle_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("dinorun_pkg__Vdedup0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vobstacle_tb___024root__trace_init_sub__TOP__dinorun_pkg__Vdedup0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("obstacle_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"NUM_FRAMES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+60,0,"clk_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"rst_ni",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"next_frame_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"rand_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+40,0,"spawn_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"pixel_x_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+42,0,"pixel_y_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declQuad(c+43,0,"cactus_gif",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LONGINT, false,-1, 63,0);
    tracep->declQuad(c+45,0,"bird_gif",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LONGINT, false,-1, 63,0);
    tracep->pushPrefix("bird", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+54,0,"bird_flap_counter_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+55,0,"bird_flap_up_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"bird_x_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+57,0,"bird_y_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+60,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"next_frame_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"off_screen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"pixel_in_range",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"pixel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"pixel_x_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+63,0,"pixel_x_in_range",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"pixel_y_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+64,0,"pixel_y_in_range",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"rand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"rom_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+66,0,"rom_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+37,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"spawn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("BIRD_DOWN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 18; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 20,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("BIRD_UP", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 18; ++i) {
        tracep->declBus(c+19+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 20,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("bird_flap_up_q_reg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+74,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"CLK_POLARITY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"EN_POLARITY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"SRST_POLARITY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"SRST_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+60,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"SRST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+55,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+60,0,"pos_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"pos_srst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("cactus", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+60,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"next_frame_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"spawn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"rand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+41,0,"pixel_x_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+42,0,"pixel_y_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+68,0,"pixel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+77,0,"CACTUS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+78,0,"CACTUS_HEIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+79,0,"SCREEN_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+80,0,"SCREEN_HEIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+81,0,"GROUND_LEVEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+82,0,"GROUND_Y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+83,0,"CACTUS_SPEED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+51,0,"cactus_x_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+52,0,"cactus_image_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+53,0,"active_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"pixel_x_in_range",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"pixel_y_in_range",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"pixel_in_range",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"rom_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+50,0,"rom_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+72,0,"cactus_line",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vobstacle_tb___024root__trace_init_sub__TOP__dinorun_pkg__Vdedup0__0(Vobstacle_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root__trace_init_sub__TOP__dinorun_pkg__Vdedup0__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+79,0,"ScreenWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+80,0,"ScreenHeight",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+81,0,"Ground",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+79,0,"ObstacleInitialX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vobstacle_tb___024root__trace_init_top(Vobstacle_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vobstacle_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vobstacle_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vobstacle_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vobstacle_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vobstacle_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vobstacle_tb___024root__trace_register(Vobstacle_tb___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vobstacle_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vobstacle_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vobstacle_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vobstacle_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vobstacle_tb___024root__trace_const_0_sub_0(Vobstacle_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vobstacle_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root__trace_const_0\n"); );
    // Init
    Vobstacle_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vobstacle_tb___024root*>(voidSelf);
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vobstacle_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vobstacle_tb___024root__trace_const_0_sub_0(Vobstacle_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+73,(0x96U),32);
    bufp->fullIData(oldp+74,(1U),32);
    bufp->fullIData(oldp+75,(0U),32);
    bufp->fullBit(oldp+76,(0U));
    bufp->fullIData(oldp+77,(0xfU),32);
    bufp->fullIData(oldp+78,(0x21U),32);
    bufp->fullIData(oldp+79,(0x280U),32);
    bufp->fullIData(oldp+80,(0x1e0U),32);
    bufp->fullIData(oldp+81,(0x190U),32);
    bufp->fullIData(oldp+82,(0x16fU),32);
    bufp->fullIData(oldp+83,(8U),32);
}

VL_ATTR_COLD void Vobstacle_tb___024root__trace_full_0_sub_0(Vobstacle_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vobstacle_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root__trace_full_0\n"); );
    // Init
    Vobstacle_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vobstacle_tb___024root*>(voidSelf);
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vobstacle_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vobstacle_tb___024root__trace_full_0_sub_0(Vobstacle_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vobstacle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vobstacle_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[0]),21);
    bufp->fullIData(oldp+2,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[1]),21);
    bufp->fullIData(oldp+3,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[2]),21);
    bufp->fullIData(oldp+4,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[3]),21);
    bufp->fullIData(oldp+5,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[4]),21);
    bufp->fullIData(oldp+6,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[5]),21);
    bufp->fullIData(oldp+7,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[6]),21);
    bufp->fullIData(oldp+8,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[7]),21);
    bufp->fullIData(oldp+9,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[8]),21);
    bufp->fullIData(oldp+10,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[9]),21);
    bufp->fullIData(oldp+11,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[10]),21);
    bufp->fullIData(oldp+12,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[11]),21);
    bufp->fullIData(oldp+13,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[12]),21);
    bufp->fullIData(oldp+14,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[13]),21);
    bufp->fullIData(oldp+15,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[14]),21);
    bufp->fullIData(oldp+16,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[15]),21);
    bufp->fullIData(oldp+17,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[16]),21);
    bufp->fullIData(oldp+18,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_DOWN[17]),21);
    bufp->fullIData(oldp+19,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[0]),21);
    bufp->fullIData(oldp+20,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[1]),21);
    bufp->fullIData(oldp+21,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[2]),21);
    bufp->fullIData(oldp+22,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[3]),21);
    bufp->fullIData(oldp+23,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[4]),21);
    bufp->fullIData(oldp+24,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[5]),21);
    bufp->fullIData(oldp+25,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[6]),21);
    bufp->fullIData(oldp+26,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[7]),21);
    bufp->fullIData(oldp+27,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[8]),21);
    bufp->fullIData(oldp+28,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[9]),21);
    bufp->fullIData(oldp+29,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[10]),21);
    bufp->fullIData(oldp+30,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[11]),21);
    bufp->fullIData(oldp+31,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[12]),21);
    bufp->fullIData(oldp+32,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[13]),21);
    bufp->fullIData(oldp+33,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[14]),21);
    bufp->fullIData(oldp+34,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[15]),21);
    bufp->fullIData(oldp+35,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[16]),21);
    bufp->fullIData(oldp+36,(vlSelfRef.obstacle_tb__DOT__bird__DOT__BIRD_UP[17]),21);
    bufp->fullBit(oldp+37,(vlSelfRef.obstacle_tb__DOT__rst_ni));
    bufp->fullBit(oldp+38,(vlSelfRef.obstacle_tb__DOT__next_frame_i));
    bufp->fullCData(oldp+39,(vlSelfRef.obstacle_tb__DOT__rand_i),8);
    bufp->fullBit(oldp+40,(vlSelfRef.obstacle_tb__DOT__spawn_i));
    bufp->fullSData(oldp+41,(vlSelfRef.obstacle_tb__DOT__pixel_x_i),10);
    bufp->fullSData(oldp+42,(vlSelfRef.obstacle_tb__DOT__pixel_y_i),10);
    bufp->fullQData(oldp+43,(vlSelfRef.obstacle_tb__DOT__cactus_gif),64);
    bufp->fullQData(oldp+45,(vlSelfRef.obstacle_tb__DOT__bird_gif),64);
    bufp->fullCData(oldp+47,((3U & (IData)(vlSelfRef.obstacle_tb__DOT__rand_i))),2);
    bufp->fullBit(oldp+48,((1U & (~ (IData)(vlSelfRef.obstacle_tb__DOT__rst_ni)))));
    bufp->fullBit(oldp+49,(((0x16fU <= (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i)) 
                            & (0x190U > (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i)))));
    bufp->fullCData(oldp+50,((0x3fU & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                       - (IData)(0x2fU)))),6);
    bufp->fullSData(oldp+51,(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q),11);
    bufp->fullCData(oldp+52,(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_image_q),2);
    bufp->fullBit(oldp+53,(vlSelfRef.obstacle_tb__DOT__cactus__DOT__active_q));
    bufp->fullCData(oldp+54,(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_flap_counter_q),8);
    bufp->fullBit(oldp+55,(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_flap_up_q));
    bufp->fullSData(oldp+56,(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q),11);
    bufp->fullSData(oldp+57,(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q),11);
    bufp->fullBit(oldp+58,(VL_GTES_III(11, 0x7d6U, (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q))));
    bufp->fullBit(oldp+59,((1U & (~ (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_flap_up_q)))));
    bufp->fullBit(oldp+60,(vlSelfRef.obstacle_tb__DOT__clk_i));
    bufp->fullBit(oldp+61,(((((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                              >= (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q)) 
                             & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                < (0xfffU & ((IData)(0x2aU) 
                                             + (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q))))) 
                            & (((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                >= (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q)) 
                               & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                  < (0xfffU & ((IData)(0x24U) 
                                               + (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q))))))));
    bufp->fullBit(oldp+62,((((((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
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
    bufp->fullBit(oldp+63,((((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                             >= (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q)) 
                            & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                               < (0xfffU & ((IData)(0x2aU) 
                                            + (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_x_q)))))));
    bufp->fullBit(oldp+64,((((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                             >= (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q)) 
                            & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                               < (0xfffU & ((IData)(0x24U) 
                                            + (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_y_q)))))));
    bufp->fullSData(oldp+65,((0x3ffU & ((IData)(0x14U) 
                                        - vlSelfRef.obstacle_tb__DOT__bird__DOT___12_))),10);
    bufp->fullSData(oldp+66,((0x3ffU & ((IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT____Vcellout___69___Y) 
                                        >> 1U))),10);
    bufp->fullBit(oldp+67,(((7U == (IData)(vlSelfRef.obstacle_tb__DOT__bird__DOT__bird_flap_counter_q)) 
                            & (IData)(vlSelfRef.obstacle_tb__DOT__next_frame_i))));
    bufp->fullBit(oldp+68,((((((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                               >= (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)) 
                              & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                 < ((IData)(0xfU) + (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)))) 
                             & ((0x16fU <= (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i)) 
                                & (0x190U > (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i)))) 
                            & ((0xeU >= (0xfU & ((IData)(0xeU) 
                                                 - 
                                                 ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                                  - (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)))))
                                ? ((((((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                       >= (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)) 
                                      & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                         < ((IData)(0xfU) 
                                            + (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)))) 
                                     & ((0x16fU <= (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i)) 
                                        & (0x190U > (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i))))
                                     ? ((2U & (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_image_q))
                                         ? ((1U & (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_image_q))
                                             ? ((0x20U 
                                                 >= 
                                                 (0x3fU 
                                                  & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                     - (IData)(0x2fU))))
                                                 ? 
                                                vlSelfRef.obstacle_tb__DOT__cactus__DOT__CACTUS3
                                                [(0x3fU 
                                                  & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                     - (IData)(0x2fU)))]
                                                 : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d74c0ea__3))
                                             : ((0x20U 
                                                 >= 
                                                 (0x3fU 
                                                  & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                     - (IData)(0x2fU))))
                                                 ? 
                                                vlSelfRef.obstacle_tb__DOT__cactus__DOT__CACTUS2
                                                [(0x3fU 
                                                  & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                     - (IData)(0x2fU)))]
                                                 : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d74c0ea__2)))
                                         : ((1U & (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_image_q))
                                             ? ((0x20U 
                                                 >= 
                                                 (0x3fU 
                                                  & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                     - (IData)(0x2fU))))
                                                 ? 
                                                vlSelfRef.obstacle_tb__DOT__cactus__DOT__CACTUS1
                                                [(0x3fU 
                                                  & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                     - (IData)(0x2fU)))]
                                                 : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d74c0ea__1))
                                             : ((0x20U 
                                                 >= 
                                                 (0x3fU 
                                                  & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                     - (IData)(0x2fU))))
                                                 ? 
                                                vlSelfRef.obstacle_tb__DOT__cactus__DOT__CACTUS0
                                                [(0x3fU 
                                                  & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                                     - (IData)(0x2fU)))]
                                                 : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d74c0ea__0))))
                                     : 0U) >> (0xfU 
                                               & ((IData)(0xeU) 
                                                  - 
                                                  ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                                   - (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)))))
                                : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d96407a__0)))));
    bufp->fullBit(oldp+69,((((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                             >= (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)) 
                            & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                               < ((IData)(0xfU) + (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q))))));
    bufp->fullBit(oldp+70,(((((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                              >= (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)) 
                             & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                < ((IData)(0xfU) + (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)))) 
                            & ((0x16fU <= (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i)) 
                               & (0x190U > (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i))))));
    bufp->fullCData(oldp+71,((0x3fU & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                       - (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)))),6);
    bufp->fullSData(oldp+72,((((((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                 >= (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)) 
                                & ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_x_i) 
                                   < ((IData)(0xfU) 
                                      + (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_x_q)))) 
                               & ((0x16fU <= (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i)) 
                                  & (0x190U > (IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i))))
                               ? ((2U & (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_image_q))
                                   ? ((1U & (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_image_q))
                                       ? ((0x20U >= 
                                           (0x3fU & 
                                            ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                             - (IData)(0x2fU))))
                                           ? vlSelfRef.obstacle_tb__DOT__cactus__DOT__CACTUS3
                                          [(0x3fU & 
                                            ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                             - (IData)(0x2fU)))]
                                           : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d74c0ea__3))
                                       : ((0x20U >= 
                                           (0x3fU & 
                                            ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                             - (IData)(0x2fU))))
                                           ? vlSelfRef.obstacle_tb__DOT__cactus__DOT__CACTUS2
                                          [(0x3fU & 
                                            ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                             - (IData)(0x2fU)))]
                                           : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d74c0ea__2)))
                                   : ((1U & (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT__cactus_image_q))
                                       ? ((0x20U >= 
                                           (0x3fU & 
                                            ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                             - (IData)(0x2fU))))
                                           ? vlSelfRef.obstacle_tb__DOT__cactus__DOT__CACTUS1
                                          [(0x3fU & 
                                            ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                             - (IData)(0x2fU)))]
                                           : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d74c0ea__1))
                                       : ((0x20U >= 
                                           (0x3fU & 
                                            ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                             - (IData)(0x2fU))))
                                           ? vlSelfRef.obstacle_tb__DOT__cactus__DOT__CACTUS0
                                          [(0x3fU & 
                                            ((IData)(vlSelfRef.obstacle_tb__DOT__pixel_y_i) 
                                             - (IData)(0x2fU)))]
                                           : (IData)(vlSelfRef.obstacle_tb__DOT__cactus__DOT____Vxrand_h8d74c0ea__0))))
                               : 0U)),15);
}
