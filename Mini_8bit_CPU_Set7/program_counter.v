`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:50:54 10/24/2026 
// Design Name: 
// Module Name:    program_counter 
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
module program_counter(
	input wire CLK,
	input wire RESET,
	output reg [3:0] PC
);

	always @(posedge CLK) begin
		if (RESET) 
			PC <= 4'd0;
		else 
			PC <= 1'b1;
	end


endmodule
