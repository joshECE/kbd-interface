module top (
	input clk,
	input kbdclk,
	input data,
	output reg [3:0] s,
	output reg [7:0] word,
	output reg [2:0] note
);	


	kbd_infc kbd_infc (
		.kbdclk(kbdclk),
		.kbddata(data),
		.s(s),
		.word(word)
	);

	mono_out mono_out (
		.clk(clk)
		.keycode(word),
		.note(note)
	);


endmodule
