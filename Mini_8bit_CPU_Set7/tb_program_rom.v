`timescale 1ns / 1ps
module tb_program_rom;
    reg  [3:0]  PC;
    wire [11:0] instruction;
    integer errors = 0;

    program_rom DUT (.PC(PC), .instruction(instruction));

    task check(input [3:0] addr, input [11:0] expected);
        begin
            PC = addr; #10;
            if (instruction !== expected) begin
                $display("FAIL PC=%0d instr=%h expected=%h", addr, instruction, expected);
                errors = errors + 1;
            end else
                $display("PASS PC=%0d instr=%h", addr, instruction);
        end
    endtask

    integer i;
    initial begin
        check(4'd0, 12'h1F3);   // LDI F3
        check(4'd1, 12'h43C);   // AND 3C
        check(4'd2, 12'h611);   // XOR 11
        check(4'd3, 12'h900);   // SHR
        check(4'd4, 12'h230);   // ADD 30
        check(4'd5, 12'h640);   // XOR 40
        for (i = 6; i < 16; i = i + 1)
            check(i[3:0], 12'h000);   // unused locations = NOP
			if (errors == 0) $display("program_rom: ALL TESTS PASSED");
        else             $display("program_rom: %0d ERRORS", errors);
        $finish;
    end
endmodule
			