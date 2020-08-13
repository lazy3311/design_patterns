#ifndef _CAT_HPP_
#define _CAT_HPP_
#include <iostream>
#include "animal.hpp"

class Cat: public Animal {
    public:
        void which_animal() {
            std::cout << "Pet Animal Cat..." << std::endl;
        }
};
#endif