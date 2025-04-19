#include "Vtop.h"
#include "verilated.h"
#include <iostream>

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtop* top = new Vtop;

    top->clk = 0;
    top->reset = 1;

    // 初始几个周期复位
    for (int i = 0; i < 4; ++i) {
        top->clk = !top->clk;
        top->eval();
        main_time++;
    }

    top->reset = 0;

    for (int cycle = 0; cycle < 15; ++cycle) {
        top->clk = !top->clk;
        top->eval();

        if (top->clk) {
            std::cout << "[Cycle " << (cycle / 2)
                      << "] PC = 0x" << std::hex << top->debug_current_addr
                      << " | inst = 0x" << top->debug_current_inst
                      << " | ALU = 0x" << top->debug_ALU_out << std::endl;
        }

        main_time++;
    }

    delete top;
    return 0;
}
