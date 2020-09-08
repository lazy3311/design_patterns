#ifndef _USA_SOCKET_HPP_
#define _USA_SOCKET_HPP_
#include <iostream>
#include "plug.hpp"

class USASocket {
    protected:
        int pin_numbers_;
        bool device_plugged_;
        
    public:
        USASocket() {
            pin_numbers_ = 2;
            device_plugged_ = false;
        }

        bool plug_in(Plug *plug) {
            if (plug->get_pins() != pin_numbers_) {
                std::cout << plug->get_name() << " not compatible [USA] socket!..." << std::endl;
                return false;
            }
            
            std::cout << plug->get_name() << " plugged into [USA] socket" << std::endl;
            device_plugged_ = true;
            plug->set_power(device_plugged_);
            return true;
        }

        void plug_out(Plug *plug) {
            device_plugged_ = false;
            plug->set_power(device_plugged_);
            std::cout << plug->get_name() << " plugged out [USA] socket" << std::endl;
        }
};
#endif