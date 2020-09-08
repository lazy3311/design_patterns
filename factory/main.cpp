#include <iostream>
#include "factory_pet.hpp"

int main(int argc, char** argv) {
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  FACTORY PATTERN : Creational" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "Factory Method is a creational design pattern that provides an\\
    \n\rinterface for creating objects in a superclass, but allows subclasses to alter\\
    \n\rthe type of objects that will be created." << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    

    FactoryAnimal *pet_factory = new FactoryPet();

    while(true) {
        std::cout << "\n 1. Create Animal\n 2. Exit" << std::endl;
        int option;

        std::cin >> option;
        if (option == 2)
            break;
        else {
            std::cout << "Enter [Dog, Cat] selection? ";
            std::string name;
            std::cin >> name;
            Animal *new_animal = pet_factory->create_animal(name);
            if (new_animal) 
                new_animal->which_animal();
            else
                std::cout << "We cannot create!..." << std::endl;
        }
    }
    return 0;
}