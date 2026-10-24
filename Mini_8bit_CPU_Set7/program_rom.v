`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:51:07 10/24/2026 
// Design Name: 
// Module Name:    program_rom 
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
module program_rom(
	input wire [3:0] PC,
	output reg [11:0] instruction
);

	always @(*) begin
		case (PC)
			4'd0: instruction = 12'h1F3; // LDI F3
			4'd1: instruction = 12'h43C; // AND 3C
			4'd2: instruction = 12'h611; // XOR 11
			4'd3: instruction = 12'h900; // SHR
			4'd4: instruction = 12'h230; // ADD 30
			4'd5: instruction = 12'h640; // XOR 40

			default: instruction = 12'h000; // NOP
		endcase
    end

endmodule
