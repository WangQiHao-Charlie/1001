`ifndef ALU_OPCODES_VH
`define ALU_OPCODES_VH

parameter ALU_ADD = 4'b0000;  // 加法（add, addi, lw, sw, jal, jalr）
parameter ALU_SUB = 4'b0001;  // 减法（sub, beq, bne, blt 等）
parameter ALU_AND = 4'b0010;  // 与（and, andi）
parameter ALU_OR = 4'b0011;  // 或（or, ori）
parameter ALU_XOR = 4'b0100;  // 异或（xor, xori）
parameter ALU_SLT = 4'b0101;  // 有符号比较（slt, slti）
parameter ALU_SLTU = 4'b0110;  // 无符号比较（sltu, sltiu）
parameter ALU_SLL = 4'b0111;  // 左移（sll, slli）
parameter ALU_SRL = 4'b1000;  // 逻辑右移（srl, srli）
parameter ALU_SRA = 4'b1001;  // 算术右移（sra, srai）
parameter ALU_PASS = 4'b1111;  // 直通，用于 lui（返回立即数）


`endif
