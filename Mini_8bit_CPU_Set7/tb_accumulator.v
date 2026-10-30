`timescale 1ns / 1ps
module tb_accumulator;
    reg CLK, RESET, acc_write;
    reg [7:0] result;
    wire [7:0] ACC;
    wire Z;
    integer errors = 0;

    accumulator DUT (.CLK(CLK), .RESET(RESET), .acc_write(acc_write),
                     .result(result), .ACC(ACC), .Z(Z));

    initial CLK = 1'b0;
    always #5 CLK = ~CLK;

    task check(input [7:0] exp_acc, input exp_z);
        begin
            if (ACC !== exp_acc || Z !== exp_z) begin
                $display("FAIL t=%0t ACC=%h Z=%b expected ACC=%h Z=%b", $time, ACC, Z, exp_acc, exp_z);
                errors = errors + 1;
            end else
                $display("PASS t=%0t ACC=%h Z=%b", $time, ACC, Z);
        end
    endtask

    initial begin
        RESET = 1; acc_write = 0; result = 8'hAA;
        @(posedge CLK); #1; check(8'h00, 1'b1);       // reset: ACC=0, Z=1
        RESET = 0; acc_write = 1; result = 8'hF3;
        @(posedge CLK); #1; check(8'hF3, 1'b0);       // write non-zero, Z=0
        acc_write = 0; result = 8'h55;
        @(posedge CLK); #1; check(8'hF3, 1'b0);       // no write: hold ACC and Z
        acc_write = 1; result = 8'h00;
        @(posedge CLK); #1; check(8'h00, 1'b1);       // write zero, Z=1
        acc_write = 0; result = 8'h77;
        @(posedge CLK); #1; check(8'h00, 1'b1);       // hold Z=1
        acc_write = 1; result = 8'h40;
        @(posedge CLK); #1; check(8'h40, 1'b0);
        RESET = 1;                                    // reset has priority over write
        @(posedge CLK); #1; check(8'h00, 1'b1);
        if (errors == 0) $display("accumulator: ALL TESTS PASSED");
        else             $display("accumulator: %0d ERRORS", errors);
        $finish;
    end
endmodule
