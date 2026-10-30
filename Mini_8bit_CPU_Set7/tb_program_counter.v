`timescale 1ns / 1ps
module tb_program_counter;
    reg CLK, RESET;
    wire [3:0] PC;
    integer errors = 0;

    program_counter DUT (.CLK(CLK), .RESET(RESET), .PC(PC));

    initial CLK = 1'b0;
    always #5 CLK = ~CLK;

    task check(input [3:0] expected);
        begin
            if (PC !== expected) begin
                $display("FAIL t=%0t PC=%h expected=%h", $time, PC, expected);
                errors = errors + 1;
            end else
                $display("PASS t=%0t PC=%h", $time, PC);
        end
    endtask

    integer i;
    initial begin
        RESET = 1'b1;
        @(posedge CLK); #1; check(4'd0);          // reset clears PC
        RESET = 1'b0;
        for (i = 1; i <= 17; i = i + 1) begin     // count up and wrap 15 -> 0
            @(posedge CLK); #1; check(i % 16);
        end
		  RESET = 1'b1;                             // reset in the middle of a run
        @(posedge CLK); #1; check(4'd0);
        RESET = 1'b0;
        @(posedge CLK); #1; check(4'd1);
        if (errors == 0) $display("program_counter: ALL TESTS PASSED");
        else             $display("program_counter: %0d ERRORS", errors);
        $finish;
    end
endmodule