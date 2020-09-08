#ifndef _USA_ADAPTER_EUROPEAN_HPP_
#define _USA_ADAPTER_EUROPEAN_HPP_
#include <iostream>
#include "usa_socket.hpp"
#include "european_socket.hpp"
#include "european_plug.hpp"

class USAAdapterEuropean: public USASocket {
    private:
        EuropeanSocket *euro_socket_;
        EuropeanPlug *euro_plug_;
    public:
        USAAdapterEuropean() : USASocket() {
            euro_socket_ = new EuropeanSocket();
            euro_plug_ = new EuropeanPlug();
        }

        bool plug_in(Plug *plug) {
            if (plug->get_pins() != pin_numbers_) {
                std::cout << plug->get_name() << " not compatible [USA Adapter] socket!..." << std::endl;
                return false;
            }

            std::cout << "converting USA socket to European socket" << std::endl;
            euro_socket_->plug_in(euro_plug_);
            
            std::cout << plug->get_name() << " plugged into [USA Adapter] socket" << std::endl;
            device_plugged_ = true;
            plug->set_power(device_plugged_);
            return true;
        }

        void plug_out(Plug *plug) {
            euro_socket_->plug_out(euro_plug_);

            device_plugged_ = false;
            plug->set_power(device_plugged_);
            std::cout << plug->get_name() << " plugged out [USA Adapter] socket" << std::endl;
        }
};
#endif