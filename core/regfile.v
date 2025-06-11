module regfile (
    input clk,
    input we,                    // 写使能
    input [4:0] rs1, rs2, rd,    // 5-bit 索引（0~31）
    input [31:0] wd,             // 写入数据
    output [31:0] rd1, rd2       // 读出的两个寄存器
);

    reg [31:0] regfile [31:0]; 

    assign rd1 = (rs1 == 0) ? 32'b0 : regfile[rs1];
    assign rd2 = (rs2 == 0) ? 32'b0 : regfile[rs2];

always @(posedge clk) begin
    $display("========== Regfile State ==========");
    $display("x00 = %08h | x01 = %08h | x02 = %08h | x03 = %08h", regfile[0], regfile[1], regfile[2], regfile[3]);
    $display("x04 = %08h | x05 = %08h | x06 = %08h | x07 = %08h", regfile[4], regfile[5], regfile[6], regfile[7]);
    $display("x08 = %08h | x09 = %08h | x10 = %08h | x11 = %08h", regfile[8], regfile[9], regfile[10], regfile[11]);
    $display("x12 = %08h | x13 = %08h | x14 = %08h | x15 = %08h", regfile[12], regfile[13], regfile[14], regfile[15]);
    $display("x16 = %08h | x17 = %08h | x18 = %08h | x19 = %08h", regfile[16], regfile[17], regfile[18], regfile[19]);
    $display("x20 = %08h | x21 = %08h | x22 = %08h | x23 = %08h", regfile[20], regfile[21], regfile[22], regfile[23]);
    $display("x24 = %08h | x25 = %08h | x26 = %08h | x27 = %08h", regfile[24], regfile[25], regfile[26], regfile[27]);
    $display("x28 = %08h | x29 = %08h | x30 = %08h | x31 = %08h", regfile[28], regfile[29], regfile[30], regfile[31]);
    $display("===================================");
    
    if (we && rd != 0)
        regfile[rd] <= wd;
    end


endmodule
