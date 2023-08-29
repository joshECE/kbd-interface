module kbd_infc(
	input kbdclk,
	input kbddata,
	output reg [3:0] s,
	output reg [7:0] word
);




reg [7:0] word_r;
wire [3:0] ns;

initial begin
	word = 8'h0;
	word_r = 8'h0;
	s = 4'd0;
end

assign ns = (s == 4'b1100) ? 4'b0001 : s + 4'b0001;

always@(negedge kbdclk) begin
	s <= ns;
	case (s) 
		4'b0001:word_r[0] <= kbddata;	

		4'b0010:word_r[1] <= kbddata;

		4'b0011:word_r[2] <= kbddata;

		4'b0100:word_r[3] <= kbddata;
		
		4'b0101:word_r[4] <= kbddata;
		
		4'b0110:word_r[5] <= kbddata;
		4'b0111:word_r[6] <= kbddata;
		4'b1000:word_r[7] <= kbddata;
		4'b1001:word  <= word_r;
		default:;
	endcase
end


   initial begin
      if ($test$plusargs("trace") != 0) begin
         $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
         $dumpfile("logs/vlt_dump.vcd");
         $dumpvars();
      end
      $display("[%0t] Model running...\n", $time);
   end



endmodule
