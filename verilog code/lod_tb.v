`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:25:10 09/12/2018
// Design Name:   lod
// Module Name:   C:/Users/USER/Desktop/asultan_NEW/HETMs/lod_tb.v
// Project Name:  HETMs
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lod
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lod_tb;

	// Inputs
	reg [7:0] a;

	// Outputs
	wire [7:0] c;
	wire [3:0] temp;

	// Instantiate the Unit Under Test (UUT)
	lod uut (
		.a(a), 
		.c(c)
	);
	
	lod_shift_encoder encoder(c,temp);


	initial begin
		for(a=0;a<=255;a=a+1) begin
			#100
			if(a>=128) begin
				if(c!=8'b1111_1111) begin
					$display("invalid output %d at input %d .",c,a);
				end 
			end
			else if (a>=64) begin
				if(c!=8'b0111_1111) begin
					$display("invalid output %d at input %d .",c,a);
				end
			end 
			else if (a>=32) begin
				if(c!=8'b0011_1111) begin
					$display("invalid output %d at input %d .",c,a);
				end
			end 
			else if (a>=16) begin
				if(c!=8'b0001_1111) begin
					$display("invalid output %d at input %d .",c,a);
				end
			end 
			else if (a>=8) begin
				if(c!=8'b0000_1111) begin
					$display("invalid output %d at input %d .",c,a);
				end
			end 
			else if (a>=4) begin
				if(c!=8'b0000_0111) begin
					$display("invalid output %d at input %d .",c,a);
				end
			end 
			else if (a>=2) begin
				if(c!=8'b0000_0011) begin
					$display("invalid output %d at input %d .",c,a);
				end
			end
			else if (a>=1) begin
				if(c!=8'b0000_0001) begin
					$display("invalid output %d at input %d .",c,a);
				end
			end 
			else begin
				if(c!=8'b0000_0000) begin
					$display("invalid output %d at input %d .",c,a);
				end
			end
				
		end

	end
      
endmodule

