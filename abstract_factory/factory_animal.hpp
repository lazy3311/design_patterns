#ifndef _FACTORY_ANIMAL_HPP_
#define _FACTORY_ANIMAL_HPP_
#include <iostream>
#include "animal.hpp"
#include "food.hpp"

class FactoryAnimal {
    public:
        virtual Animal * create_animal(std::string &animal_type) = 0;
        virtual Food * create_food(std::string &animal_type) = 0;
};
#endif