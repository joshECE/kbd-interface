module top (input clk,
	input data,
	output reg [3:0] s,
	output reg [7:0] word
);	


	kbd_infc kbd_infc (
		.kbdclk(clk),
		.kbddata(data),
		.s(s),
		.word(word)
	);


endmodule
