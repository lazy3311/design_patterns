#ifndef _TURN_TV_VOLUMEDOWN_HPP_
#define _TURN_TV_VOLUMEDOWN_HPP_
#include "command.hpp"
#include "electronic_device.hpp"

class TurnTvVolumeDown: public Command {
    private:
        ElectronicDevice *the_device;
    public:
        TurnTvVolumeDown(ElectronicDevice *new_device): the_device(new_device) {}

        void execute() {
            the_device->volume_down();
        }
};

#endif