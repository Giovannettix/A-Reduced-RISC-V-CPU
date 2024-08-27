module ALU (
    input [4:0] ALUCtrl_i, //we got 13 cases
    input [31:0] SrcA_i,
    input [31:0] SrcB_i,
    output reg [31:0] ALUResult_o,
    output [2:0] Flags_o 
);

/////////// Signed Logic /////////////////////////

logic signed [31:0] SrcA_s, SrcB_s; 

assign SrcA_s = SrcA_i;
assign SrcB_s = SrcB_i;

////////////// Instructions ////////////////////////

always_comb begin

    case(ALUCtrl_i)
    0: ALUResult_o = SrcA_s + SrcB_s; //add
    1: ALUResult_o = SrcA_s - SrcB_s; //sub
    2: ALUResult_o = SrcA_s << SrcB_s[4:0]; //SLL reg
    3: ALUResult_o = SrcA_s << SrcB_s; // SLL imm
    4: ALUResult_o = {{31{1'b0}},(SrcA_s < SrcB_s)};  //SLT
    5: ALUResult_o = {{31{1'b0}}, (SrcA_i < SrcB_i)}; // SLT unsigned
    6: ALUResult_o = SrcA_s ^ SrcB_s; // xor
    7: ALUResult_o = SrcA_s >> SrcB_s[4:0]; // SRL reg
    8: ALUResult_o = SrcA_s >>> SrcB_s[4:0]; // SRA reg
    9: ALUResult_o = SrcA_s >> SrcB_s; // SRL imm
    10: ALUResult_o = SrcA_s >>> SrcB_s; // SRA imm
    11: ALUResult_o = SrcA_s | SrcB_s; // or
    12: ALUResult_o = SrcA_s & SrcB_s; // and 
    13: ALUResult_o = SrcB_i; // u-type instr
    default: ALUResult_o = SrcA_s + SrcB_s;

    endcase

    Flags_o = {(ALUResult_o == 0), (SrcA_s >= SrcB_s), (SrcA_i >= SrcB_i)}; //zero, gt, gtu

end


endmodule

