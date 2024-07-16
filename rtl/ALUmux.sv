module ALUmux(
    input [31:0] regOp2,
    input [31:0] ImmOp,
    input ALUsrc,
    output [31:0] ALUop2
)

always_comb begin
    if(ALUsrc) ALUop2 = ImmOp;
    else ALUop2 = regOp2;
end 

endmodule 
