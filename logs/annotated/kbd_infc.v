//      // verilator_coverage annotation
        module kbd_infc(
 000045 	input kbdclk,
 000011 	input kbddata,
%000003 	output reg [3:0] s,
%000001 	output reg [7:0] word
        );
        
        
        
        
%000001 reg [7:0] word_r;
%000004 wire [3:0] ns;
        
%000001 initial begin
%000001 	word = 8'h0;
%000001 	word_r = 8'h0;
%000001 	s = 4'd0;
        end
        
        assign ns = (s == 4'hB) ? 4'b0001 : s + 4'b0001;
        
 000022 always@(negedge kbdclk) begin
 000022 	s <= ns;
 000022 	case (s) 
%000002 		4'h1:word_r[0] <= kbddata;	
        
%000002 		4'h2:word_r[1] <= kbddata;
        
%000002 		4'h3:word_r[2] <= kbddata;
        
%000002 		4'h4:word_r[3] <= kbddata;
        		
%000002 		4'h5:word_r[4] <= kbddata;
        		
%000002 		4'h6:word_r[5] <= kbddata;
%000002 		4'h7:word_r[6] <= kbddata;
%000002 		4'h8:word_r[7] <= kbddata;
%000002 		4'h9:word  <= word_r;
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
        
