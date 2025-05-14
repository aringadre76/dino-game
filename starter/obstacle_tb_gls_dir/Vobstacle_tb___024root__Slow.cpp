// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vobstacle_tb.h for the primary calling header

#include "Vobstacle_tb__pch.h"
#include "Vobstacle_tb__Syms.h"
#include "Vobstacle_tb___024root.h"

void Vobstacle_tb___024root___ctor_var_reset(Vobstacle_tb___024root* vlSelf);

Vobstacle_tb___024root::Vobstacle_tb___024root(Vobstacle_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vobstacle_tb___024root___ctor_var_reset(this);
}

void Vobstacle_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vobstacle_tb___024root::~Vobstacle_tb___024root() {
}
