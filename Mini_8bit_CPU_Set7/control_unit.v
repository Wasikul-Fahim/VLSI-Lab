`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:51:29 10/24/2026 
// Design Name: 
// Module Name:    control_unit 
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

module control_unit (
    input wire [3:0] opcode,
    output reg acc_write,
    output reg [2:0] alu_op
);

	always @(*) begin
		acc_write = 1'b0;
		alu_op = 3'b111;

		case (opcode)
			4'h1: begin
				 acc_write = 1'b1;
				 alu_op = 3'b000; // LDI
			end

			4'h2: begin
				 acc_write = 1'b1;
				 alu_op = 3'b001; // ADD
			end

			4'h4: begin
				 acc_write = 1'b1;
				 alu_op = 3'b010; // AND
			end
			
			4'h6: begin
				 acc_write = 1'b1;
				 alu_op = 3'b011; // XOR
			end

			4'h9: begin
				 acc_write = 1'b1;
				 alu_op = 3'b100; // SHR
			end

			default: begin
				 acc_write = 1'b0;
				 alu_op = 3'b111; // NOP
			end
		endcase
	end
			
endmodule
