// DESCRIPTION: Verilator: Verilog example module
//
// This file ONLY is placed under the Creative Commons Public Domain, for
// any use, without warranty, 2017 by Wilson Snyder.
// SPDX-License-Identifier: CC0-1.0
//======================================================================

// For std::unique_ptr
#include <memory>

// Include common routines
#include <verilated.h>

// Include model header, generated from Verilating "top.v"
#include "Vtop.h"

#include "verilated_vcd_c.h"

// Legacy function required only so linking works on Cygwin and MSVC++
double sc_time_stamp() { return 0; }

int main(int argc, char** argv) {
    // This is a more complicated example, please also see the simpler examples/make_hello_c.

    // Prevent unused variable warnings
    if (false && argc && argv) {}

    // Create logs/ directory in case we have traces to put under it
    Verilated::mkdir("logs");

    // Construct a VerilatedContext to hold simulation time, etc.
    // Multiple modules (made later below with Vtop) may share the same
    // context to share time, or modules may have different contexts if
    // they should be independent from each other.

    // Using unique_ptr is similar to
    // "VerilatedContext* contextp = new VerilatedContext" then deleting at end.
    const std::unique_ptr<VerilatedContext> contextp{new VerilatedContext};
    // Do not instead make Vtop as a file-scope static variable, as the
    // "C++ static initialization order fiasco" may cause a crash

    // Set debug level, 0 is off, 9 is highest presently used
    // May be overridden by commandArgs argument parsing
    contextp->debug(0);

    // Randomization reset policy
    // May be overridden by commandArgs argument parsing
    contextp->randReset(2);

    // Verilator must compute traced signals
    contextp->traceEverOn(true);

    // Pass arguments so Verilated code can see them, e.g. $value$plusargs
    // This needs to be called before you create any model
    contextp->commandArgs(argc, argv);

    // Construct the Verilated model, from Vtop.h generated from Verilating "top.v".
    // Using unique_ptr is similar to "Vtop* top = new Vtop" then deleting at end.
    // "TOP" will be the hierarchical name of the module.
    const std::unique_ptr<Vtop> top{new Vtop{contextp.get(), "TOP"}};

    //VerilatedVcdC* tfp = new VerilatedVcdC;
    //top->trace(tfp, 99); // Trace 99 levels of hierarchy (or see below)
    //tfp->open("obj_dir/t_trace_ena_cc/simx.vcd");
    // Putting in my own stuff...
    //

    int datain[] = {1,1,1,1,1,1,1,1,   0,   1,0,0,1,0,0,1,1,   1,    1,   1,1,   0,    0,0,0,1,1,1,1,0,    1,   1,   1,1};

    int clkon[] =  {0,0,0,0,0,0,0,0,   1,   1,1,1,1,1,1,1,1,   1,    1,   0,0,   1,    1,1,1,1,1,1,1,1,    1,   1,   0,0};


    // Set Vtop's input signals
    top->clk = 1;
    top->data = 1;

    contextp->timeInc(1);  // 1 timeprecision period passes...

    for (int i = 0; i < sizeof(datain)/sizeof(datain[0]); ++i) {

	top -> data = datain[i];
	
	contextp->timeInc(1);

	top->eval();

	VL_PRINTF("[%" PRId64 "] clk=%x data=%x state=%x" PRIx64 " -> word=%d\n",  contextp->time(), top->clk, top->data,top->s, top->word);

	if (clkon[i] == 1) {
		top->clk = !top->clk;
		contextp->timeInc(1);
		VL_PRINTF("[%" PRId64 "] clk=%x data=%x state=%x" PRIx64 " -> word=%d\n",  contextp->time(), top->clk, top->data,top->s, top->word);
		top->eval();
		top->clk = !top->clk;
	} else {
		contextp->timeInc(1);
		VL_PRINTF("[%" PRId64 "] clk=%x data=%x state=%x" PRIx64 " -> word=%d\n",  contextp->time(), top->clk, top->data,top->s, top->word);
		top->eval();
	}



//	tfp->dump(contextp->time());


    }

    // Final model cleanup
  //  tfp->close();
    top->final();

    // Coverage analysis (calling write only after the test is known to pass)
#if VM_COVERAGE
    Verilated::mkdir("logs");
    contextp->coveragep()->write("logs/coverage.dat");
#endif

    // Return good completion status
    // Don't use exit() or destructor won't get called
    return 0;
}
