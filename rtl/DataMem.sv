module DataMem(
    input clk,
    input [31:0] a,
    input  [31:0] wd,
    //input [1:0] size, //byte, half, word
    input we,
    output [31:0] rd
);

//how can we implement byte-addressable memory?
//top 30 bits are addressing the word
//bottom 2 bits are addressing the byte

logic [31:0] Memory [32:0];

//logic [31:0] Memory [29:0];
logic [29:0] word;
logic [1:0] byte;
//assign {word, byte} = a;

always_ff@(posedge clk)
    if(we) Memory[a] <= wd;
    else rd <= Memory[a];

endmodule
