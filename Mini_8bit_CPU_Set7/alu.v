`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:51:58 10/24/2026 
// Design Name: 
// Module Name:    alu 
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
module alu (
	input wire [7:0] ACC,
	input wire [7:0] operand,
	input wire [2:0] alu_op,
	output reg [7:0] result
);

	always @(*) begin
	  case (alu_op)
			3'b000: result = operand;        // LDI
			3'b001: result = ACC + operand;  // ADD
			3'b010: result = ACC & operand;  // AND
			3'b011: result = ACC ^ operand;  // XOR
			3'b100: result = ACC >> 1;       // SHR

			default: result = ACC;
	  endcase
	end

endmodule
