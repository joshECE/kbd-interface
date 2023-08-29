The point of this project is to implement a PS/2 protocol betweena keyboard and a Nexys4DDR FPGA development board. This will be demonstrated using the boards built-in 7 segment display, where all of the keys being pressed by the user will be simultaneously printed on the display.


The initial stage will be to write a design file that allows the board to read the data from the keyboard, byte by byte. 

The following is the specification of this simple module:

Name: data-read.v

IO:
Input(s):
	kbd_clk
	kbd_data

Output(s):
	[7:0] pkt_value

Internal:
	[7:0] pkt_value_reg

Code description: 

This code won't perform any connection checks on the keyboard, I will assume that the keyboard is working as expected.

A intermediate register will be used to store the data as it comes in.

While the kbd_data/clk is high, nothing will happen. Wait until kbd_clk is pulled low. Don't do anything on the first negative clock edge, but on the second, sample the bit on the data line. Sample 8 bits of data. At each negedge, add the bits value to the corresponding bit in pkt_value_reg, starting from the LSB.
So... at negedge 1 do nothing, at negedge 2 pkt_value_reg[0] <= kbd_data, at negedge 3, pkt_value_reg[1] <= kbd_data and so on. 
After this there are 2 more clock cycles for a parity bit and a stop bit but these will be ignored. I just need to make sure that the last 2 clock cycles don't trigger the next cycle of data measuring, should be as simple as having a counter from 0 to 10 (11 steps). 

We need a state encoder
   
