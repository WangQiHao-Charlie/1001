module top (
    input clk,
    input reset,
    output [31:0] debug_current_addr,
    output [31:0] debug_current_inst,
    output [31:0] debug_ALU_out
);


  wire [31:0] current_addr;
  wire [31:0] current_inst;
  wire [31:0] next_addr;
  assign next_addr = current_addr + 4;

  assign debug_current_addr = current_addr;
  assign debug_current_inst = current_inst;

  pc system_pc (
      .clk(clk),
      .reset(reset),
      .next_pc(next_addr),
      .pc_out(current_addr)
  );

  imem system_imem (
      .address(current_addr),
      .instruction(current_inst)
  );


  wire [3:0] alu_op;
  wire [4:0] rd, rs1, rs2;
  wire [31:0] imm_i, imm_s, imm_u;
  wire RegWrite, MemRead, MemWrite, Branch, ALUSrc;

  wire [6:0] opcode;
  wire [2:0] funct3;
  wire [6:0] funct7;

  wire [2:0] lsu_op;

  decoder system_decoder (
      .inst(current_inst),
      .opcode(opcode),
      .rd(rd),
      .rs1(rs1),
      .rs2(rs2),
      .funct3(funct3),
      .funct7(funct7),
      .imm_i(imm_i),
      .imm_s(imm_s),
      .imm_u(imm_u),
      .alu_op(alu_op),
      .lsu_op(lsu_op),
      .RegWrite(RegWrite),
      .MemRead(MemRead),
      .MemWrite(MemWrite),
      .Branch(Branch),
      .ALUSrc(ALUSrc)
  );

  wire [31:0] write_data;
  wire [31:0] rd1, rd2;

  wire [31:0] ALU_in_1;
  wire [31:0] ALU_in_2;
  wire [31:0] ALU_out;


  ALU system_alu (
      .alu_op(alu_op),
      .a(ALU_in_1),
      .b(ALU_in_2),
      .result(ALU_out)
  );

  assign debug_ALU_out = ALU_out;

  wire [31:0] data_addr;


  assign ALU_in_1 = rd1;  // 地址基址
  assign ALU_in_2 = (ALUSrc) ? imm_i : rd2;  // 根据指令类型选择立即数或寄存器值

  wire [31:0] lsu_rdata;
  wire [31:0] mem_rdata;
  wire [ 3:0] mem_we;
  wire [31:0] mem_wdata;

  assign data_addr = rd1 + ((opcode == 7'b0000011) ? imm_i : imm_s);


  wire [31:0] data_in;
  assign data_in = rd2;

  dmem system_dmem (
      .clk      (clk),
      .addr     (data_addr),
      .MemRead  (MemRead),
      .MemWrite (MemWrite),
      .data_in  (data_in),
      .mem_we   (mem_we),     // 连接LSU的mem_we
      .mem_wdata(mem_wdata),  // 连接LSU的mem_wdata
      .data_out (mem_rdata)
  );

  LSU system_lsu (
      .addr(data_addr),
      .wdata(data_in),
      .lsu_op(lsu_op),  // load/store 子类型
      .mem_read(MemRead),
      .mem_write(MemWrite),
      .rdata(lsu_rdata),
      .mem_rdata(mem_rdata),
      .mem_we(mem_we),
      .mem_wdata(mem_wdata)
  );

  regfile system_regfile (
      .clk(clk),
      .we (RegWrite),
      .rs1(rs1),
      .rs2(rs2),
      .rd (rd),
      .wd (write_back_data),
      .rd1(rd1),
      .rd2(rd2)
  );
  always @(posedge clk) begin

    $display("opcode = 0x%b", RegWrite);  // 仿真中打印验证
  end
  wire [31:0] lsu_rdata;
  assign write_back_data = (opcode == 7'b0110111) ? 32'h01 :  // LUI
      (opcode == 7'b0010111) ? 32'h02:  // AUIPC
      (MemRead ? lsu_rdata : ALU_out);

endmodule
