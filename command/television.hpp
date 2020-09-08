#ifndef _TELEVISION_HPP_
#define _TELEVISION_HPP_
#include "electronic_device.hpp"

class Television: public ElectronicDevice {
    public:
        Television() : ElectronicDevice() {}

        void on() {
            std::cout << "Television is ON..." << std::endl;
            set_onstate();
        }
        
        void off() {
            std::cout << "Television is OFF..." << std::endl;
            set_offstate();
        }

        void volume_up() {
            if (get_state() == OFF)
                std::cout << "Oops: Televison is OFF";
            else
                std::cout << "Television Volume is UP: " << ++volume_ << std::endl;
        }

        void volume_down() {
            if (get_state() == OFF)
                std::cout << "Oops: Televison is OFF";
            else
                std::cout << "Television Volume is DOWN: " << --volume_ << std::endl;
        }
};

#endif