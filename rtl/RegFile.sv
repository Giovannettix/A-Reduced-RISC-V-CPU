module RegFile(
    input clk;
    input [4:0] AD1;
    input [4:0] AD2; 
    input [4:0] AD3;
    input WE3;
    input [31:0] WD3; 
    output [31:0] RD1;
    output [31:0] RD2;
    output [31:0] a0; 
);

logic [31:0] registers [4:0]; //?? 
assign a0 = registers[0];

always_ff @(posedge clk) begin
    if(WE3) registers[AD3] <= WD3;
end

always_ff @(negedge clk) begin
RD1 <= registers[AD1];
RD2 <= registers[AD2]; 
end

endmodule
