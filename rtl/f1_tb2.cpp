#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VCPU.h"
#include <chrono>
#include <thread>
#include <iostream>

#include "vbuddy.cpp"
#define MAX_SIM_CYC 1000000

int main(int argc, char **argv, char **env){
    int simcyc;
    int tick;

    Verilated::commandArgs(argc, argv);
    VCPU* top = new VCPU;
    
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("cpu.vcd");

    //init vbuddy
    if(vbdOpen()!=1) return(-1);
    vbdHeader("RISCV: F1");

    // set rotary button to "one-shot" mode
    vbdSetMode(0);

    //initialise simulation inputs
    top->rst = 0;
    top->clk = 0;
    // run simulation for MAX_SIM_CYC cycles
    for(simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++){
        for (tick = 0; tick < 2; tick++){
            tfp->dump(2 * simcyc + tick);
            top->clk = !top->clk;
            top->eval();
        }

        // if(simcyc>790000){
        //     vbdPlot(top->a0, 0, 255);
        //     vbdCycle(simcyc);
        // }

        // rotary encoder can be used to slow simulation
        // std::this_thread::sleep_for(std::chrono::milliseconds(10 * vbdValue()));

        top->ioin1 = vbdFlag();
        top->ioin2 = vbdValue();
        vbdBar(top->a0);
        //790,000

        // displays CPU output
        // vbdHex(4, (int(top->a0) >> 16) & 0xF);
        // vbdHex(3, (int(top->a0) >> 8) & 0xF);
        // vbdHex(2, (int(top->a0) >> 4) & 0xF);
        // vbdHex(1, (int(top->a0)) & 0xF);

        if((Verilated::gotFinish()) || (vbdGetkey() == 'q')) {
            tfp->close();
            vbdClose();
            exit(0);
        }

    }
    vbdClose();
    tfp->close();
    exit(0);
}