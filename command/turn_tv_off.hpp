#ifndef _TURN_TV_OFF_HPP_
#define _TURN_TV_OFF_HPP_
#include "command.hpp"
#include "electronic_device.hpp"

class TurnTvOff: public Command {
    private:
        ElectronicDevice *the_device;
    public:
        TurnTvOff(ElectronicDevice *new_device): the_device(new_device) {}

        void execute() {
            the_device->off();
        }
};

#endif