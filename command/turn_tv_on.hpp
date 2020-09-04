#ifndef _TURN_TV_ON_HPP_
#define _TURN_TV_ON_HPP_
#include "command.hpp"
#include "electronic_device.hpp"

class TurnTvOn: public Command {
    private:
        ElectronicDevice *the_device;
    public:
        TurnTvOn(ElectronicDevice *new_device): the_device(new_device) {}

        void execute() {
            the_device->on();
        }
};

#endif