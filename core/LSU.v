`include "lsu_opcodes.vh"

module LSU (
    input         clk,
    input         rst,
    input  [31:0] addr,       // 访存地址
    input  [31:0] wdata,      // store 数据
    input  [ 2:0] lsu_op,     // 来自指令，用于识别 lb/lh/lw 等
    input         mem_read,
    input         mem_write,
    output [31:0] rdata,      // load 输出
    input  [31:0] mem_rdata,  // 来自memory
    output [ 3:0] mem_we,     // 写使能掩码（store用）
    output [31:0] mem_wdata   // 写入memory的数据
);

  reg [31:0] rdata_reg;
  assign rdata = rdata_reg;

  reg [3:0] mem_we_reg;
  assign mem_we = mem_we_reg;

  reg [31:0] mem_wdata_reg;
  assign mem_wdata = mem_wdata_reg;

  always @(*) begin
    rdata_reg = 32'b0;
    case (lsu_op)
      LSU_LB: begin
        case (addr[1:0])
          2'b00: rdata_reg = {{24{mem_rdata[7]}}, mem_rdata[7:0]};
          2'b01: rdata_reg = {{24{mem_rdata[15]}}, mem_rdata[15:8]};
          2'b10: rdata_reg = {{24{mem_rdata[23]}}, mem_rdata[23:16]};
          2'b11: rdata_reg = {{24{mem_rdata[31]}}, mem_rdata[31:24]};
        endcase
      end

      LSU_LBU: begin
        case (addr[1:0])
          2'b00: rdata_reg = {24'b0, mem_rdata[7:0]};
          2'b01: rdata_reg = {24'b0, mem_rdata[15:8]};
          2'b10: rdata_reg = {24'b0, mem_rdata[23:16]};
          2'b11: rdata_reg = {24'b0, mem_rdata[31:24]};
        endcase
      end

      LSU_LH: begin
        case (addr[1])
          1'b0: rdata_reg = {{16{mem_rdata[15]}}, mem_rdata[15:0]};
          1'b1: rdata_reg = {{16{mem_rdata[31]}}, mem_rdata[31:16]};
        endcase
      end

      LSU_LHU: begin
        case (addr[1])
          1'b0: rdata_reg = {16'b0, mem_rdata[15:0]};
          1'b1: rdata_reg = {16'b0, mem_rdata[31:16]};
        endcase
      end

      LSU_LW: begin
        rdata_reg = mem_rdata;
      end

      default: rdata_reg = 32'hDEADBEEF;  // debug
    endcase
  end

  always @(*) begin
    mem_we_reg    = 4'b0000;
    mem_wdata_reg = 32'b0;

    if (mem_write) begin
      case (lsu_op)
        LSU_SB: begin
          mem_wdata_reg = {4{wdata[7:0]}};  // 拷贝4次，取用其中一字节
          case (addr[1:0])
            2'b00: mem_we_reg = 4'b0001;
            2'b01: mem_we_reg = 4'b0010;
            2'b10: mem_we_reg = 4'b0100;
            2'b11: mem_we_reg = 4'b1000;
          endcase
        end

        LSU_SH: begin
          mem_wdata_reg = {2{wdata[15:0]}};  // 填入16位
          case (addr[1])
            1'b0: mem_we_reg = 4'b0011;
            1'b1: mem_we_reg = 4'b1100;
          endcase
        end

        LSU_SW: begin
          mem_wdata_reg = wdata;
          mem_we_reg    = 4'b1111;
        end
      endcase
    end
  end
endmodule
