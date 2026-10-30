`timescale 1ns / 1ps

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
