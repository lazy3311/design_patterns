#ifndef _USA_ADAPTER_EUROPEAN_HPP_
#define _USA_ADAPTER_EUROPEAN_HPP_
#include <iostream>
#include "usa_socket.hpp"
#include "european_socket.hpp"
#include "european_plug.hpp"

class USAAdapterEuropean: public USASocket {
    private:
        EuropeanSocket *euro_socket;
        EuropeanPlug *euro_plug;
    public:
        USAAdapterEuropean() : USASocket() {
            euro_socket = new EuropeanSocket();
            euro_plug = new EuropeanPlug();
        }

        bool plug_in(Plug *plug) {
            if (plug->get_pins() != pin_numbers) {
                std::cout << plug->get_name() << " not compatible [USA Adapter] socket!..." << std::endl;
                return false;
            }

            std::cout << "converting USA socket to European socket" << std::endl;
            euro_socket->plug_in(euro_plug);
            
            std::cout << plug->get_name() << " plugged into [USA Adapter] socket" << std::endl;
            device_plugged = true;
            plug->set_power(device_plugged);
            return true;
        }

        void plug_out(Plug *plug) {
            euro_socket->plug_out(euro_plug);

            device_plugged = false;
            plug->set_power(device_plugged);
            std::cout << plug->get_name() << " plugged out [USA Adapter] socket" << std::endl;
        }
};
#endif