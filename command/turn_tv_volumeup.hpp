#ifndef _TURN_TV_VOLUMEUP_HPP_
#define _TURN_TV_VOLUMEUP_HPP_
#include "command.hpp"
#include "electronic_device.hpp"

class TurnTvVolumeUp: public Command {
    private:
        ElectronicDevice *the_device_;
    public:
        TurnTvVolumeUp(ElectronicDevice *new_device): the_device_(new_device) {}

        void execute() {
            the_device_->volume_up();
        }
};

#endif