## To do:

- make a good c++ model that passes a realistic clk/data waveform to top.v --- DONE
- Test the current version of kbd_infc.v --- DONE


07/09/23
- lets start with playing one note MONO. so basically the output of the module should be equal to the most recently pressed key on the keyboard. If the keys break code is pressed and no other keycode comes after it then output nothing. --> I have written the verilog file for this. But not been able to test it yet.
- This module the first module written that takes a clock signal from the host. I need to update my simulation to handle two clock signals. And im not sure how to simulate this as one is about 5000x slower than the other.
