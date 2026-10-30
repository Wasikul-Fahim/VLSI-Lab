`timescale 1ns / 1ps


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
