`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:52:44 10/24/2026 
// Design Name: 
// Module Name:    cpu_tb 
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
module cpu_tb;

    reg CLK;
    reg RESET;

    wire [7:0] Q;
    wire Z;
    wire [3:0] PC;

    // Instantiate the CPU
    cpu_top DUT (
        .CLK(CLK),
        .RESET(RESET),
        .Q(Q),
        .Z(Z),
        .PC(PC)
    );

    // Generate a 10 ns clock
	 initial begin
        CLK = 1'b0;
    end

    always begin
        #5 CLK = ~CLK;
    end    
	 
	 // Apply reset, then execute six instructions
    initial begin
        RESET = 1'b1;

        // Hold reset across the first rising edge
        #12 RESET = 1'b0;

        // Wait for six instruction execution edges
        #60;

        $display("Simulation completed.");
    end

	 // Display the CPU state
    initial begin
        $monitor(
            "Time=%0t RESET=%b PC=%h Q=%h Z=%b",
            $time, RESET, PC, Q, Z
        );
    end

endmodule
