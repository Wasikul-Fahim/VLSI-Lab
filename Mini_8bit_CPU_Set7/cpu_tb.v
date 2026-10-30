`timescale 1ns / 1ps
module tb_cpu_top;
    reg CLK, RESET;
    wire [7:0] Q;
    wire Z;
    wire [3:0] PC;
    integer errors = 0;

    cpu_top DUT (.CLK(CLK), .RESET(RESET), .Q(Q), .Z(Z), .PC(PC));

    initial CLK = 1'b0;
    always #5 CLK = ~CLK;

    // values AFTER the rising edge, from Appendix B (Set 7)
    task check(input [7:0] exp_q, input exp_z, input [3:0] exp_pc);
        begin
            @(posedge CLK); #1;
            if (Q !== exp_q || Z !== exp_z || PC !== exp_pc) begin
                $display("FAIL t=%0t Q=%h Z=%b PC=%h expected Q=%h Z=%b PC=%h",
                         $time, Q, Z, PC, exp_q, exp_z, exp_pc);
                errors = errors + 1;
            end else
                $display("PASS t=%0t Q=%h Z=%b PC=%h", $time, Q, Z, PC);
        end
    endtask

    initial begin
        RESET = 1'b1;
        check(8'h00, 1'b1, 4'd0);   // cycle 0: RESET
        RESET = 1'b0;
        check(8'hF3, 1'b0, 4'd1);   // LDI 0xF3
        check(8'h30, 1'b0, 4'd2);   // AND 0x3C
        check(8'h21, 1'b0, 4'd3);   // XOR 0x11
        check(8'h10, 1'b0, 4'd4);   // SHR
        check(8'h40, 1'b0, 4'd5);   // ADD 0x30
        check(8'h00, 1'b1, 4'd6);   // XOR 0x40
        if (errors == 0) $display("cpu_top: ALL TESTS PASSED");
        else             $display("cpu_top: %0d ERRORS", errors);
        $finish;                    // stop after the last instruction
    end
endmodule