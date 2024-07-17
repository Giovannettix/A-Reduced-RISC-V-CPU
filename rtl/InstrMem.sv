module InstrMem(
    input [31:0] a,
    output [31:0] rd 
);

logic [31:0] ram_array [31:0];

initial begin
    $display("Loading program.");
    $readmemh("counter.mem", ram_array);
end

assign rd = ram_array[a];

endmodule