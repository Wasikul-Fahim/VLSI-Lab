`timescale 1ns / 1ps
module tb_control_unit;
    reg  [3:0] opcode;
    wire       acc_write;
    wire [2:0] alu_op;
    integer errors = 0;

    control_unit DUT (.opcode(opcode), .acc_write(acc_write), .alu_op(alu_op));

    task check(input [3:0] op, input exp_w, input [2:0] exp_alu);
        begin
            opcode = op; #10;
            if (acc_write !== exp_w || alu_op !== exp_alu) begin
                $display("FAIL opcode=%h acc_write=%b alu_op=%b (expected %b %b)",
                         op, acc_write, alu_op, exp_w, exp_alu);
                errors = errors + 1;
            end else
                $display("PASS opcode=%h acc_write=%b alu_op=%b", op, acc_write, alu_op);
        end
    endtask

    integer i;
    initial begin
        check(4'h1, 1'b1, 3'b000);   // LDI
        check(4'h2, 1'b1, 3'b001);   // ADD
        check(4'h4, 1'b1, 3'b010);   // AND
        check(4'h6, 1'b1, 3'b011);   // XOR
        check(4'h9, 1'b1, 3'b100);   // SHR
        // every opcode not in Set 7 must behave as NOP
        for (i = 0; i < 16; i = i + 1)
            if (i != 1 && i != 2 && i != 4 && i != 6 && i != 9)
                check(i[3:0], 1'b0, 3'b111);
        if (errors == 0) $display("control_unit: ALL TESTS PASSED");
        else             $display("control_unit: %0d ERRORS", errors);
        $finish;
    end
endmodule