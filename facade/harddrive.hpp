#ifndef _HARDDRIVE_HPP_
#define _HARDDRIVE_HPP_
#include <iostream>

class HardDrive {
    public:
        int read_boot_sector() {
            std::cout << "Harddrive reading boot sector..." << std::endl;
            return 0x0000FFFF;
        }
};
#endif