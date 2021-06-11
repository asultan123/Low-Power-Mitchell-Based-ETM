`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:08:10 09/12/2018 
// Design Name: 
// Module Name:    mitchell_encoder 
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

module mitchell_encoder(
    input [7:0] a,
    output [9:0] c
    );

	wire [7:0] lod_res;
	wire [2:0] integer_part;
	wire [3:0] lod_shift_amt;
	reg [7:0] fraction_part;
	
	lod lod_module(a,lod_res);
	lod_enc intger(lod_res,integer_part);
	lod_shift_encoder lod_shift_encoder_module(lod_res,lod_shift_amt);
	
	always@(*) begin
		fraction_part = a << lod_shift_amt;
	end
	
	assign c = {integer_part, fraction_part[7:1]};
	

endmodule
