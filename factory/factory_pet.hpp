#ifndef _FACTORY_PET_HPP_
#define _FACTORY_PET_HPP_
#include <iostream>
#include "factory_animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

class FactoryPet: public FactoryAnimal {
    public:
        Animal * create_animal(std::string &animal_type) {
            if (animal_type == "Dog")
                return new Dog();
            else if (animal_type == "Cat")
                return new Cat();
            else
                return NULL;
        }
};
#endif