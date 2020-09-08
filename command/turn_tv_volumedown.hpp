#ifndef _TURN_TV_VOLUMEDOWN_HPP_
#define _TURN_TV_VOLUMEDOWN_HPP_
#include "command.hpp"
#include "electronic_device.hpp"

class TurnTvVolumeDown: public Command {
    private:
        ElectronicDevice *the_device_;
    public:
        TurnTvVolumeDown(ElectronicDevice *new_device): the_device_(new_device) {}

        void execute() {
            the_device_->volume_down();
        }
};

#endif