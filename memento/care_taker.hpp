#ifndef _CARE_TAKER_HPP_
#define _CARE_TAKER_HPP_
#include <iostream>
#include <vector>
#include "memento.hpp"


class CareTaker {
    private:
        std::vector<Memento *> history;

    public:
        CareTaker() {
        }
        
        void add_memento(Memento *memento) {
            history.emplace_back(memento);
        }

        Memento * get_memento(unsigned int index) {
            return history.at(index);
        }
};

#endif