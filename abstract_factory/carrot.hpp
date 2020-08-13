#ifndef _CARROT_HPP_
#define _CARROT_HPP_
#include <iostream>
#include "food.hpp"

class Carrot: public Food {
    public:
        virtual void which_food() {
            std::cout << "Carrot" << std::endl;
        }
};
#endif