module InstrMem(
    input [31:0] a,
    output [31:0] rd 
);

bit [31:0] ram_array [bit[31:0]]; //2^32 -1

initial begin
    $display("Loading program.");
    $readmemh("counter.mem", ram_array);
end

assign rd = ram_array[a];

endmodule

