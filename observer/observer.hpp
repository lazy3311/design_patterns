#ifndef _OBSERVER_HPP_
#define _OBSERVER_HPP_
#include "station.hpp"


class IObserver {
    private:
        std::string name_;

    public:
        IObserver(IStation &station) {
            station.register_observer(this);
        }

        virtual void update(float temperature, float humidity, float percipitation) = 0;

        void set_name(std::string &name) {
            this->name_ = name;
        }

        std::string get_name() {
            return this->name_;
        }
};
#endif