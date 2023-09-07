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

assign ns = (s == 4'hB) ? 4'b0001 : s + 4'b0001;

always@(negedge kbdclk) begin
	s <= ns;
	case (s) 
		4'h1:word_r[0] <= kbddata;	

		4'h2:word_r[1] <= kbddata;

		4'h3:word_r[2] <= kbddata;

		4'h4:word_r[3] <= kbddata;
		
		4'h5:word_r[4] <= kbddata;
		
		4'h6:word_r[5] <= kbddata;
		4'h7:word_r[6] <= kbddata;
		4'h8:word_r[7] <= kbddata;
		4'h9:word  <= word_r;
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
