module PCTarget(
    input [31:0] ImmOp_i,
    input [31:0] PC_i,
    output [31:0] pcTarget_o
);

assign pcTarget_o = PC_i + ImmOp_i;

endmodule