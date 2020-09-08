#ifndef _EUROPEAN_SOCKET_HPP_
#define _EUROPEAN_SOCKET_HPP_
#include <iostream>
#include "plug.hpp"

class EuropeanSocket {
    private:
        int pin_numbers_;
        bool device_plugged_;
        
    public:
        EuropeanSocket() {
            pin_numbers_ = 3;
            device_plugged_ = false;
        }

        bool plug_in(Plug *plug) {
            if (plug->get_pins() != pin_numbers_) {
                std::cout << plug->get_name() << " not compatible [European] socket!..." << std::endl;
                return false;
            }
            
            std::cout << plug->get_name() << " plugged into [European] socket" << std::endl;
            device_plugged_ = true;
            plug->set_power(device_plugged_);
            return true;
        }

        void plug_out(Plug *plug) {
            device_plugged_ = false;
            plug->set_power(device_plugged_);
            std::cout << plug->get_name() << " plugged out [European] socket" << std::endl;
        }
};

#endif