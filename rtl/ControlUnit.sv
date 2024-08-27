module ControlUnit(
    input [2:0] Flags_i, //flags
    input [31:0] Instr_i, 
    output reg [2:0] funct3,
    output reg RegWrite_o, //register write enable
    output reg ALUsrc_o, //use imm or RD2
    output reg MemWrite_o, // memory write enable
    output reg [2:0] ImmSrc_o, //determine imm-type
    output reg [4:0] ALUctrl_o, //determine alu-op
    output reg [1:0] PCsrc_o, // PC+4 ,PC+imm, rs1+imm
    output reg [1:0] ResultSrc_o // ALU result, Data memory, PC+4
);

///////////// Internal Signals /////////////////////////////

logic [6:0] op; logic funct7; //opcodes logic [2:0] funct3;
logic zero; logic gt; logic gtu; //flags
logic branch; // branch

assign {op, funct3, funct7} = {Instr_i[6:0], Instr_i[14:12], Instr_i[30]}; 
assign {zero, gt, gtu} = Flags_i;

///////////// RegWrite, ALUSrc, Memwrite, PCSrc ////////////////////////

always_comb begin
    RegWrite_o = (op == 3) || (op == 19) || (op == 51) || (op == 55) || (op == 103) || (op == 111); //all except b-type and s-type
    ALUsrc_o = (op == 3) || (op==19) || (op==35) || (op==55) || (op==103); //all except r-type and b-type
    MemWrite_o = (op == 35); // s-type

    if(op == 103) PCsrc_o = 2; //jalr
    else if (branch | op == 111) PCsrc_o = 1; //jal and b-type
    else PCsrc_o = 0; //pc+4
end

always_comb begin

    case(op)

        ////////////////// r-type and i-type  ////////////////
        51, 19: begin  
            ResultSrc_o = 0; // ALU result
            ImmSrc_o = 0; // for i-type
            branch = 0;
            
            if(op[5]) ALUsrc_o = 0; //rd2
            else ALUsrc_o = 1; //imm

            case(funct3)
            0: begin
                if(op[5]) begin 
                    if(funct7 == 0) ALUctrl_o = 0;
                    else ALUctrl_o = 1;
                end
                else ALUctrl_o = 0;
                end
            1: begin if(op[5]) ALUctrl_o = 2;
                    else ALUctrl_o = 3;
                end 
            2: ALUctrl_o = 4;
            3: ALUctrl_o = 5;
            4: ALUctrl_o = 6;
            5: begin 
                if(op[5]) begin
                    if(funct7 == 0) ALUctrl_o = 7;
                    else ALUctrl_o = 8;
                end
                else begin 
                    if(funct7 == 0) ALUctrl_o = 9;
                    else ALUctrl_o = 10;
                end
            end 
            6: ALUctrl_o = 11;
            7: ALUctrl_o = 12;

            default: ALUctrl_o = 0;
            endcase
        end

        /////////////////// b-type ///////////////////////

        99: begin
            
            ALUsrc_o = 0; //reg
            ALUctrl_o = 1; //x cause flags
            ImmSrc_o = 2; // 13-bit immediate
            ResultSrc_o = 0; //x

            case(funct3)
            0: branch = zero; //beq
            1: branch = ~zero; //bne
            4: branch = ~gt; //blt
            5: branch = gt; //bge
            6: branch = ~gtu; //bltu
            7: branch = gtu; //bgtu
            endcase

        end

        /////////////////////// l-type and s-type ////////////

        3, 35: begin ///lw and sw
        ALUctrl_o = 0; //add
        ALUsrc_o = 1; //imm
        ImmSrc_o = {2'b00, funct7}; //0 for lw and 1 for sw
        ResultSrc_o = 1; //important for lw
        branch = 0;
        end

        ////// j-type and u-type /////////////

        103, 111: begin //jalr and jal
        ALUsrc_o = 1; //imm
        ALUctrl_o = 0; //add
        ImmSrc_o = {1'b0, {2{op[3]}}}; // 0 for jalr, 3 for jal
        ResultSrc_o = 2; //pc+4
        branch = 0;
        end

        23, 55: begin //auipc, lui
        ALUsrc_o = 1; //imm
        ALUctrl_o = 13; //u-type
        ImmSrc_o = 4; //u-type
        ResultSrc_o = {2{funct7}}; // 3 (pc+imm) for auipc, 0 (alu) for lui
        branch = 0;
        end

    endcase

end 


endmodule
