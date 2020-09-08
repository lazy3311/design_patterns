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
        ElectronicDevice *tv_device_;
        DeviceButton *button_on_;
        DeviceButton *button_off_;
        DeviceButton *button_volumeup_;
        DeviceButton *button_volumedown_;

    public:
        TvRemote(ElectronicDevice *new_device): tv_device_(new_device) {
            TurnTvOn *command_tv_on = new TurnTvOn(new_device);
            button_on_ = new DeviceButton(command_tv_on);

            TurnTvOff *command_tv_off = new TurnTvOff(new_device);
            button_off_ = new DeviceButton(command_tv_off);
            
            TurnTvVolumeUp *command_tv_volumeup = new TurnTvVolumeUp(new_device);
            button_volumeup_ = new DeviceButton(command_tv_volumeup);
            
            TurnTvVolumeDown *command_tv_volumedown = new TurnTvVolumeDown(new_device);
            button_volumedown_ = new DeviceButton(command_tv_volumedown);
        }
        
        void press_on() {
            button_on_->press();
        }

        void press_off() {
            button_off_->press();
        }

        void press_volume_up() {
            button_volumeup_->press();
        }

        void press_volume_down() {
            button_volumedown_->press();
        }
};

#endif