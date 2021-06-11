`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:50:37 09/11/2018 
// Design Name: 
// Module Name:    Constant_subtraction 
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
module Constant_subtraction(
    input [7:0] a, input[7:0] b,
    output [7:0] c
    );
	
	assign c = 8-a;

endmodule
