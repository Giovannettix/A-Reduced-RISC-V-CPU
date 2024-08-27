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
    output [31:0] t0,
    output [31:0] t1,
    output [31:0] t5,
    output [31:0] t6 
);

bit [31:0] registers[31];

assign a0 = registers[10-1];
assign a1 = registers[11-1];
assign t0 = registers[5-1];
assign t1 = registers[6-1];
assign t5 = registers[30-2];
assign t6 = registers[31-1];

always_ff @(negedge clk) begin
    if(WE3 && AD3 != 0) registers[AD3-1] <= WD3; 
end

always_comb begin
    if(AD1!=0) RD1 = registers[AD1-1];
    else RD1 = 0;
    if(AD2!=0) RD2 = registers[AD2-1]; 
    else RD2 = 0;
end

endmodule
