#ifndef _ELECTRONIC_DEVICE_HPP_
#define _ELECTRONIC_DEVICE_HPP_
#include <iostream>

enum tv_state {
    ON,
    OFF
};

class ElectronicDevice {
    protected:
        int volume;
        tv_state state;
    public:
        ElectronicDevice() {
            volume = 0;
            state = OFF;
        }

        void set_onstate() {
            state = ON;
        }

        void set_offstate() {
            state = OFF;
        }
        
        tv_state get_state() {
            return state;
        }

        virtual void on() = 0;
        virtual void off() = 0;
        virtual void volume_up() = 0;
        virtual void volume_down() = 0;
};

#endif