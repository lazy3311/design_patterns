#ifndef _DEVICE_BUTTON_HPP_
#define _DEVICE_BUTTON_HPP_
#include "command.hpp"

class DeviceButton {
    private:
        Command *the_command_;
    public:
        DeviceButton(Command *new_command): the_command_(new_command) {}

        void press() {
            the_command_->execute();
        }
};

#endif