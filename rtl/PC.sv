module PC(
    input clk,
    input rst,
    input PCsrc_i,
    input [31:0] pcTarget_i,
    output reg [31:0] pc_o
);

//assuming we need 32 bits for instr mem addresses
logic [31:0] next_PC;

always_ff @(posedge clk) begin
    if(rst) pc_o <= 0;
    else pc_o <= next_PC;
end

always_comb begin
    if(PCsrc_i) next_PC = pcTarget_i;
    else next_PC = pc_o + 4;
end 

endmodule

