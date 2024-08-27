module InstrMem(
    input [31:0] a,
    output [31:0] rd 
);

bit[7:0] ram_array [bit[31:0]]; //don't change this we need it for pc+4 lol

initial begin
    $display("Loading program.");
    $readmemh("f1.mem", ram_array); //byte addressable memory to fix
    $display("Program Loaded");
end

assign rd = {ram_array[a], ram_array[a+1], ram_array[a+2], ram_array[a+3]}; //counter.mem
//assign rd = {ram_array[a+3], ram_array[a+2], ram_array[a+1], ram_array[a]}; //f1.mem

endmodule

