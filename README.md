# A-Reduced-RISC-V-CPU

Just an Imperial EEE student having some fun following the EIE labs :) The aim of this project is to design a CPU in systemVerilog that supports the basic RISC-V instruction set🤠. The first stage will be to design a single-cycle CPU, then subsequent versions will include pipelining and hazard detection, and maaaybe cache memory if I find the motivation. The textbook "Digital Design and Computer Architecture, RISC-V Edition" by David Harris and Sarah Leilani Harris wonderfully lays out the microarchitecture in chapter 13, that chapter alone is probably enough information for someone with basic systemVerilog and digital architecture knowledge to complete this project. For those who are not yet familiar with either, the previous 12 chapters go through the basic building blocks from scratch and will bring you to a level where you can confidently do something similar.

Current Stage: I managed to create a single-cycle cpu that is able to implement a simple counter program, supporting i-type, r-type and b-type instructions as well as lw and sw. It is able to run a simple counter program. Now, I'm working on integrating the rest of the instructions and testing programs with more instruction types. The next steps will be to start thinking about pipelining and hazard detection.

