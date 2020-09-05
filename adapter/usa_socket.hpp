#ifndef _USA_SOCKET_HPP_
#define _USA_SOCKET_HPP_
#include <iostream>
#include "plug.hpp"

class USASocket {
    protected:
        int pin_numbers;
        bool device_plugged;
        
    public:
        USASocket() {
            pin_numbers = 2;
            device_plugged = false;
        }

        bool plug_in(Plug *plug) {
            if (plug->get_pins() != pin_numbers) {
                std::cout << plug->get_name() << " not compatible [USA] socket!..." << std::endl;
                return false;
            }
            
            std::cout << plug->get_name() << " plugged into [USA] socket" << std::endl;
            device_plugged = true;
            plug->set_power(device_plugged);
            return true;
        }

        void plug_out(Plug *plug) {
            device_plugged = false;
            plug->set_power(device_plugged);
            std::cout << plug->get_name() << " plugged out [USA] socket" << std::endl;
        }
};
#endif