#ifndef _PLUG_HPP_
#define _PLUG_HPP_
#include <iostream>

class Plug {
    protected:
        int pin_numbers;
        bool device_powered;
        std::string name;

    public:
        Plug() {
            pin_numbers = 0;
            device_powered = false;
        }

        int get_pins() {
            return this->pin_numbers;
        }

        void set_power(bool status) {
            this->device_powered = status;
        }

        std::string get_name() {
            return name;
        }
};
#endif