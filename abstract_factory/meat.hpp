#ifndef _MEAT_HPP_
#define _MEAT_HPP_
#include <iostream>
#include "food.hpp"

class Meat: public Food {
    public:
        virtual void which_food() {
            std::cout << "Meat" << std::endl;
        }
};
#endif