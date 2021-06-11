`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:40:36 09/12/2018 
// Design Name: 
// Module Name:    mul16_Mitchell 
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
module mul16_Mitchell(
    input [15:0] a,
    input [15:0] b,
    output [31:0] c
    );
	 
	reg [7:0] upper_a;
	reg [7:0] upper_b;
	reg [7:0] lower_a;
	reg [7:0] lower_b;
	wire [15:0] upper_c;
	wire [15:0] lower_c;
	reg [15:0] reg_upper_c;
	reg [15:0] reg_lower_c;
	
	mul8_mitchell exact_replacement(upper_a,upper_b,upper_c);
	ApproxModule approx_part(lower_a,lower_b,lower_c);
	
	always@(*) begin
		if(a<=255 || b<=255) begin
			upper_a <= a[7:0];
			upper_b <= b[7:0];
			lower_a <= 0;
			lower_b <= 0;
			reg_upper_c <= 0;
			reg_lower_c <= upper_c;
		end
		else begin
			upper_a <= a[15:8];
			upper_b <= b[15:8];
			lower_a <= a[7:0];
			lower_b <= b[7:0];
			reg_upper_c <= upper_c;
			reg_lower_c <= lower_c;
		end
	end
	
	assign c = {reg_upper_c, reg_lower_c};
	


endmodule
