module Resultmux(
    input [31:0] ALU_i,
    input [31:0] Mem_i,
    input [31:0] PC_i,
    input [1:0] ResultSrc_i,
    output reg [31:0] Result_o
);

always_comb begin
    
    case(ResultSrc_i)

    0: Result_o = ALU_i;
    1: Result_o = Mem_i;
    2: Result_o = PC_i;

    default: Result_o = ALU_i;
    
    endcase

end

endmodule
