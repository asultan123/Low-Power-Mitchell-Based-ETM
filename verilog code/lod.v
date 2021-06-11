`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:21:42 09/12/2018 
// Design Name: 
// Module Name:    lod 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module lod(
    input [7:0] a,
    output [7:0] c
    );
	 
	
	reg[7:0] or_chain;
	integer i;
	always@(*)begin
		or_chain[7] = a[7];
		for(i = 6; i>=0; i = i - 1) begin
			or_chain[i] = or_chain[i+1] | a[i];
		end
	end
	
	assign c = or_chain;

endmodule
