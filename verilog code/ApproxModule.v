`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:04:18 09/09/2018 
// Design Name: 
// Module Name:    ApproxModule 
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
module ApproxModule(
    input [7:0] a,
    input [7:0] b,
    output reg [15:0] c
    );

integer i;

always@(*) begin
	c[15] = a[7] | b[7];
	for(i=14;i>=8; i = i-1) begin
		c[i] = a[i-8] | b[i-8] | c[i+1];
	end
	for(i=7;i>=0;i=i-1) begin
		c[i] = c[8];
	end
end


endmodule
