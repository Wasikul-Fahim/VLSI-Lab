`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:52:32 10/24/2026 
// Design Name: 
// Module Name:    cpu_top 
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
module cpu_top (
    input wire CLK,
    input wire RESET,
    output wire [7:0] Q,
    output wire Z,
    output wire [3:0] PC
);

    wire [11:0] instruction;
    wire [3:0] opcode;
    wire [7:0] operand;

    wire acc_write;
    wire [2:0] alu_op;
    wire [7:0] result;
    wire [7:0] ACC;

    // Split the 12-bit instruction into fields
    assign opcode = instruction[11:8];
    assign operand = instruction[7:0];

    // Instruction address
    program_counter PC_UNIT (
        .CLK(CLK),
        .RESET(RESET),
        .PC(PC)
    );

    // Instruction memory
    program_rom ROM_UNIT (
        .PC(PC),
        .instruction(instruction)
    );

    // Opcode decoder
    control_unit CONTROL_UNIT (
        .opcode(opcode),
        .acc_write(acc_write),
        .alu_op(alu_op)
    );

    // Arithmetic and logic
    alu ALU_UNIT (
        .ACC(ACC),
        .operand(operand),
        .alu_op(alu_op),
        .result(result)
    );

    // Accumulator and zero flag
    accumulator ACC_UNIT (
        .CLK(CLK),
        .RESET(RESET),
        .acc_write(acc_write),
        .result(result),
        .ACC(ACC),
        .Z(Z)
    );

    assign Q = ACC;

endmodule
