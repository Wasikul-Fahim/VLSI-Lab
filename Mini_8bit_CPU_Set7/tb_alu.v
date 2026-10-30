`timescale 1ns / 1ps
module tb_alu;
    reg  [7:0] ACC, operand;
    reg  [2:0] alu_op;
    wire [7:0] result;
    integer errors = 0;

    alu DUT (.ACC(ACC), .operand(operand), .alu_op(alu_op), .result(result));

    task check(input [2:0] op, input [7:0] a, input [7:0] b, input [7:0] expected);
        begin
            alu_op = op; ACC = a; operand = b; #10;
            if (result !== expected) begin
                $display("FAIL op=%b ACC=%h operand=%h result=%h expected=%h",
                         op, a, b, result, expected);
                errors = errors + 1;
            end else
                $display("PASS op=%b ACC=%h operand=%h result=%h", op, a, b, result);
        end
    endtask

    initial begin
        check(3'b000, 8'h55, 8'hF3, 8'hF3);   // LDI  : operand
        check(3'b001, 8'h10, 8'h30, 8'h40);   // ADD
        check(3'b001, 8'hFF, 8'h01, 8'h00);   // ADD  : carry discarded
        check(3'b001, 8'hF0, 8'h20, 8'h10);   // ADD  : wraps modulo 256
        check(3'b010, 8'hF3, 8'h3C, 8'h30);   // AND
        check(3'b010, 8'hFF, 8'h00, 8'h00);   // AND  : zero result
        check(3'b011, 8'h30, 8'h11, 8'h21);   // XOR
		  check(3'b011, 8'h40, 8'h40, 8'h00);   // XOR  : zero result
        check(3'b100, 8'h21, 8'h00, 8'h10);   // SHR
        check(3'b100, 8'h01, 8'hFF, 8'h00);   // SHR  : operand ignored, LSB lost
        check(3'b100, 8'h80, 8'h00, 8'h40);   // SHR  : 0 enters the MSB
        check(3'b111, 8'hA5, 8'h12, 8'hA5);   // NOP  : ACC passes through
        if (errors == 0) $display("alu: ALL TESTS PASSED");
        else             $display("alu: %0d ERRORS", errors);
        $finish;
    end
endmodule