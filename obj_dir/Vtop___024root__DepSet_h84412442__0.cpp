// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->data) ^ (IData)(vlSelf->top__DOT____Vtogcov__data))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__data = vlSelf->data;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->word) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__word__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__word__0 = vlSelf->word;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ ((IData)(vlSelf->s) >> 3U)))) {
        if ((4U & (IData)(vlSelf->s))) {
            if ((1U & (~ ((IData)(vlSelf->s) >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->s)))) {
                    vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->s))) {
                    vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->s))) {
                if ((1U & (~ (IData)(vlSelf->s)))) {
                    vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->s))) {
                    vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelf->s) >> 2U)))) {
            if ((2U & (IData)(vlSelf->s))) {
                if ((1U & (~ (IData)(vlSelf->s)))) {
                    vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->s))) {
                    vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & (~ ((IData)(vlSelf->s) >> 1U)))) {
                if ((1U & (IData)(vlSelf->s))) {
                    vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->s)))) {
                    vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->s))) {
        if ((1U & (~ ((IData)(vlSelf->s) >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->s) >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->s)))) {
                    vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (IData)(vlSelf->s))) {
                    vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((2U & (IData)(vlSelf->s))) {
                vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((4U & (IData)(vlSelf->s))) {
            vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        }
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*2:0*/ __Vdly__top__DOT__mono_out__DOT__note_r;
    __Vdly__top__DOT__mono_out__DOT__note_r = 0;
    // Body
    vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (~ (IData)(vlSelf->top__DOT__mono_out__DOT__br)))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        if ((0x16U != (IData)(vlSelf->word))) {
            if ((0x1eU != (IData)(vlSelf->word))) {
                if ((0x26U != (IData)(vlSelf->word))) {
                    if ((0xf0U == (IData)(vlSelf->word))) {
                        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((0xf0U != (IData)(vlSelf->word))) {
                        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x26U == (IData)(vlSelf->word))) {
                    vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x1eU == (IData)(vlSelf->word))) {
                vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0x16U == (IData)(vlSelf->word))) {
            vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        }
    }
    __Vdly__top__DOT__mono_out__DOT__note_r = vlSelf->top__DOT__mono_out__DOT__note_r;
    if (vlSelf->top__DOT__mono_out__DOT__br) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        if ((0x16U != (IData)(vlSelf->word))) {
            if ((0x1eU == (IData)(vlSelf->word))) {
                vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
                if ((2U == (IData)(vlSelf->top__DOT__mono_out__DOT__note_r))) {
                    vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
                }
                if ((2U != (IData)(vlSelf->top__DOT__mono_out__DOT__note_r))) {
                    vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x1eU != (IData)(vlSelf->word))) {
                if ((0x26U == (IData)(vlSelf->word))) {
                    vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
                    if ((3U == (IData)(vlSelf->top__DOT__mono_out__DOT__note_r))) {
                        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((3U != (IData)(vlSelf->top__DOT__mono_out__DOT__note_r))) {
                        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x26U != (IData)(vlSelf->word))) {
                    if ((0xf0U == (IData)(vlSelf->word))) {
                        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((0xf0U != (IData)(vlSelf->word))) {
                        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
        }
        if ((0x16U == (IData)(vlSelf->word))) {
            vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
            if ((1U != (IData)(vlSelf->top__DOT__mono_out__DOT__note_r))) {
                vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U == (IData)(vlSelf->top__DOT__mono_out__DOT__note_r))) {
                vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if (vlSelf->top__DOT__mono_out__DOT__br) {
        vlSelf->top__DOT__mono_out__DOT__br = 0U;
        if ((0x16U == (IData)(vlSelf->word))) {
            if ((1U == (IData)(vlSelf->top__DOT__mono_out__DOT__note_r))) {
                __Vdly__top__DOT__mono_out__DOT__note_r = 0U;
            }
        } else if ((0x1eU == (IData)(vlSelf->word))) {
            if ((2U == (IData)(vlSelf->top__DOT__mono_out__DOT__note_r))) {
                __Vdly__top__DOT__mono_out__DOT__note_r = 0U;
            }
        } else if ((0x26U == (IData)(vlSelf->word))) {
            if ((3U == (IData)(vlSelf->top__DOT__mono_out__DOT__note_r))) {
                __Vdly__top__DOT__mono_out__DOT__note_r = 0U;
            }
        } else if ((0xf0U == (IData)(vlSelf->word))) {
            vlSelf->top__DOT__mono_out__DOT__br = 1U;
        }
    } else if ((0x16U == (IData)(vlSelf->word))) {
        __Vdly__top__DOT__mono_out__DOT__note_r = 1U;
    } else if ((0x1eU == (IData)(vlSelf->word))) {
        __Vdly__top__DOT__mono_out__DOT__note_r = 2U;
    } else if ((0x26U == (IData)(vlSelf->word))) {
        __Vdly__top__DOT__mono_out__DOT__note_r = 3U;
    } else if ((0xf0U == (IData)(vlSelf->word))) {
        vlSelf->top__DOT__mono_out__DOT__br = 1U;
    }
    vlSelf->top__DOT__mono_out__DOT__note_r = __Vdly__top__DOT__mono_out__DOT__note_r;
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
    vlSelf->note = vlSelf->top__DOT__mono_out__DOT__note_r;
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
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    if ((8U & (IData)(vlSelf->s))) {
        if ((1U & (~ ((IData)(vlSelf->s) >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->s) >> 1U)))) {
                if ((1U & (IData)(vlSelf->s))) {
                    vlSelf->word = vlSelf->top__DOT__kbd_infc__DOT__word_r;
                } else {
                    vlSelf->top__DOT__kbd_infc__DOT__word_r 
                        = ((0x7fU & (IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r)) 
                           | ((IData)(vlSelf->data) 
                              << 7U));
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->s))) {
        vlSelf->top__DOT__kbd_infc__DOT__word_r = (
                                                   (2U 
                                                    & (IData)(vlSelf->s))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->s))
                                                     ? 
                                                    ((0xbfU 
                                                      & (IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r)) 
                                                     | ((IData)(vlSelf->data) 
                                                        << 6U))
                                                     : 
                                                    ((0xdfU 
                                                      & (IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r)) 
                                                     | ((IData)(vlSelf->data) 
                                                        << 5U)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->s))
                                                     ? 
                                                    ((0xefU 
                                                      & (IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r)) 
                                                     | ((IData)(vlSelf->data) 
                                                        << 4U))
                                                     : 
                                                    ((0xf7U 
                                                      & (IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r)) 
                                                     | ((IData)(vlSelf->data) 
                                                        << 3U))));
    } else if ((2U & (IData)(vlSelf->s))) {
        vlSelf->top__DOT__kbd_infc__DOT__word_r = (
                                                   (1U 
                                                    & (IData)(vlSelf->s))
                                                    ? 
                                                   ((0xfbU 
                                                     & (IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r)) 
                                                    | ((IData)(vlSelf->data) 
                                                       << 2U))
                                                    : 
                                                   ((0xfdU 
                                                     & (IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r)) 
                                                    | ((IData)(vlSelf->data) 
                                                       << 1U)));
    } else if ((1U & (IData)(vlSelf->s))) {
        vlSelf->top__DOT__kbd_infc__DOT__word_r = (
                                                   (0xfeU 
                                                    & (IData)(vlSelf->top__DOT__kbd_infc__DOT__word_r)) 
                                                   | (IData)(vlSelf->data));
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
    vlSelf->s = vlSelf->top__DOT__kbd_infc__DOT__ns;
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
    vlSelf->top__DOT__kbd_infc__DOT__ns = ((0xbU == (IData)(vlSelf->s))
                                            ? 1U : 
                                           (0xfU & 
                                            ((IData)(1U) 
                                             + (IData)(vlSelf->s))));
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
