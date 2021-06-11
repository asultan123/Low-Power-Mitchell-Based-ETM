`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:57:18 09/12/2018 
// Design Name: 
// Module Name:    lod_shift_encoder 
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
module lod_shift_encoder(
    input [7:0] a,
    output [3:0] c
    );
	 
	 assign c[0] = !a[2] & a[1] | !a[4] & a[3] | !a[6] & a[5] | a[7];
	 assign c[1] = !a[3] & a[1] | !a[7] & a[5];
	 assign c[2] = !a[5] & a[1];
	 assign c[3] = !a[1];
	 
 endmodule
