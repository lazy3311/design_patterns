#ifndef _EUROPEAN_SOCKET_HPP_
#define _EUROPEAN_SOCKET_HPP_
#include <iostream>
#include "plug.hpp"

class EuropeanSocket {
    private:
        int pin_numbers;
        bool device_plugged;
        
    public:
        EuropeanSocket() {
            pin_numbers = 3;
            device_plugged = false;
        }

        bool plug_in(Plug *plug) {
            if (plug->get_pins() != pin_numbers) {
                std::cout << plug->get_name() << " not compatible [European] socket!..." << std::endl;
                return false;
            }
            
            std::cout << plug->get_name() << " plugged into [European] socket" << std::endl;
            device_plugged = true;
            plug->set_power(device_plugged);
            return true;
        }

        void plug_out(Plug *plug) {
            device_plugged = false;
            plug->set_power(device_plugged);
            std::cout << plug->get_name() << " plugged out [European] socket" << std::endl;
        }
};

#endif