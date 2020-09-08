#ifndef _ELECTRONIC_DEVICE_HPP_
#define _ELECTRONIC_DEVICE_HPP_
#include <iostream>

enum tv_state {
    ON,
    OFF
};

class ElectronicDevice {
    protected:
        int volume_;
        tv_state state_;
    public:
        ElectronicDevice() {
            volume_ = 0;
            state_ = OFF;
        }

        void set_onstate() {
            state_ = ON;
        }

        void set_offstate() {
            state_ = OFF;
        }
        
        tv_state get_state() {
            return state_;
        }

        virtual void on() = 0;
        virtual void off() = 0;
        virtual void volume_up() = 0;
        virtual void volume_down() = 0;
};

#endif