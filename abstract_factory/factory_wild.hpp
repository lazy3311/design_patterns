#ifndef _FACTORY_WILD_HPP_
#define _FACTORY_WILD_HPP_
#include <iostream>
#include "factory_animal.hpp"
#include "tiger.hpp"
#include "meat.hpp"

class FactoryWild:public FactoryAnimal {
    public:
        Animal * create_animal(std::string &animal_type) {
            if (animal_type == "Tiger")
                return new Tiger();
            else
                return NULL;
        }

        virtual Food * create_food(std::string &animal_type) {
            if (animal_type == "Tiger")
                return new Meat();
            else
                return NULL;
        }
};
#endif