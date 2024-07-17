module ALUmux(
    input [31:0] RegOp_i,
    input [31:0] ImmOp_i,
    input ALUsrc_i,
    output [31:0] ALUop_o
)

always_comb begin
    if(ALUsrc_i) ALUop_o = ImmOp_i;
    else ALUop_o = RegOp_i;
end 

endmodule 
