`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:21:58 09/09/2018 
// Design Name: 
// Module Name:    mul16_evo312 
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
module mul16_evo312(
    input [15:0] a,
    input [15:0] b,
    output [31:0] c
    );

	mul8_312 exact_replacement(a[15:8],b[15:8],c[31:16]);
	ApproxModule approx_part(a[7:0],b[7:0],c[15:0]);

endmodule
