#ifndef _ANIMAL_HPP_
#define _ANIMAL_HPP_
#include <iostream>
#include "food.hpp"

class Animal {
    public:
        virtual void which_animal() = 0;
        virtual void feed_food(Food *food) {
            std::cout << "Eating :";
            food->which_food();
        }
};
#endif