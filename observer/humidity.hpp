#ifndef _HUMIDITY_HPP_
#define _HUMIDITY_HPP_
#include <iostream>
#include "observer.hpp"

class Humidity: public IObserver {
    private:
        float humidity_;
    public:
        Humidity(IStation &station): IObserver(station) {
            humidity_ = 0.0f;
        }
        virtual void update(float temperature, float humidity, float percipitation) {
            if ( this->humidity_ != humidity) {
                std::cout << "\n" << this->get_name() << " Humidity Updated: " << humidity << std::endl;
                this->humidity_ = humidity;
            }
        }
};
#endif