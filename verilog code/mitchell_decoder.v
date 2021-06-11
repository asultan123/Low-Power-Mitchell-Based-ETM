`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:08:34 09/12/2018 
// Design Name: 
// Module Name:    mitchell_decoder 
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
module mitchell_decoder(
    input [10:0] a,
    output [15:0] c
    );
	 
	reg[3:0] integer_part;
	reg[6:0] fractional_part;
	reg[15:0] fractional_part_extended;
	reg[15:0] characteristic;
	reg[15:0] mantissa;
	reg[3:0] shift_amt;
	integer i;
	
	always@(*) begin
		integer_part = a[10:7];
		fractional_part = a[6:0];
		fractional_part_extended = {8'b0,fractional_part,1'b0};
		
		for(i=0; i<16; i = i+1) begin
			if(integer_part == i) begin
				characteristic[i] = 1;
			end
			else begin
				characteristic[i] = 0;
			end
		end
		
		if(integer_part >= 8) begin
			shift_amt = {1'b0,integer_part[2:0]};
			mantissa = fractional_part_extended << shift_amt;
		end
		else begin
		
			shift_amt[3] = !(integer_part[2] | integer_part[1] | integer_part[0]); 
			
			shift_amt[2] = !integer_part[2] & integer_part[0] | !integer_part[2] 
			& integer_part[1] | integer_part[2] & !integer_part[1] &!integer_part[0];
			
			shift_amt[1] = integer_part[1] ^ integer_part[0];
			
			shift_amt[0] = integer_part[0];
			
			mantissa = fractional_part_extended >> shift_amt;
		end
	end
	
	assign c = characteristic | mantissa;

endmodule
