module kbd_interface(
	input clk,
	input dvclk,
	input data,
	output [7:0] word
);

reg [3:0] counter = 4'd0;

always@(negedge dvclk) begin
	case ( counter ) 
		0: 
