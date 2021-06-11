`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:31:52 09/12/2018
// Design Name:   Mitchell_lut
// Module Name:   C:/Users/USER/Desktop/asultan_NEW/HETMs/lut_tb.v
// Project Name:  HETMs
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Mitchell_lut
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lut_tb;

	// Inputs
	reg [6:0] a;
	reg [6:0] b;

	// Outputs
	wire [9:0] c;
	
	// Instantiate the Unit Under Test (UUT)
	Mitchell_lut uut (
		.a(a), 
		.b(b), 
		.c(c)
	);
	
	
	integer i;
	integer j;

	initial begin
		
		for(j = 0; j<=112; j = j + 16) begin
			for(i = 0; i<=112; i = i + 16) begin
				a = i[6:0];
				b = j[6:0];
				#100;
				$display("lut: %d", c);
			end
		end
        
		// Add stimulus here

	end
      
endmodule

