#ifndef _RABBIT_HPP_
#define _RABBIT_HPP_
#include <iostream>
#include "animal.hpp"

class Rabbit: public Animal {
    public:
        void which_animal() {
            std::cout << "Pet Animal Rabbit..." << std::endl;
        }
};
#endif