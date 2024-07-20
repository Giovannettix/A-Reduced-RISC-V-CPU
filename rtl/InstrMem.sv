module InstrMem(
    input [31:0] a,
    output [31:0] rd 
);

bit [31:0] ram_array [bit[31:0]]; //2^32 -1

//bit[31:0] ram_array [bit[29:0]]

initial begin
    $display("Loading program.");
    $readmemh("counter_modified.mem", ram_array); //byte addressable memory to fix
end

//assign rd = ram_array[a[31:2]];

assign rd = ram_array[a];

endmodule

