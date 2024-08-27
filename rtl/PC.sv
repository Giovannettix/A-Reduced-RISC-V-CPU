module PC(
    input clk,
    input rst,
    input [1:0] PCsrc_i,
    input [31:0] PCtarget_i,
    input [31:0] PCalu_i,
    output reg [31:0] pc_o
);

logic [31:0] next_PC;

always_ff @(posedge clk) begin
    if(rst) pc_o <= 0;
    else pc_o <= next_PC;
end

always_comb begin

    case(PCsrc_i)
    0: next_PC = pc_o + 4;
    1: next_PC = PCtarget_i;
    2: next_PC = PCalu_i;
    default: next_PC = pc_o + 4;
    endcase

end 

endmodule

