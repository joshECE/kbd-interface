//      // verilator_coverage annotation
 000039 module top (input clk,
%000009 	input data,
%000002 	output reg [3:0] s,
%000001 	output reg [7:0] word
        );	
        
        
        	kbd_infc kbd_infc (
        		.kbdclk(clk),
        		.kbddata(data),
        		.s(s),
        		.word(word)
        	);
        
        
        endmodule
        
