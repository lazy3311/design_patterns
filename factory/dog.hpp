#ifndef _DOG_HPP_
#define _DOG_HPP_
#include <iostream>
#include "animal.hpp"

class Dog: public Animal {
    public:
        void which_animal() {
            std::cout << "Pet Animal DOG..." << std::endl;
        }
};
#endif