`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:42:07 09/09/2018
// Design Name:   mul16_evo474
// Module Name:   C:/Users/USER/Desktop/asultan_NEW/HETMs/mul16_evo474_tb.v
// Project Name:  HETMs
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mul16_evo474
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mul16_evo474_tb;

	// Inputs
	reg [15:0] a;
	reg [15:0] b;

	// Outputs
	wire [31:0] c;

	// Instantiate the Unit Under Test (UUT)
	mul16_evo474 uut (
		.a(a), 
		.b(b), 
		.c(c)
	);

	integer               file_outputs    ; // var to see if file exists 
	integer               scan_outputs    ; // captured text handler
	integer               file_inputs     ; // var to see if file exists
	integer               scan_inputs     ; // captured text handler
	reg[31:0] expected_result;
	integer i = 1000;


	initial 
	begin
		a = 0;
		b = 0;
		scan_inputs = 0;
		$dumpfile ("xpower_tb.vcd");
		$dumpvars ("xpower_tb.uut");
		file_inputs = $fopen("C:/Users/USER/Desktop/asultan_NEW/HETMs/TestVectorFiles/input_evo474.txt", "r"); 

		if (file_outputs == 0) begin              
			$display("data_file handle was NULL"); 
			$finish;
		end
	
		file_outputs = $fopen("C:/Users/USER/Desktop/asultan_NEW/HETMs/TestVectorFiles/output_evo474.txt", "r"); 
		
		if (file_inputs == 0) begin               
			$display("data_file handle was NULL");
			$finish;
		end
	end
	
	initial
	
	begin


		for(i = 0; i<1000;i = i+1) begin
			if (!$feof(file_outputs)) 
			begin

				scan_inputs = $fscanf(file_inputs, "%d %d\n", a,b);        //Inputs Line text
				scan_outputs = $fscanf(file_outputs, "%d\n", expected_result);     //Outputs line text
				#100

//				$display ("Line :[inputs: %d, %d _ software: %d _ hardware: %d ]",a,b, expected_result,c);  
				if(c!=expected_result)begin
					$display("mismatch between expected result and actual result");
				end
			end
			else
			begin
			#100

			$finish;
			$fclose(file_outputs); //Closing files just in case to prevent wasting memory
			$fclose(file_inputs);

			end
		end
			#100000 $finish;
	end
       
endmodule

