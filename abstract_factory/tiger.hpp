#ifndef _TIGER_HPP_
#define _TIGER_HPP_
#include <iostream>
#include "animal.hpp"

class Tiger: public Animal {
    public:
        void which_animal() {
            std::cout << "Pet Animal Tiger..." << std::endl;
        }
};
#endif