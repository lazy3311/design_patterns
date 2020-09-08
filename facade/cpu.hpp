#ifndef _CPU_HPP_
#define _CPU_HPP_
#include <iostream>

class CPU {
    public:
        void jump(int address) {
            std::cout << "CPU pointing address " << address << std::endl;
        }

        void execute() {
            std::cout << "CPU executing instructions..." << std::endl;
        }
};
#endif