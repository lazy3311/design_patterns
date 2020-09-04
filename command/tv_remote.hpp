#ifndef _TV_REMOTE_HPP_
#define _TV_REMOTE_HPP_
#include "electronic_device.hpp"

#include "turn_tv_on.hpp"
#include "turn_tv_off.hpp"
#include "turn_tv_volumeup.hpp"
#include "turn_tv_volumedown.hpp"
#include "device_button.hpp"

class TvRemote {
    private:
        ElectronicDevice *tv_device;
        DeviceButton *button_on;
        DeviceButton *button_off;
        DeviceButton *button_volumeup;
        DeviceButton *button_volumedown;

    public:
        TvRemote(ElectronicDevice *new_device): tv_device(new_device) {
            TurnTvOn *command_tv_on = new TurnTvOn(new_device);
            button_on = new DeviceButton(command_tv_on);

            TurnTvOff *command_tv_off = new TurnTvOff(new_device);
            button_off = new DeviceButton(command_tv_off);
            
            TurnTvVolumeUp *command_tv_volumeup = new TurnTvVolumeUp(new_device);
            button_volumeup = new DeviceButton(command_tv_volumeup);
            
            TurnTvVolumeDown *command_tv_volumedown = new TurnTvVolumeDown(new_device);
            button_volumedown = new DeviceButton(command_tv_volumedown);
        }
        
        void press_on() {
            button_on->press();
        }

        void press_off() {
            button_off->press();
        }

        void press_volume_up() {
            button_volumeup->press();
        }

        void press_volume_down() {
            button_volumedown->press();
        }
};

#endif