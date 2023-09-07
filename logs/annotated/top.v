//      // verilator_coverage annotation
 000045 module top (input clk,
 000011 	input data,
%000003 	output reg [3:0] s,
%000001 	output reg [7:0] word,
%000000 	output reg [2:0] note
        );	
        
        
        	kbd_infc kbd_infc (
        		.kbdclk(clk),
        		.kbddata(data),
        		.s(s),
        		.word(word)
        	);
        
        	mono_out mono_out (
        		.keycode(word),
        		.note(note)
        	);
        
        
        endmodule
        
