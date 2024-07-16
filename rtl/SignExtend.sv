module SignExtend(
    input [31:0] instr_i,
    input [1:0] ImmSrc_i,
    output [31:0] ImmOp_o
)

always_comb begin

    case(ImmSrc_i)
    
    0: ImmOp_o = {{20{instr_i[31]}}, instr_i[31:20]}; // i-type
    1:ImmOp_o = {{20{instr_i[31]}}, instr_i[31:25], instr_i[11:7]}; //s-type
    2: ImmOp_o = {{20{instr_i[31]}}, instr_i[7], instr_i[30:25], instr_i[11:8], 1'b0} //b-type
    3: ImmOp_o = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0} // j-type
    
    default: ImmOp_o = 0;

    endcase 

end

endmodule

