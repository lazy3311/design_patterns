#ifndef _WEATHERSTATION_HPP_
#define _WEATHERSTATION_HPP_
#include "station.hpp"
#include "observer.hpp"
#include <list>

class WeatherStation: public IStation {
    private:
        std::list<IObserver *> list_observer_;

        float temperature_;
        float humidity_;
        float percipitation_;
    public:
        WeatherStation() {
            temperature_ = 27.0f;
            humidity_ = 10.0f;
            percipitation_ = 0.1f;
        }

        void register_observer(IObserver *observer) {
            for (auto &it: list_observer_) {
                if (it == observer)
                    return;
            }
            list_observer_.emplace_back(observer);
        }

        void unregister_observer(IObserver *observer) {
            list_observer_.remove(observer);
        }

        void notify() {
            for(auto &it : this->list_observer_) {
                it->update(this->temperature_, this->humidity_, this->percipitation_);
            }
        }  

        void set_weatherdata(float temperature, float humidity, float percipitation) { 
            this->temperature_ = temperature;
            this->humidity_ = humidity;
            this->percipitation_ = percipitation;
            notify();
        }
};
#endif