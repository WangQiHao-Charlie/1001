`include "alu_opcodes.vh"

module ALU (
    input  [3:0]  alu_op,
    input  [31:0] a,
    input  [31:0] b,
    output reg [31:0] result
);

  always @(*) begin
    case (alu_op)
      ALU_ADD:  result = a + b;
      ALU_SUB:  result = a - b;
      ALU_AND:  result = a & b;
      ALU_OR:   result = a | b;
      ALU_XOR:  result = a ^ b;
      ALU_SLT:  result = ($signed(a) < $signed(b)) ? 32'b1 : 32'b0;
      ALU_SLTU: result = (a < b) ? 32'b1 : 32'b0;
      ALU_SLL:  result = a << b[4:0];
      ALU_SRL:  result = a >> b[4:0];
      ALU_SRA:  result = $signed(a) >>> b[4:0];
      ALU_PASS: result = b;  // 对于 lui, b = imm_u (32位)
      default:  result = 32'b0;
    endcase
  end
endmodule
