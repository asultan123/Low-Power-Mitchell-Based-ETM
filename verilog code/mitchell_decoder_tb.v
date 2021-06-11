`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:09:19 09/12/2018
// Design Name:   mitchell_decoder
// Module Name:   C:/Users/USER/Desktop/asultan_NEW/HETMs/mitchell_decoder_tb.v
// Project Name:  HETMs
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mitchell_decoder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mitchell_decoder_tb;

	// Inputs
	reg [10:0] a;
	
	integer               file_outputs    ; // var to see if file exists 
	integer               scan_outputs    ; // captured text handler
	reg[31:0] 				 expected_result;
	integer i;

	// Outputs
	wire [15:0] c;

	// Instantiate the Unit Under Test (UUT)
	mitchell_decoder uut (
		.a(a), 
		.c(c)
	);

	initial 
	begin
		a = 0;

		file_outputs = $fopen("C:/Users/USER/Desktop/asultan_NEW/HETMs/TestVectorFiles/antilog_approx_out.txt", "r"); 
		
		if (file_outputs == 0) begin               
			$display("data_file handle was NULL");
			$finish;
		end
	end
	
	initial begin

		for(i = 1; i<2048; i = i + 1)begin
			if (!$feof(file_outputs)) 
			begin
				a = i[10:0];
				scan_outputs = $fscanf(file_outputs, "%d\n", expected_result);     //Outputs line text
				#100

				if(c!=expected_result)begin
					$display("mismatch between expected result and actual result");
				end
			end
		end
	end
endmodule

