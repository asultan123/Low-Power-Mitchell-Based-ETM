`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:07:10 09/12/2018 
// Design Name: 
// Module Name:    Mitchel 
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
module mul8_mitchell(
    input [7:0] a,
    input [7:0] b,
    output [15:0] c
    );
	 
	wire[9:0] lut_output;
	wire[9:0] operand1_log_approx;
	wire[9:0] operand2_log_approx;
//	wire[9:0] log_addition_result;
//	wire log_addition_carry_out;
//	wire[10:0] correction_addition_result;
	reg[10:0] total_addition;
//	wire total_addition_carry_out;
	
	
	mitchell_encoder operand1_log_approximator(a,operand1_log_approx);
	mitchell_encoder operand2_log_approximator(b,operand2_log_approx);
	Mitchell_lut lut_inst(operand1_log_approx[6:0],operand2_log_approx[6:0],lut_output);
	
	always@(*) begin
		total_addition = lut_output + operand1_log_approx + operand2_log_approx;
	end
	
//	RippleCarryAdder#(.n(10)) log_adder(1'b0,operand1_log_approx,operand2_log_approx,log_addition_result,log_addition_carry_out);
//	
//	RippleCarryAdder#(.n(11)) correction_adder(1'b0,{log_addition_carry_out,log_addition_result},{1'b0,lut_output},total_addition,total_addition_carry_out);

	mitchell_decoder final_decoder(total_addition,c);
	

endmodule
