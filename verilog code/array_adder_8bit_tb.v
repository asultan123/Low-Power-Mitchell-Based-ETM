// Verilog test fixture created from schematic C:\Users\USER\Desktop\asultan_NEW\HETMs\array_adder_8bit.sch - Mon Sep 10 23:59:09 2018

`timescale 1ns / 1ps

module array_adder_8bit_array_adder_8bit_sch_tb();

// Inputs
   reg [7:0] A;
   reg [7:0] b;

// Output
   wire [15:0] s;

// Bidirs

integer i;
integer temp1;
integer temp2;
reg[15:0] temp3;

// Instantiate the UUT
   array_adder_8bit UUT (
		.A(A), 
		.b(b), 
		.s(s)
   );

	initial begin
	
		A = 0;
		b = 0;
		temp1 = 0;
		temp2 = 0;
		temp3 = 0;
		i = 0;
		#100
		for(i=0; i<1000; i=i+1) begin

			temp1 = $random;
			temp2 = $random;
			
			if(temp1<0) begin
				temp1 = -1*temp1;
			end
			if(temp2<0) begin
				temp2 = -1*temp2;
			end
			
			temp1 = temp1%255;
			temp2 = temp2%255;
			temp3 = temp1*temp2;
			
			A = temp1;
			b = temp2;
			
			#100

			
			if(s!=temp3) begin
				$display("error");
			end

			
		end
			
	end
endmodule
