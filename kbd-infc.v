module kbd_interface(
	input kbdclk,
	input kbddata,
	output [7:0] word
);

reg [7:0] word_r;
reg [3:0] s;
wire [3:0] ns;

always@ * begin
	case (s)
		4'b1011:ns = 4'b0000;
		default:ns = s + 4'b0001;
	endcase
end

always@(negedge kbdclk) begin
	if (rst) s <= 4'b0000;
	else (s) <= ns;
	case (s) 
		4'b0000:word <= 8'h0;
	       		word_r <= 8'h0;
		
		4'b0001:word_r[0] <= kbddata;	

		4'b0010:word_r[1] <= kbddata;

		4'b0011:word_r[2] <= kbddata;

		4'b0100:word_r[3] <= kbddata;
		
		4'b0101:word_r[4] <= kbddata;
		
		4'b0110:word_r[5] <= kbddata;
		4'b0111:word_r[6] <= kbddata;
		4'b1000:word_r[7] <= kbddata;
		4'b1010:word  <= wordr;
		default:;
	endcase
end
