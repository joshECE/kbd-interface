module mono_out(
	input clk,
	input [7:0] keycode,
	output [2:0] note
);

reg [2:0] note_r = 3'd0;
reg br = 1'b0;

assign note = note_r;

always @ (posedge clk) begin
	if (br == 1'b0) begin
		case(keycode)
			8'h16:note_r <= 3'd1; // Keycode for 1
			8'h1E:note_r <= 3'd2; // 2
			8'h26:note_r <= 3'd3; // 3
			8'hF0:br  <= 1'd1;
			default:;
		endcase
	end else begin
		br <= 1'b0;
		case(keycode)
			8'h16:begin
				if (note_r == 3'd1) begin
					note_r <= 3'd0;
				end
			end
			8'h1E:begin
				if (note_r == 3'd2) begin
					note_r <= 3'd0;
				end
			end
			8'h26:begin
				if (note_r == 3'd3) begin
					note_r <= 3'd0;
				end
			end
			8'hF0:br <= 1'b1;
			default:;
		endcase
	end
end
endmodule
