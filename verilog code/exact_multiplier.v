`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 	
// Create Date:    16:43:26 09/26/2017 
// Design Name: 
// Module Name:    MULT32 
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
module mult_32#(parameter operandSize = 16)(a,b,c);

parameter colNum = operandSize;
parameter rowNum = operandSize;
parameter numOfWires = rowNum*colNum;

	input[operandSize-1:0] a,b;
	output[operandSize*2-1:0] c;
	wire[numOfWires-1:0] carry,sum;

	generate
		genvar i;
		//first layer is just ands
		//first cell of first layer
		multCell init(a[0],b[0],0,0,sum[0],carry[0]);
		for (i = 1; i < colNum; i = i + 1) begin : firstRow
			multCell init(a[i],b[0],0,carry[i-1],sum[i],carry[i]);
		end
		
		//rest of the layers
		for (i = 1; i < rowNum; i = i + 1) begin : rows
			genvar j;
			//first cell of each layer
			multCell init(a[0],b[i],sum[(i-1)*colNum+1],0,sum[i*colNum],carry[i*colNum]);
			for (j = 1; j < colNum; j = j + 1) begin : columns
				if (j == colNum-1)
					multCell init(a[j],b[i],carry[(i-1)*colNum+j],carry[i*colNum+(j-1)],sum[i*colNum+j],carry[i*colNum+j]);
				else
					multCell init(a[j],b[i],sum[(i-1)*colNum+(j+1)],carry[i*colNum+(j-1)],sum[i*colNum+j],carry[i*colNum+j]);
			end
		end
	endgenerate
	

	//get output
	for (i = 0; i < rowNum; i = i + 1) begin
		assign c[i] = sum[i*colNum];
  	end 
	for (i = 0; i < colNum-1; i = i + 1) begin
		assign c[colNum+i] = sum[(rowNum-1)*colNum+(i+1)];
  	end
	assign c[colNum+rowNum-1] = carry[numOfWires-1];
	
endmodule

module multCell(a,b,sumIn,carryIn,sumOut,carryOut);
//inputs
input a,b,carryIn,sumIn; 
//outputs
output sumOut,carryOut;
wire andOutput;

and initAnd(andOutput,a,b);
fulladder initfa(andOutput,sumIn,carryIn,sumOut,carryOut);

endmodule

module fulladder(a,b,c,s,ca);
//inputs
input a,b,c;
//outputs
output s,ca;

//full adder assignments.
assign s=a^b^c;
assign ca=((a&b)|(b&c)|(c&a));
endmodule 
