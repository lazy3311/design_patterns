#ifndef _COW_HPP_
#define _COW_HPP_
#include <iostream>
#include "animal.hpp"

class Cow: public Animal {
    public:
        void which_animal() {
            std::cout << "Pet Animal Cow..." << std::endl;
        }
};
#endif