module ALU (
    input [4:0] ALUCtrl_i, //we got 13 cases
    input [31:0] SrcA_i,
    input [31:0] SrcB_i,
    output [31:0] ALUResult_o,
    output [2:0] Flags_o, 
);

/////////// Flags for Branches /////////////////////////

logic zero; logic gt; logic gtu; // zero, greater-than, greater-than-unsigned
logic signed [31:0] SrcA_s; logic signed [31:0] SrcB_s; 

assign SrcA_s = SrcA_i;
assign SrcB_s = SrcB_i;
assign zero = (ALUResult_o == 0);
assign gt = (SrcA_s >= SrcB_s);
assign gtu = (SrcA_i >= SrcB_i);

assign Flags_o = {zero, gt, gtu};

////////////// Instructions ////////////////////////

always_comb begin

    case(ALUCtrl)
    
    0: ALUResult_o = SrcA_s + SrcB_s; //add
    1: ALUResult_o = SrcA_s - SrcB_s; //sub
    2: ALUResult_o = SrcA_s << SrcB_s[4:0]; //SLL reg
    3: ALUResult_o = SrcA_s << SrcB_s; // SLL imm
    4: ALUResult_o = SrcA_s < SrcB_s;  //SLT
    5: ALUResult_o = SrcA_i < SrcB_i; // SLT unsigned
    6: ALUResult_o = SrcA_s ^ SrcB_s; // xor
    7: ALUResult_o = SrcA_s >> SrcB_s[4:0]; // SRL reg
    8: ALUResult_o = SrcA_s >>> SrcB_s[4:0]; // SRA reg
    9: ALUResult_o = SrcA_s >> SrcB_s; // SRL imm
    10: ALUResult_o = SrcA_s >>> SrcB_s; // SRA imm
    11: ALUResult_o = SrcA_s | SrcB_s; // or
    12: ALUResult_o = SrcA_s & SrcB_s; // and 
    
    default: ALUResult_o = SrcA_s + SrcB_s;

    endcase

end


endmodule