#ifndef _PLUG_HPP_
#define _PLUG_HPP_
#include <iostream>

class Plug {
    protected:
        int pin_numbers_;
        bool device_powered_;
        std::string name_;

    public:
        Plug() {
            pin_numbers_ = 0;
            device_powered_ = false;
        }

        int get_pins() {
            return this->pin_numbers_;
        }

        void set_power(bool status) {
            this->device_powered_ = status;
        }

        std::string get_name() {
            return name_;
        }
};
#endif