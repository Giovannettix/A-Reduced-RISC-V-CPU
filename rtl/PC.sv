module PC(
    input clk,
    input rst,
    input PCsrc,
    input [31:0] ImmOp,
    output [31:0] pc
);

//assuming we need 32 bits for instr mem addresses
logic [31:0] next_PC;

always_ff @(posedge clk) begin
    if(rst) pc <= 0;
    else pc <= next_PC;
end

always_comb begin
    if(PCsrc) next_PC = pc + ImmOp;
    else next_PC = pc + 4;
end 

endmodule

