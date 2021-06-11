`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:13:53 09/11/2018 
// Design Name: 
// Module Name:    Mitchell_lut 
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
module Mitchell_lut(
    input [6:0] a,
    input [6:0] b,
    output [9:0] c
    );
	 
	 reg[9:0] res;
	 reg[2:0] row;
	 reg[2:0] col;
	 
	 always@(*)
	 begin
	 
		if(a<16)begin
			row = 0;
		end
		else if (a<32)begin
			row = 1;
		end
		else if (a<48) begin
			row = 2;
		end
		else if (a<64) begin
			row = 3;
		end
		else if (a<80) begin
			row = 4;
		end 
		else if (a<96) begin
			row = 5;
		end
		else if (a<112) begin
			row = 6;
		end 
		else begin
			row = 7;
		end
		
		if(b<16)begin
			col = 0;
		end
		else if (b<32)begin
			col = 1;
		end
		else if (b<48) begin
			col = 2;
		end
		else if (b<64) begin
			col = 3;
		end
		else if (b<80) begin
			col = 4;
		end 
		else if (b<96) begin
			col = 5;
		end
		else if (b<112) begin
			col = 6;
		end 
		else begin
			col = 7;
		end
		
		case ({row,col})
		
			{3'b000,3'b000}  : res = 1;
			{3'b000,3'b001}  : res = 2;
			{3'b000,3'b010}  : res = 3;
			{3'b000,3'b011}  : res = 3;
			{3'b000,3'b100}  : res = 4;
			{3'b000,3'b101}  : res = 4;
			{3'b000,3'b110}  : res = 5;
			{3'b000,3'b111}  : res = 3;

			{3'b001,3'b000}  : res =  2;
			{3'b001,3'b001}  : res =  5;
			{3'b001,3'b010}  : res =  7;
			{3'b001,3'b011}  : res =  9;
			{3'b001,3'b100}  : res = 11;
			{3'b001,3'b101}  : res = 12;
			{3'b001,3'b110}  : res = 12;
			{3'b001,3'b111}  : res =  4;

			{3'b010,3'b000}  : res =  3;
			{3'b010,3'b001}  : res =  7;
			{3'b010,3'b010}  : res = 11;
			{3'b010,3'b011}  : res = 14;
			{3'b010,3'b100}  : res = 16;
			{3'b010,3'b101}  : res = 17;
			{3'b010,3'b110}  : res =  8;
			{3'b010,3'b111}  : res =  3;

			{3'b011,3'b000}  : res =  3;
			{3'b011,3'b001}  : res =  9;
			{3'b011,3'b010}  : res = 14;
			{3'b011,3'b011}  : res = 18;
			{3'b011,3'b100}  : res = 20;
			{3'b011,3'b101}  : res = 14;
			{3'b011,3'b110}  : res =  8;
			{3'b011,3'b111}  : res =  2;

			{3'b100,3'b000}  : res =  4;
			{3'b100,3'b001}  : res = 11;
			{3'b100,3'b010}  : res = 16;
			{3'b100,3'b011}  : res = 20;
			{3'b100,3'b100}  : res = 15;
			{3'b100,3'b101}  : res = 10;
			{3'b100,3'b110}  : res =  5;
			{3'b100,3'b111}  : res =  2;

			{3'b101,3'b000}  : res =  4;
			{3'b101,3'b001}  : res = 12;
			{3'b101,3'b010}  : res = 17;
			{3'b101,3'b011}  : res = 14;
			{3'b101,3'b100}  : res = 10;
			{3'b101,3'b101}  : res =  6;
			{3'b101,3'b110}  : res =  4;
			{3'b101,3'b111}  : res =  1;

			{3'b110,3'b000}  : res =  5;
			{3'b110,3'b001}  : res = 12;
			{3'b110,3'b010}  : res = 10;
			{3'b110,3'b011}  : res =  8;
			{3'b110,3'b100}  : res =  5;
			{3'b110,3'b101}  : res =  4;
			{3'b110,3'b110}  : res =  2;
			{3'b110,3'b111}  : res =  1;

			{3'b111,3'b000}  : res = 3;
			{3'b111,3'b001}  : res = 4;
			{3'b111,3'b010}  : res = 3;
			{3'b111,3'b011}  : res = 2;
			{3'b111,3'b100}  : res = 2;
			{3'b111,3'b101}  : res = 1;
			{3'b111,3'b110}  : res = 1;
			{3'b111,3'b111}  : res = 0;

			default : res = 0; 
		endcase
	 end
	 
	 assign c = res;
	 


endmodule
