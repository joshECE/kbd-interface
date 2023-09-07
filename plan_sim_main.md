# Design of sim_main.cpp

This file is used to simulate the project's verilog files by passing inputs to those files and reading/manipulating their outputs.

Currently the file under test is kbd_infc.v and it is meant to take an 11 bit data packet when an input clock starts cycling. It samples the data one bit at a time and after the 11bits have been passed to the module, it then outputs the 8 useful data bits (bits 2 to 10). 

sim_main.cpp should generate an accurate clk/data waveform equal to what a real PS/2 keyboard would.

the code should generate a clock signal that remains idle at some points in time and oscillates at others. in the time that it oscillates, it must do so in multiples of 11 cycles (22 on/offs). 

data must be transmitted during the phases that the clock is running. Data values are sampled at the negative edge of the clock, so they must be sent as inputs half a cycle before the fall of the clock (in verilator). So if we assume the clock is starting on its negative edge, then data transmission must start half a clock cycle before the clock.
