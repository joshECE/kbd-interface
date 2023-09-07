//      // verilator_coverage annotation
        module mono_out(
%000001 	input [7:0] keycode,
%000000 	output [2:0] note
        );
        
%000001 reg [2:0] note_r = 3'd0;
%000000 reg br = 1'b0;
        
        assign note = note_r;
        
%000003 always @ (keycode) begin
%000000 	if (br == 1'b0) begin
%000003 		case(keycode)
%000000 			8'h16:note_r <= 3'd1; // Keycode for 1
%000000 			8'h1E:note_r <= 3'd2; // 2
%000000 			8'h26:note_r <= 3'd3; // 3
%000000 			8'hF0:br  <= 1'd1;
%000003 			default:;
        		endcase
%000000 	end else begin
%000000 		br <= 1'b0;
%000000 		case(keycode)
%000000 			8'h16:begin
%000000 				if (note_r == 3'd1) begin
%000000 					note_r <= 3'd0;
        				end
        			end
%000000 			8'h1E:begin
%000000 				if (note_r == 3'd2) begin
%000000 					note_r <= 3'd0;
        				end
        			end
%000000 			8'h26:begin
%000000 				if (note_r == 3'd3) begin
%000000 					note_r <= 3'd0;
        				end
        			end
%000000 			8'hF0:br <= 1'b1;
%000000 			default:;
        		endcase
        	end
        end
        endmodule
        
