module RegFile(
    input clk,
    input [4:0] AD1,
    input [4:0] AD2,
    input [4:0] AD3,
    input WE3,
    input [31:0] WD3,
    output reg [31:0] RD1,
    output reg [31:0] RD2,
    output [31:0] a0,
    output [31:0] a1,
    output [31:0] t1 
);

//logic [31:0] registers [6:0];

bit [31:0] registers[31];

assign a0 = registers[10];
assign a1 = registers[11];
assign t1 = registers[6];

always_ff @(posedge clk) begin
    if(WE3) registers[AD3] <= WD3;
end

always_ff @(negedge clk) begin
RD1 <= registers[AD1];
RD2 <= registers[AD2]; 
end

endmodule
