#ifndef _COMPUTER_FACADE_HPP_
#define _COMPUTER_FACADE_HPP_
#include "cpu.hpp"
#include "harddrive.hpp"
#include "memory.hpp"

class ComputerFacade {
    private:
        CPU *cpu_;
        HardDrive *hard_drive_;
        Memory *memory_;
    public:
        ComputerFacade() {
            cpu_ = new CPU();
            hard_drive_ = new HardDrive();
            memory_ = new Memory();
            
        }
        void start() {
            int sector = hard_drive_->read_boot_sector();
            int mem_address = memory_->load(sector);
            cpu_->jump(mem_address);
            cpu_->execute();
        }
};

#endif