#ifndef _MEMORY_HPP_
#define _MEMORY_HPP_
#include <iostream>

class Memory {
    public:
        int load(int address) {
            std::cout << "Memory loading " << address << std::endl;
            return 0x00000000;
        }
};
#endif