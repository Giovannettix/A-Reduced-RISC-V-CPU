module SignExtend(
    input [31:0] instr_i,
    input [2:0] ImmSrc_i,
    output reg [31:0] ImmOp_o
);

//update ImmSrc_i

always_comb begin

    case(ImmSrc_i)
    
    0: ImmOp_o = {{20{instr_i[31]}}, instr_i[31:20]}; // i-type
    1:ImmOp_o = {{20{instr_i[31]}}, instr_i[31:25], instr_i[11:7]}; //s-type
    2: ImmOp_o = {{20{instr_i[31]}}, instr_i[7], instr_i[30:25], instr_i[11:8], 1'b0}; //b-type
    3: ImmOp_o = {{12{instr_i[31]}}, instr_i[19:12], instr_i[20], instr_i[30:21], 1'b0}; // j-type
    4: ImmOp_o = {instr_i[31:12], 12'b0}; // u-type
    default: ImmOp_o = 0;

    endcase 

end

endmodule

