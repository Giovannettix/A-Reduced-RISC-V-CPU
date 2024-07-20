module DataMem(
    input clk,
    input [31:0] a,
    input  [31:0] wd,
    input [1:0] size, //byte, half, word
    input unsigned, //do we need unsigned or signed loading?
    input we,
    output reg [31:0] rd
);

//how can we implement byte-addressable memory?

bit [7:0] Memory [bit[31:0]];


always_ff@(negedge clk) begin
    if(we) begin //store  
        case(size)
            0: {Memory[a+3], Memory[a+2], Memory[a+1], Memory[a]} <= wd; //sw
            1: {Memory[a+1], Memory[a]} <= wd[15:0]; //sh
            2: {Memory[a]} <= wd[7:0]; //sb
            default: {Memory[a+3], Memory[a+2], Memory[a+1], Memory[a]} <= wd; //sw
        endcase
    end
end

always_ff@(posedge clk) begin
     //load
        case(size)
            0: rd <= {Memory[a+3], Memory[a+2], Memory[a+1], Memory[a]}; //lw
            1: begin if(unsigned) rd <= {{16{1'b0}}, Memory[a+1], Memory[a]}; //lhu
                    else rd <= {{16{Memory[a+1][7]}}, Memory[a+1], Memory[a]}; // lh
                end
            2: begin if(unsigned) rd <= {{24{1'b0}}, Memory[a]}; //lbu
                    else rd <= {{24{Memory[a][7]}}, Memory[a]}; //lb
                end
            default: rd <= {Memory[a+3], Memory[a+2], Memory[a+1], Memory[a]}; //lw
        endcase
end

endmodule
