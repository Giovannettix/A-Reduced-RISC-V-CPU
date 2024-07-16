module InstrMem(
    input [31:0] A;
    output [31:0] RD; 
);

logic [31:0] ram_array [31:0];

initial begin
    $display("Loading ram.");
    $readmemh("instr.mem", ram_array);
end

assign RD = ram_array[A];

endmodule