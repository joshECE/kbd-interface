// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(data,0,0);
    VL_OUT8(s,3,0);
    VL_OUT8(word,7,0);
    CData/*0:0*/ top__DOT____Vtogcov__clk;
    CData/*0:0*/ top__DOT____Vtogcov__data;
    CData/*3:0*/ top__DOT____Vtogcov__s;
    CData/*7:0*/ top__DOT____Vtogcov__word;
    CData/*7:0*/ top__DOT__kbd_infc__DOT__word_r;
    CData/*3:0*/ top__DOT__kbd_infc__DOT__ns;
    CData/*7:0*/ top__DOT__kbd_infc__DOT____Vtogcov__word_r;
    CData/*3:0*/ top__DOT__kbd_infc__DOT____Vtogcov__ns;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
