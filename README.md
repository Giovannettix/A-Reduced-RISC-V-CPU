# A-Reduced-RISC-V-CPU

Just an Imperial EEE student having some fun following the EIE labs :) The aim of this project is to design a CPU in systemVerilog that supports the basic RISC-V instruction set🤠. The first stage will be to design a single-cycle CPU, then subsequent versions will include pipelining and hazard detection, and maaaybe cache memory if I find the motivation. 

The textbook "Digital Design and Computer Architecture, RISC-V Edition" by David Harris and Sarah Leilani Harris wonderfully lays out the microarchitecture in chapter 13, that chapter alone is probably enough information for someone with basic systemVerilog and digital architecture knowledge to complete this project. For those who are not yet familiar with either, the previous 12 chapters go through the basic building blocks from scratch and will bring you to a level where you can confidently do something similar.

---

## Evaluation
The aim of this project was to properly learn how to use Verilator and Github, and also learn more about CPU designs. I think the work I've done so far has allowed me to acheive these goals, which I am very happy with. Even though I would be pretty confident to improve the design by adding at pipelining/hazard detection, I don't think I will learn as much, so my time is better spent now trying to learn new things!

[![Watch the Video](https://github.com/Giovannettix/A-Reduced-RISC-V-CPU/blob/main/thumbnail.jpg)(https://github.com/Giovannettix/A-Reduced-RISC-V-CPU/blob/main/PXL_20240920_100402857.TS.mp4)]

## Logbook
22/07/2024: Managed to create a single-cycle cpu that implements a simple counter program, supporting i-type, r-type and b-type instructions as well as lw and sw. It is able to run a simple counter program. Now, I'm working on integrating the rest of the instructions and testing programs with more instruction types. 

22/08/2024: After a bit of a hiatus, finally implemented all of the basic RISC-V Instructions and byte-addressable memory. Thanks to @tobybrowne testbenches, was able to verify the design with the F1 Lights program and vbuddy. The next steps will be to start thinking about pipelining and hazard detection.


