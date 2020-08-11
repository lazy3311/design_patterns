#ifndef _TEMPERATURE_HPP_
#define _TEMPERATURE_HPP_
#include <iostream>
#include "observer.hpp"

class Temperature: public IObserver {
    private:
        float temperature_;
    public:
        Temperature(IStation &station): IObserver(station) {
            temperature_ = 0.0f;
        }
        virtual void update(float temperature, float humidity, float percipitation) {
            if ( this->temperature_ != temperature) {
                std::cout << "\n" << this->get_name() << " Temperature Updated: " << temperature << std::endl;
                this->temperature_ = temperature;
            }
        }
};
#endif