`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:52:16 10/24/2026 
// Design Name: 
// Module Name:    accumulator 
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
module accumulator (
    input wire CLK,
    input wire RESET,
    input wire acc_write,
    input wire [7:0] result,
    output reg [7:0] ACC,
    output reg Z
);

	always @(posedge CLK) begin
		if (RESET) begin
			ACC <= 8'h00;
			Z <= 1'b1;
		end
		else if (acc_write) begin
			ACC <= result;
			Z <= (result == 8'h00);
		end
	end

endmodule
