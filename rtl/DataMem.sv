module DataMem(
    input clk,
    input [31:0] a,
    input  [31:0] wd,
    input [2:0] funct3, //byte, half, word
    input we,
    output reg [31:0] rd
);

//how can we implement byte-addressable memory?

bit [7:0] Memory [bit[31:0]];


always_ff@(negedge clk) begin
    if(we) begin //store  
        case(funct3)
            0: {Memory[a]} <= wd[7:0]; //sb
            1: {Memory[a+1], Memory[a]} <= wd[15:0]; //sh
            2: {Memory[a+3], Memory[a+2], Memory[a+1], Memory[a]} <= wd; //sw
            default: {Memory[a+3], Memory[a+2], Memory[a+1], Memory[a]} <= wd; //sw
        endcase
    end
end

always_ff@(posedge clk) begin
     //load
        case(funct3)
            0: rd <= {{24{Memory[a][7]}}, Memory[a]}; //lb
            1: rd <= {{16{Memory[a+1][7]}}, Memory[a+1], Memory[a]}; // lh
            2: rd <= {Memory[a+3], Memory[a+2], Memory[a+1], Memory[a]}; //lw
            4: rd <= {{24{1'b0}}, Memory[a]}; //lbu
            5: rd <= {{16{1'b0}}, Memory[a+1], Memory[a]}; //lhu
            default: rd <= {Memory[a+3], Memory[a+2], Memory[a+1], Memory[a]}; //lw
        endcase
end

endmodule
