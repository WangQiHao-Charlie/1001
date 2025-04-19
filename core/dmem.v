module dmem (
    input             clk,
    input      [31:0] addr,
    input             MemRead,
    input             MemWrite,
    input      [31:0] data_in,
    input      [ 3:0] mem_we,     // 新增：来自LSU的字节使能
    input      [31:0] mem_wdata,  // 新增：来自LSU的写入数据
    output reg [31:0] data_out
);

  reg [7:0] memory[0:1023];

  always @(posedge clk) begin
    if (|mem_we) begin  // 当mem_we不为0时执行写入
      if (mem_we[0]) memory[addr] <= mem_wdata[7:0];
      if (mem_we[1]) memory[addr+1] <= mem_wdata[15:8];
      if (mem_we[2]) memory[addr+2] <= mem_wdata[23:16];
      if (mem_we[3]) memory[addr+3] <= mem_wdata[31:24];
    end
  end


  always @(*) begin
    if (MemRead) begin
      data_out = {memory[addr+3], memory[addr+2], memory[addr+1], memory[addr]};
    end else begin
      data_out = 32'h00000000;
    end
  end


  integer i;
  always @(posedge clk) begin
    $display("=== DMEM ===");
    for (i = 0; i < 16; i = i + 4) begin
      $display("mem[%0d] = %02x %02x %02x %02x", i, memory[i], memory[i+1], memory[i+2],
               memory[i+3]);

    end
  end
endmodule
