#ifndef _PERCIPITATION_HPP_
#define _PERCIPITATION_HPP_
#include <iostream>
#include "observer.hpp"

class Percipitation: public IObserver {
    private:
        float percipitation_;
    public:
        Percipitation(IStation &station): IObserver(station) {
            percipitation_ = 0.0f;
        }
        virtual void update(float temperature, float humidity, float percipitation) {
            if ( this->percipitation_ != percipitation) {
                std::cout << "\n" << this->get_name() << " Percipitation Updated: " << percipitation << std::endl;
                this->percipitation_ = percipitation;
            }
        }
};
#endif