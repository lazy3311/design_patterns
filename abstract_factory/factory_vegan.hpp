#ifndef _FACTORY_VEGAN_HPP_
#define _FACTORY_VEGAN_HPP_
#include <iostream>
#include "factory_animal.hpp"
#include "cow.hpp"
#include "rabbit.hpp"
#include "grass.hpp"
#include "carrot.hpp"

class FactoryVegan:public FactoryAnimal {
    public:
        Animal * create_animal(std::string &animal_type) {
            if (animal_type == "Cow")
                return new Cow();
            else if (animal_type == "Rabbit")
                return new Rabbit();
            else
                return NULL;
        }

        Food * create_food(std::string &animal_type) {
            if (animal_type == "Cow")
                return new Grass();
            else if (animal_type == "Rabbit")
                return new Carrot();
            else
                return NULL;
        }
};
#endif