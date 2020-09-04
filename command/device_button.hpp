#ifndef _DEVICE_BUTTON_HPP_
#define _DEVICE_BUTTON_HPP_
#include "command.hpp"

class DeviceButton {
    private:
        Command *the_command;
    public:
        DeviceButton(Command *new_command): the_command(new_command) {}

        void press() {
            the_command->execute();
        }
};

#endif