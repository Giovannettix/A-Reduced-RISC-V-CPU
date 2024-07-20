module CPU(
    input clk,
    input rst,
    output [31:0] a0
);

//////////// fetch ///////////////

// Signals for PC
logic [31:0] pc, instr, pcTarget;

PC programCounter (.clk(clk), .rst(rst), .PCsrc_i(pcsrc), 
.pcTarget_i(pcTarget), .pc_o(pc)); //careful about pipelining PCTarget

// Fetch instruction
InstrMem instructions(.a(pc), .rd(instr));

//////////// Decode //////////////

//Signals for control unit
logic alusrc, regwrite, memwrite, pcsrc;
logic [1:0] immsrc, resultsrc;
logic [2:0] flags;
logic [4:0] aluctrl;

ControlUnit control(.Flags_i(flags), .Instr_i(instr), 
.RegWrite_o(regwrite), .ALUsrc_o(alusrc), .ALUctrl_o(aluctrl), .ImmSrc_o(immsrc), 
.MemWrite_o(memwrite), .ResultSrc_o(resultsrc), .PCsrc_o(pcsrc));

// Register file signals
logic [31:0] rd1, rd2, imm_op;
logic [4:0] rs1, rs2, rd;
assign rs1 = instr[19:15];
assign rs2 = instr[24:20];
assign rd = instr[11:7];

// Instantiate Register File
RegFile regfile(.clk(clk), .AD1(rs1), .AD2(rs2), 
    .AD3(rd), .WE3(regwrite), .WD3(result), .RD1(rd1), //wd3
    .RD2(rd2), .a0(a0));

SignExtend extend( .instr_i(instr), .ImmSrc_i(immsrc), .ImmOp_o(imm_op));

//////////// Execute ///////////////

// ALU signals
logic [31:0] src_b, alu_result;

ALUmux alu_mux(.RegOp_i(rd2), .ImmOp_i(imm_op), .ALUsrc_i(alusrc), .ALUop_o(src_b));

ALU alu(.ALUCtrl_i(aluctrl), .SrcA_i(rd1), .SrcB_i(src_b), .ALUResult_o(alu_result),
 .Flags_o(flags));

PCTarget target(.ImmOp_i(imm_op), .PC_i(pc), .pcTarget_o(pcTarget));

/////////// Memory //////////////

// Memory signals
logic [31:0] mem_data;

DataMem dataMem(.clk(clk), .a(alu_result), .wd(rd2), .we(memwrite), .rd(mem_data));

/////////// Writeback //////////////
logic [31:0] result;

Resultmux result_mux( .ALU_i(alu_result), .Mem_i(mem_data), .PC_i(pc),
    .ResultSrc_i(resultsrc),
    .Result_o(result));

endmodule

