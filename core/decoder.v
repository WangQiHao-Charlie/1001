module decoder (
    input [31:0] instruction,
    output reg[6:0] opcode,
    output reg[4:0] rd,
    output reg[2:0] funct3,
    output reg[4:0] rs1,
    output reg[4:0] rs2,
    output reg[6:0] funct7,
    output reg[11:0] imm_i,
    output reg[6:0] imm_s,
    output reg[19:0] imm_u,
    
);
    
endmodule