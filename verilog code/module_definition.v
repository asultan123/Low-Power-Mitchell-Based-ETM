`timescale 1ns / 1ps

/*
AND2X1
AOI21X1
BUFX2
FAX1
HAX1
INVX1
MUX2X1
NAND2X1
NAND3X1
NOR2X1
NOR3X1
OAI21X1
OR2X1
XNOR2X1
XOR2X1

*/

module AND2X1(input A, input B, output Y );
	 assign Y = A & B;
endmodule

module AOI21X1( input A, input B, input C, output Y );
	assign Y = ~((A & B) | C);
endmodule

module BUFX2(input A, output Y );
	 assign Y = A;
endmodule

module FAX1( input A, input B, input C, output YS, output YC );
	assign YS = (A ^ B) ^ C;
	assign YC = (A & B) | (B & C) | (A & C);
endmodule

module HAX1( input A, input B, output YS, output YC );
	assign YS = A ^ B;
	assign YC = A & B;
endmodule

module INVX1(input A, output Y );
	 assign Y = ~A;
endmodule

module MUX2X1( input A, input B, input S, output Y );
	assign Y = (A & ~S) | (B & S);
endmodule


module NAND2X1(input A, input B, output Y );
	 assign Y = ~(A & B);
endmodule

module NAND3X1(input A, input B, input C, output Y );
	 assign Y = ~((A & B) & C);
endmodule

module NOR2X1(input A, input B, output Y );
	 assign Y = ~(A | B);
endmodule

module NOR3X1(input A, input B, input C, output Y );
	 assign Y = ~((A | B) | C);
endmodule

module OAI21X1( input A, input B, input C, output Y );
	assign Y = ~((A | B) & C);
endmodule

module OR2X1(input A, input B, output Y );
	 assign Y = A | B;
endmodule

module XNOR2X1(input A, input B, output Y );
	 assign Y = ~(A ^ B);
endmodule

module XOR2X1(input A, input B, output Y );
	 assign Y = A ^ B;
endmodule



 