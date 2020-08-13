#ifndef _GRASS_HPP_
#define _GRASS_HPP_
#include <iostream>
#include "food.hpp"

class Grass: public Food {
    public:
        virtual void which_food() {
            std::cout << "Grass" << std::endl;
        }
};
#endif