module branch_unit (
    input  [6:0]  opcode,
    input  [2:0]  funct3,
    input  [31:0] pc,
    input  [31:0] rs1_val,
    input  [31:0] rs2_val,
    input  [31:0] imm_b,
    input  [31:0] imm_j,
    input  [31:0] imm_i,

    output logic [31:0] next_pc,
    output logic        branch_taken
);

always @(*) begin
    // 默认行为
    next_pc = pc + 4;
    branch_taken = 0;

    case (opcode)
        7'b1101111: begin // JAL
            branch_taken = 1;
            next_pc = pc + imm_j;
        end

        7'b1100111: begin // JALR
            branch_taken = 1;
            next_pc = (rs1_val + imm_i) & 32'hFFFFFFFE;
        end

        7'b1100011: begin // B-Type
            case (funct3)
                3'b000: branch_taken = (rs1_val == rs2_val); // beq
                3'b001: branch_taken = (rs1_val != rs2_val); // bne
                3'b100: branch_taken = ($signed(rs1_val) <  $signed(rs2_val)); // blt
                3'b101: branch_taken = ($signed(rs1_val) >= $signed(rs2_val)); // bge
                3'b110: branch_taken = (rs1_val <  rs2_val); // bltu
                3'b111: branch_taken = (rs1_val >= rs2_val); // bgeu
                default: branch_taken = 0;
            endcase

            if (branch_taken)
                next_pc = pc + imm_b;
        end

        default: begin
        end
    endcase
end

endmodule
