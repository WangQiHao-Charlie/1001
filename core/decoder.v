`include "alu_opcodes.vh"
`include "lsu_opcodes.vh"

module decoder (
    input [31:0] inst,
    output logic [6:0] opcode,
    output logic [3:0] rd,
    rs1,
    rs2,
    output logic [2:0] funct3,
    output logic [6:0] funct7,
    output logic [31:0] imm_i,
    imm_s,
    imm_u,
    output logic [3:0] alu_op,  // 控制 ALU 操作
    output logic RegWrite,
    MemRead,
    MemWrite,
    Branch,
    ALUSrc,
    output logic [2:0] lsu_op
);




  assign RegWrite = 0;
  assign MemRead  = 0;
  assign MemWrite = 0;
  assign Branch   = 0;
  assign ALUSrc   = 0;
  assign alu_op   = 4'b0000;

  always @(*) begin
    // 默认控制信号
    RegWrite = 0;
    MemRead  = 0;
    MemWrite = 0;
    Branch   = 0;
    ALUSrc   = 0;
    alu_op   = ALU_ADD;

    // 字段提取
    opcode   = inst[6:0];
    rd       = inst[11:7];
    funct3   = inst[14:12];
    rs1      = inst[19:15];
    rs2      = inst[24:20];
    funct7   = inst[31:25];

    imm_i    = {{20{inst[31]}}, inst[31:20]};
    imm_s    = {{20{inst[31]}}, inst[31:25], inst[11:7]};
    imm_u    = {inst[31:12], 12'b0};

    case (opcode)
      7'b0110011: begin  // R-Type
        ALUSrc   = 0;
        RegWrite = 1;
        case (funct3)
          3'b000: alu_op = (funct7 == 7'b0100000) ? ALU_SUB : ALU_ADD;
          3'b001: alu_op = ALU_SLL;
          3'b010: alu_op = ALU_SLT;
          3'b011: alu_op = ALU_SLTU;
          3'b100: alu_op = ALU_XOR;
          3'b101: alu_op = (funct7 == 7'b0100000) ? ALU_SRA : ALU_SRL;
          3'b110: alu_op = ALU_OR;
          3'b111: alu_op = ALU_AND;
        endcase
      end

      7'b0010011: begin  // I-Type 算术立即数
        ALUSrc   = 1;
        RegWrite = 1;
        case (funct3)
          3'b000: alu_op = ALU_ADD;  // addi
          3'b010: alu_op = ALU_SLT;
          3'b011: alu_op = ALU_SLTU;
          3'b100: alu_op = ALU_XOR;
          3'b110: alu_op = ALU_OR;
          3'b111: alu_op = ALU_AND;
          3'b001: alu_op = ALU_SLL;
          3'b101: alu_op = (funct7 == 7'b0100000) ? ALU_SRA : ALU_SRL;
        endcase
      end
      7'b0000011: begin  // I-Type 加载指令
        ALUSrc   = 1;  // 使用立即数计算地址
        RegWrite = 1;  // 要写回寄存器
        MemRead  = 1;  // 需要访问内存
        alu_op   = ALU_ADD;
        case (funct3)
          3'b000:  lsu_op = LSU_LB;  // lb
          3'b001:  lsu_op = LSU_LH;  // lh
          3'b010:  lsu_op = LSU_LW;  // lw
          3'b100:  lsu_op = LSU_LBU;  // lbu
          3'b101:  lsu_op = LSU_LHU;  // lhu
          default: lsu_op = 3'b111;
        endcase
      end

      7'b1100111: begin  // I-Type 跳转类指令
        case (funct3)
          3'b000: begin
            // jalr
          end
          default: begin
          end

        endcase
      end
      7'b0100011: begin  // S-Type 存储指令
        MemWrite = 1;
        ALUSrc   = 1;
        alu_op   = ALU_ADD;
        case (funct3)
          3'b000:  lsu_op = LSU_SB;  // sb
          3'b001:  lsu_op = LSU_SH;  // sh
          3'b010:  lsu_op = LSU_SW;  // sw
          default: lsu_op = 3'b111;
        endcase
      end
      7'b1100011: begin  // B-Type 分支指令
        case (funct3)
          3'b000: begin
            // beq
          end
          3'b001: begin
            // bne
          end
          3'b100: begin
            // blt
          end
          3'b101: begin
            // bge
          end
          3'b110: begin
            // bltu
          end
          3'b111: begin
            // bgeu
          end
          default: begin
          end
        endcase
      end
      7'b1101111: begin  // J-Type 无条件跳转
        // jal
      end
      7'b0110111: begin  // U-Type
        // lui
        RegWrite = 1;
        ALUSrc   = 1;  // 使用立即数
        alu_op   = ALU_ADD;  // 实际未使用，但需避免冲突
      end
      7'b0010111: begin  // U-Type
        // auipc
        RegWrite = 1;
        ALUSrc   = 1;  // 使用立即数
        alu_op   = ALU_ADD;  // 实际未使用，但需避免冲突
      end
      7'b0001111: begin  // fence / fence.i
        case (funct3)
          3'b000: begin
            // fence: 保证内存访问顺序（I/O 和 memory）
          end
          3'b001: begin
            // fence.i: 指令缓存同步，确保指令写入被看到
          end
          default: begin
          end
        endcase
      end

      7'b1110011: begin  // ecall, ebreak, CSR 指令
        case (funct3)
          3'b000: begin
            if (inst[31:20] == 12'b000000000000) begin
              // ecall: 环境调用
            end else if (inst[31:20] == 12'b000000000001) begin
              // ebreak: 调试中断
            end
          end
          3'b001: begin
            // csrrw
          end
          3'b010: begin
            // csrrs
          end
          3'b011: begin
            // csrrc
          end
          3'b101: begin
            // csrrwi
          end
          3'b110: begin
            // csrrsi
          end
          3'b111: begin
            // csrrci
          end
          default: begin
          end

        endcase
      end

      default: begin
        // 无效指令
      end
    endcase
  end
endmodule
