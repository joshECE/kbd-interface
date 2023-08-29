//      // verilator_coverage annotation
        module kbd_infc(
 000039 	input kbdclk,
%000009 	input kbddata,
%000002 	output reg [3:0] s,
%000001 	output reg [7:0] word
        );
        
        
        
        
%000001 reg [7:0] word_r;
%000003 wire [3:0] ns;
        
%000001 initial begin
%000001 	word = 8'h0;
%000001 	word_r = 8'h0;
%000001 	s = 4'd0;
        end
        
        assign ns = (s == 4'b1100) ? 4'b0001 : s + 4'b0001;
        
 000019 always@(negedge kbdclk) begin
 000019 	s <= ns;
 000019 	case (s) 
%000002 		4'b0001:word_r[0] <= kbddata;	
        
%000002 		4'b0010:word_r[1] <= kbddata;
        
%000002 		4'b0011:word_r[2] <= kbddata;
        
%000002 		4'b0100:word_r[3] <= kbddata;
        		
%000002 		4'b0101:word_r[4] <= kbddata;
        		
%000002 		4'b0110:word_r[5] <= kbddata;
%000001 		4'b0111:word_r[6] <= kbddata;
%000001 		4'b1000:word_r[7] <= kbddata;
%000001 		4'b1001:word  <= word_r;
%000004 		default:;
        	endcase
        end
        
        
%000001    initial begin
%000000       if ($test$plusargs("trace") != 0) begin
%000001          $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
%000001          $dumpfile("logs/vlt_dump.vcd");
%000001          $dumpvars();
              end
%000001       $display("[%0t] Model running...\n", $time);
           end
        
        
        
        endmodule
        
