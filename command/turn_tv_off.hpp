#ifndef _TURN_TV_OFF_HPP_
#define _TURN_TV_OFF_HPP_
#include "command.hpp"
#include "electronic_device.hpp"

class TurnTvOff: public Command {
    private:
        ElectronicDevice *the_device_;
    public:
        TurnTvOff(ElectronicDevice *new_device): the_device_(new_device) {}

        void execute() {
            the_device_->off();
        }
};

#endif