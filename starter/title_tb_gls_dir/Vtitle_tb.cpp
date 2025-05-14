// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtitle_tb__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vtitle_tb::Vtitle_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtitle_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtitle_tb::Vtitle_tb(const char* _vcname__)
    : Vtitle_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtitle_tb::~Vtitle_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtitle_tb___024root___eval_debug_assertions(Vtitle_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vtitle_tb___024root___eval_static(Vtitle_tb___024root* vlSelf);
void Vtitle_tb___024root___eval_initial(Vtitle_tb___024root* vlSelf);
void Vtitle_tb___024root___eval_settle(Vtitle_tb___024root* vlSelf);
void Vtitle_tb___024root___eval(Vtitle_tb___024root* vlSelf);

void Vtitle_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtitle_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtitle_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtitle_tb___024root___eval_static(&(vlSymsp->TOP));
        Vtitle_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vtitle_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtitle_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtitle_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtitle_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtitle_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtitle_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtitle_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtitle_tb___024root___eval_final(Vtitle_tb___024root* vlSelf);

VL_ATTR_COLD void Vtitle_tb::final() {
    Vtitle_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtitle_tb::hierName() const { return vlSymsp->name(); }
const char* Vtitle_tb::modelName() const { return "Vtitle_tb"; }
unsigned Vtitle_tb::threads() const { return 1; }
void Vtitle_tb::prepareClone() const { contextp()->prepareClone(); }
void Vtitle_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtitle_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtitle_tb___024root__trace_decl_types(VerilatedFst* tracep);

void Vtitle_tb___024root__trace_init_top(Vtitle_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtitle_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtitle_tb___024root*>(voidSelf);
    Vtitle_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtitle_tb___024root__trace_decl_types(tracep);
    Vtitle_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtitle_tb___024root__trace_register(Vtitle_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtitle_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtitle_tb::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtitle_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
