#ifndef _STATION_HPP_
#define _STATION_HPP_
// #include "observer.hpp"

class IObserver;
class IStation {
    public:
        virtual void register_observer(IObserver *observer) = 0;

        virtual void unregister_observer(IObserver *observer) = 0;

        virtual void notify() = 0;        
};
#endif