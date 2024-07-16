module ControlUnit(
    input [2:0] Flags_i, //flags
    input [31:0] Instr_i, 
    output RegWrite_o, //register write enable
    output ALUsrc_o, //use imm or RD2
    output MemWrite_o, // memory write enable
    output [1:0] ImmSrc_o, //determine imm-type
    output [4:0] ALUctrl_o, //determine alu-op
    output PCsrc_o, // PC+4 or PC+imm
    output [1:0] ResultSrc_o // ALU result, Data memory
    
);

///////////// Internal Signals /////////////////////////////

logic [6:0] op; logic [2:0] funct3; logic funct7; //opcodes
logic zero; logic gt; logic gtu; //flags
logic branch; logic jump; //extra signals

assign {op, funct3, funct7} = {Instr_i[6:0], Instr_i[14:12], Instr_i[30]}; 
assign {zero, gt, gtu} = Flags_i;

///////////// PCSrc //////////////////////////////////////

assign PCSrc_o = branch | jump; 

///////////// RegWrite, ALUSrc, Memwrite ////////////////////////

always_comb begin
    RegWrite_o = (op == 3) || (op == 19) || (op == 51) || (op == 55) || (op == 103) || (op == 111); //all except s-type
    ALUsrc_o = (op == 3) || (op==19) || (op==35) || (op==55) || (op==103); //all except r-type and b-type
    MemWrite_o = (op == 35); // s-type
end

always_comb begin

    case(op)

        ////////////////// r-type and i-type  ////////////////
        51, 19: begin  
            ResultSrc_o = 0;
            ImmSrc_o = 0; //// CHECK THIS
            branch = 0;
            jump = 0;
            

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
            
            ALUSRc_o = 0; //reg
            ALUCtrl = 1; // x (sub)
            ImmSrc_o = 1; //x
            ResultSrc_o = 0; //x
            jump = 0;

            case(funct3)

            0: begin ///////////////beq
                if(zero) branch = 0;
                else branch = 1;
            end
            1: begin ///////////////bne
                if(~zero) branch = 1;
                else branch = 0;
            end
            4: begin //////////////blt
                if(~gt) branch = 1;
                else branch = 0;
            end
            5: begin ///////////////bge
                if(gt) branch = 1;
                else branch = 0;
            end
            6:begin ////////////////bltu
                if(~gtu) branch = 1;
                else branch = 0;
            end
            7:begin /////////////// bgtu
                if(gtu) branch = 1;
                else branch = 0;
            end

            endcase

        end


        ////////////////////////  s-type /////////////////

        35: begin //sw only
        ImmSrc_o = 1;
        ALUSRc_o = 1; //imm
        ALUctrl_o = 0; //add
        ResultSrc_o = 0; //x 
        branch = 0; //x
        jump = 0; //x
        end


        /////////////////////// l-type //////////////////

        3: begin //lw only
        ImmSrc_o = 0;
        ALUsrc_o = 1;
        ALUctrl_o = 0; //add
        ResultSrc_o = 1;
        branch = 0;
        jump = 0;
        end


        ////// u-type, jal, jalr /////////////

    endcase

end 





endmodule
