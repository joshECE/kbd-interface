// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->top__DOT__mono_out__DOT__note_r = 0U;
    vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__mono_out__DOT__br = 0U;
    vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hfa0ee0a3__0;
    // Body
    vlSelf->word = 0U;
    vlSelf->top__DOT__kbd_infc__DOT__word_r = 0U;
    vlSelf->s = 0U;
    vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
    if (VL_UNLIKELY((0U != VL_TESTPLUSARGS_I(std::string{"trace"})))) {
        __Vtemp_hfa0ee0a3__0[0U] = 0x2e766364U;
        __Vtemp_hfa0ee0a3__0[1U] = 0x64756d70U;
        __Vtemp_hfa0ee0a3__0[2U] = 0x766c745fU;
        __Vtemp_hfa0ee0a3__0[3U] = 0x6f67732fU;
        __Vtemp_hfa0ee0a3__0[4U] = 0x6cU;
        vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_hfa0ee0a3__0));
        vlSymsp->_traceDumpOpen();
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        VL_WRITEF("[%0t] Tracing to logs/vlt_dump.vcd...\n\n",
                  64,VL_TIME_UNITED_Q(1),-12);
    } else {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
    }
    VL_WRITEF("[%0t] Model running...\n\n",64,VL_TIME_UNITED_Q(1),
              -12);
    vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->data) ^ (IData)(vlSelf->top__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__data = vlSelf->data;
    }
    if (((IData)(vlSelf->top__DOT__mono_out__DOT__br) 
         ^ (IData)(vlSelf->top__DOT__mono_out__DOT____Vtogcov__br))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mono_out__DOT____Vtogcov__br 
            = vlSelf->top__DOT__mono_out__DOT__br;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mono_out__DOT__note_r) 
               ^ (IData)(vlSelf->top__DOT__mono_out__DOT____Vtogcov__note_r)))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mono_out__DOT____Vtogcov__note_r 
            = ((6U & (IData)(vlSelf->top__DOT__mono_out__DOT____Vtogcov__note_r)) 
               | (1U & (IData)(vlSelf->top__DOT__mono_out__DOT__note_r)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__mono_out__DOT__note_r) 
               ^ (IData)(vlSelf->top__DOT__mono_out__DOT____Vtogcov__note_r)))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mono_out__DOT____Vtogcov__note_r 
            = ((5U & (IData)(vlSelf->top__DOT__mono_out__DOT____Vtogcov__note_r)) 
               | (2U & (IData)(vlSelf->top__DOT__mono_out__DOT__note_r)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__mono_out__DOT__note_r) 
               ^ (IData)(vlSelf->top__DOT__mono_out__DOT____Vtogcov__note_r)))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mono_out__DOT____Vtogcov__note_r 
            = ((3U & (IData)(vlSelf->top__DOT__mono_out__DOT____Vtogcov__note_r)) 
               | (4U & (IData)(vlSelf->top__DOT__mono_out__DOT__note_r)));
    }
    if ((1U & ((IData)(vlSelf->s) ^ (IData)(vlSelf->top__DOT____Vtogcov__s)))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__s = ((0xeU & (IData)(vlSelf->top__DOT____Vtogcov__s)) 
                                          | (1U & (IData)(vlSelf->s)));
    }
    if ((2U & ((IData)(vlSelf->s) ^ (IData)(vlSelf->top__DOT____Vtogcov__s)))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__s = ((0xdU & (IData)(vlSelf->top__DOT____Vtogcov__s)) 
                                          | (2U & (IData)(vlSelf->s)));
    }
    if ((4U & ((IData)(vlSelf->s) ^ (IData)(vlSelf->top__DOT____Vtogcov__s)))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__s = ((0xbU & (IData)(vlSelf->top__DOT____Vtogcov__s)) 
                                          | (4U & (IData)(vlSelf->s)));
    }
    if ((8U & ((IData)(vlSelf->s) ^ (IData)(vlSelf->top__DOT____Vtogcov__s)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__s = ((7U & (IData)(vlSelf->top__DOT____Vtogcov__s)) 
                                          | (8U & (IData)(vlSelf->s)));
    }
    if ((1U & ((IData)(vlSelf->word) ^ (IData)(vlSelf->top__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__word = ((0xfeU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__word)) 
                                             | (1U 
                                                & (IData)(vlSelf->word)));
    }
    if ((2U & ((IData)(vlSelf->word) ^ (IData)(vlSelf->top__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__word = ((0xfdU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__word)) 
                                             | (2U 
                                                & (IData)(vlSelf->word)));
    }
    if ((4U & ((IData)(vlSelf->word) ^ (IData)(vlSelf->top__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__word = ((0xfbU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__word)) 
                                             | (4U 
                                                & (IData)(vlSelf->word)));
    }
    if ((8U & ((IData)(vlSelf->word) ^ (IData)(vlSelf->top__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__word = ((0xf7U 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__word)) 
                                             | (8U 
                                                & (IData)(vlSelf->word)));
    }
    if ((0x10U & ((IData)(vlSelf->word) ^ (IData)(vlSelf->top__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__word = ((0xefU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__word)) 
                                             | (0x10U 
                                                & (IData)(vlSelf->word)));
    }
    if ((0x20U & ((IData)(vlSelf->word) ^ (IData)(vlSelf->top__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__word = ((0xdfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__word)) 
                                             | (0x20U 
                                                & (IData)(vlSelf->word)));
    }
    if ((0x40U & ((IData)(vlSelf->word) ^ (IData)(vlSelf->top__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__word = ((0xbfU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__word)) 
                                             | (0x40U 
                                                & (IData)(vlSelf->word)));
    }
    if ((0x80U & ((IData)(vlSelf->word) ^ (IData)(vlSelf->top__DOT____Vtogcov__word)))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__word = ((0x7fU 
                                              & (IData)(vlSelf->top__DOT____Vtogcov__word)) 
                                             | (0x80U 
                                                & (IData)(vlSelf->word)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r) 
               ^ (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r)))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r 
            = ((0xfeU & (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r)) 
               | (1U & (IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r) 
               ^ (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r)))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r 
            = ((0xfdU & (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r)) 
               | (2U & (IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r) 
               ^ (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r)))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r 
            = ((0xfbU & (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r)) 
               | (4U & (IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r) 
               ^ (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r)))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r 
            = ((0xf7U & (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r)) 
               | (8U & (IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r) 
                  ^ (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r)))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r 
            = ((0xefU & (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r)) 
               | (0x10U & (IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r) 
                  ^ (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r)))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r 
            = ((0xdfU & (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r)) 
               | (0x20U & (IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r) 
                  ^ (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r)))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r 
            = ((0xbfU & (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r)) 
               | (0x40U & (IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r) 
                  ^ (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r)))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r 
            = ((0x7fU & (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__word_r)) 
               | (0x80U & (IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r)));
    }
    vlSelf->note = vlSelf->top__DOT__mono_out__DOT__note_r;
    vlSelf->top__DOT__kbd_infc__DOT__ns = ((0xbU == (IData)(vlSelf->s))
                                            ? 1U : 
                                           (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->s))));
    if ((1U & ((IData)(vlSelf->note) ^ (IData)(vlSelf->top__DOT____Vtogcov__note)))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__note = ((6U & (IData)(vlSelf->top__DOT____Vtogcov__note)) 
                                             | (1U 
                                                & (IData)(vlSelf->note)));
    }
    if ((2U & ((IData)(vlSelf->note) ^ (IData)(vlSelf->top__DOT____Vtogcov__note)))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__note = ((5U & (IData)(vlSelf->top__DOT____Vtogcov__note)) 
                                             | (2U 
                                                & (IData)(vlSelf->note)));
    }
    if ((4U & ((IData)(vlSelf->note) ^ (IData)(vlSelf->top__DOT____Vtogcov__note)))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__note = ((3U & (IData)(vlSelf->top__DOT____Vtogcov__note)) 
                                             | (4U 
                                                & (IData)(vlSelf->note)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__kbd_infc__DOT__ns) 
               ^ (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__ns)))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__ns 
            = ((0xeU & (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__ns)) 
               | (1U & (IData)(vlSelf->top__DOT__kbd_infc__DOT__ns)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__kbd_infc__DOT__ns) 
               ^ (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__ns)))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__ns 
            = ((0xdU & (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__ns)) 
               | (2U & (IData)(vlSelf->top__DOT__kbd_infc__DOT__ns)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__kbd_infc__DOT__ns) 
               ^ (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__ns)))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__ns 
            = ((0xbU & (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__ns)) 
               | (4U & (IData)(vlSelf->top__DOT__kbd_infc__DOT__ns)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__kbd_infc__DOT__ns) 
               ^ (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__ns)))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__ns 
            = ((7U & (IData)(vlSelf->top__DOT__kbd_infc__DOT____Vtogcov__ns)) 
               | (8U & (IData)(vlSelf->top__DOT__kbd_infc__DOT__ns)));
    }
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "top.v", 1, 19, ".top", "v_toggle/top", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "top.v", 2, 8, ".top", "v_toggle/top", "data", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "top.v", 3, 19, ".top", "v_toggle/top", "s[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "top.v", 3, 19, ".top", "v_toggle/top", "s[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "top.v", 3, 19, ".top", "v_toggle/top", "s[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "top.v", 3, 19, ".top", "v_toggle/top", "s[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "top.v", 4, 19, ".top", "v_toggle/top", "word[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "top.v", 4, 19, ".top", "v_toggle/top", "word[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "top.v", 4, 19, ".top", "v_toggle/top", "word[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "top.v", 4, 19, ".top", "v_toggle/top", "word[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "top.v", 4, 19, ".top", "v_toggle/top", "word[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "top.v", 4, 19, ".top", "v_toggle/top", "word[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "top.v", 4, 19, ".top", "v_toggle/top", "word[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "top.v", 4, 19, ".top", "v_toggle/top", "word[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "top.v", 5, 19, ".top", "v_toggle/top", "note[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "top.v", 5, 19, ".top", "v_toggle/top", "note[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "top.v", 5, 19, ".top", "v_toggle/top", "note[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "kbd_infc.v", 2, 8, ".top.kbd_infc", "v_toggle/kbd_infc", "kbdclk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "kbd_infc.v", 3, 8, ".top.kbd_infc", "v_toggle/kbd_infc", "kbddata", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "kbd_infc.v", 4, 19, ".top.kbd_infc", "v_toggle/kbd_infc", "s[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "kbd_infc.v", 4, 19, ".top.kbd_infc", "v_toggle/kbd_infc", "s[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "kbd_infc.v", 4, 19, ".top.kbd_infc", "v_toggle/kbd_infc", "s[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "kbd_infc.v", 4, 19, ".top.kbd_infc", "v_toggle/kbd_infc", "s[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "kbd_infc.v", 5, 19, ".top.kbd_infc", "v_toggle/kbd_infc", "word[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "kbd_infc.v", 5, 19, ".top.kbd_infc", "v_toggle/kbd_infc", "word[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "kbd_infc.v", 5, 19, ".top.kbd_infc", "v_toggle/kbd_infc", "word[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "kbd_infc.v", 5, 19, ".top.kbd_infc", "v_toggle/kbd_infc", "word[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "kbd_infc.v", 5, 19, ".top.kbd_infc", "v_toggle/kbd_infc", "word[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "kbd_infc.v", 5, 19, ".top.kbd_infc", "v_toggle/kbd_infc", "word[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "kbd_infc.v", 5, 19, ".top.kbd_infc", "v_toggle/kbd_infc", "word[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "kbd_infc.v", 5, 19, ".top.kbd_infc", "v_toggle/kbd_infc", "word[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "kbd_infc.v", 11, 11, ".top.kbd_infc", "v_toggle/kbd_infc", "word_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "kbd_infc.v", 11, 11, ".top.kbd_infc", "v_toggle/kbd_infc", "word_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "kbd_infc.v", 11, 11, ".top.kbd_infc", "v_toggle/kbd_infc", "word_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "kbd_infc.v", 11, 11, ".top.kbd_infc", "v_toggle/kbd_infc", "word_r[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "kbd_infc.v", 11, 11, ".top.kbd_infc", "v_toggle/kbd_infc", "word_r[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "kbd_infc.v", 11, 11, ".top.kbd_infc", "v_toggle/kbd_infc", "word_r[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "kbd_infc.v", 11, 11, ".top.kbd_infc", "v_toggle/kbd_infc", "word_r[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "kbd_infc.v", 11, 11, ".top.kbd_infc", "v_toggle/kbd_infc", "word_r[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "kbd_infc.v", 12, 12, ".top.kbd_infc", "v_toggle/kbd_infc", "ns[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "kbd_infc.v", 12, 12, ".top.kbd_infc", "v_toggle/kbd_infc", "ns[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "kbd_infc.v", 12, 12, ".top.kbd_infc", "v_toggle/kbd_infc", "ns[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "kbd_infc.v", 12, 12, ".top.kbd_infc", "v_toggle/kbd_infc", "ns[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "kbd_infc.v", 14, 1, ".top.kbd_infc", "v_line/kbd_infc", "block", "14-17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "kbd_infc.v", 25, 7, ".top.kbd_infc", "v_line/kbd_infc", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "kbd_infc.v", 27, 7, ".top.kbd_infc", "v_line/kbd_infc", "case", "27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "kbd_infc.v", 29, 7, ".top.kbd_infc", "v_line/kbd_infc", "case", "29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "kbd_infc.v", 31, 7, ".top.kbd_infc", "v_line/kbd_infc", "case", "31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "kbd_infc.v", 33, 7, ".top.kbd_infc", "v_line/kbd_infc", "case", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "kbd_infc.v", 35, 7, ".top.kbd_infc", "v_line/kbd_infc", "case", "35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "kbd_infc.v", 36, 7, ".top.kbd_infc", "v_line/kbd_infc", "case", "36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "kbd_infc.v", 37, 7, ".top.kbd_infc", "v_line/kbd_infc", "case", "37");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "kbd_infc.v", 38, 7, ".top.kbd_infc", "v_line/kbd_infc", "case", "38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "kbd_infc.v", 39, 3, ".top.kbd_infc", "v_line/kbd_infc", "case", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "kbd_infc.v", 22, 1, ".top.kbd_infc", "v_line/kbd_infc", "block", "22-24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "kbd_infc.v", 45, 7, ".top.kbd_infc", "v_branch/kbd_infc", "if", "45-48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "kbd_infc.v", 45, 8, ".top.kbd_infc", "v_branch/kbd_infc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "kbd_infc.v", 44, 4, ".top.kbd_infc", "v_line/kbd_infc", "block", "44,50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "mono_out.v", 2, 14, ".top.mono_out", "v_toggle/mono_out", "keycode[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "mono_out.v", 2, 14, ".top.mono_out", "v_toggle/mono_out", "keycode[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "mono_out.v", 2, 14, ".top.mono_out", "v_toggle/mono_out", "keycode[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "mono_out.v", 2, 14, ".top.mono_out", "v_toggle/mono_out", "keycode[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "mono_out.v", 2, 14, ".top.mono_out", "v_toggle/mono_out", "keycode[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "mono_out.v", 2, 14, ".top.mono_out", "v_toggle/mono_out", "keycode[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "mono_out.v", 2, 14, ".top.mono_out", "v_toggle/mono_out", "keycode[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "mono_out.v", 2, 14, ".top.mono_out", "v_toggle/mono_out", "keycode[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "mono_out.v", 3, 15, ".top.mono_out", "v_toggle/mono_out", "note[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "mono_out.v", 3, 15, ".top.mono_out", "v_toggle/mono_out", "note[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "mono_out.v", 3, 15, ".top.mono_out", "v_toggle/mono_out", "note[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "mono_out.v", 6, 11, ".top.mono_out", "v_toggle/mono_out", "note_r[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "mono_out.v", 6, 11, ".top.mono_out", "v_toggle/mono_out", "note_r[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "mono_out.v", 6, 11, ".top.mono_out", "v_toggle/mono_out", "note_r[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "mono_out.v", 6, 20, ".top.mono_out", "v_line/mono_out", "block", "6");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "mono_out.v", 7, 5, ".top.mono_out", "v_toggle/mono_out", "br", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "mono_out.v", 7, 10, ".top.mono_out", "v_line/mono_out", "block", "7");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "mono_out.v", 14, 9, ".top.mono_out", "v_line/mono_out", "case", "14");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "mono_out.v", 15, 9, ".top.mono_out", "v_line/mono_out", "case", "15");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "mono_out.v", 16, 9, ".top.mono_out", "v_line/mono_out", "case", "16");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "mono_out.v", 17, 9, ".top.mono_out", "v_line/mono_out", "case", "17");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "mono_out.v", 18, 4, ".top.mono_out", "v_line/mono_out", "case", "18");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "mono_out.v", 24, 5, ".top.mono_out", "v_branch/mono_out", "if", "24-25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "mono_out.v", 24, 6, ".top.mono_out", "v_branch/mono_out", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "mono_out.v", 23, 9, ".top.mono_out", "v_line/mono_out", "case", "23");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "mono_out.v", 29, 5, ".top.mono_out", "v_branch/mono_out", "if", "29-30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "mono_out.v", 29, 6, ".top.mono_out", "v_branch/mono_out", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "mono_out.v", 28, 9, ".top.mono_out", "v_line/mono_out", "case", "28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "mono_out.v", 34, 5, ".top.mono_out", "v_branch/mono_out", "if", "34-35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "mono_out.v", 34, 6, ".top.mono_out", "v_branch/mono_out", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "mono_out.v", 33, 9, ".top.mono_out", "v_line/mono_out", "case", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "mono_out.v", 38, 9, ".top.mono_out", "v_line/mono_out", "case", "38");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "mono_out.v", 39, 4, ".top.mono_out", "v_line/mono_out", "case", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "mono_out.v", 12, 2, ".top.mono_out", "v_branch/mono_out", "if", "12-13");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "mono_out.v", 12, 3, ".top.mono_out", "v_branch/mono_out", "else", "20-22");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "mono_out.v", 11, 1, ".top.mono_out", "v_line/mono_out", "block", "11");
}
