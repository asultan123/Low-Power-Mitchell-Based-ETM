`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:24:13 09/09/2018
// Design Name:   ApproxModule
// Module Name:   C:/Users/USER/Desktop/asultan_NEW/HETMs/ApproxModule_tb.v
// Project Name:  HETMs
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ApproxModule
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ApproxModule_tb;

	// Inputs
	reg [7:0] a;
	reg [7:0] b;

	// Outputs
	wire [15:0] c;

	// Instantiate the Unit Under Test (UUT)
	ApproxModule uut (
		.a(a), 
		.b(b), 
		.c(c)
	);

	initial begin
		// Initialize Inputs
		a = 8'b00101001;
		b = 8'b00010000;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

