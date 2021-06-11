`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:42:01 09/12/2018 
// Design Name: 
// Module Name:    lod_enc 
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
module lod_enc(
    input [7:0] a,
    output [2:0] c
    );
	 
	 reg[2:0] res;
	 always@(*) begin
		case(a) 
			8'b00000001 : res = 0;
			8'b00000011 : res = 1;
			8'b00000111 : res = 2;
			8'b00001111 : res = 3;
			8'b00011111 : res = 4;
			8'b00111111 : res = 5;
			8'b01111111 : res = 6;
			8'b11111111 : res = 7;
			default : res = 0;
		endcase
	 end
	 
	 assign c = res;


endmodule
