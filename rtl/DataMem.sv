module DataMem(
    input clk,
    input [31:0] A,
    input  [31:0] WD,
    input  WE,
    output [31:0] RD
);

logic [31:0] Memory [31:0]

always_ff@(posedge clk)
    if(WE) Memory[A] <= WD;
    else RD <= Memory[A];

endmodule
