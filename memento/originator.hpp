
#ifndef _ORIGINATOR_HPP
#define _ORIGINATOR_HPP
#include <iostream>
#include "memento.hpp"

class Originator {
    public:
        Memento * store_memento(std::string &data) {
            return new Memento(data);
        }

        std::string restore_memento(Memento *memento) {
            return memento->get_data();
        }

};

#endif