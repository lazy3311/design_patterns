#include "wild.hpp"
#include "pet.hpp"

int main(int argc, char** argv) {
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  PROTOTYPE PATTERN : Creational" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "Prototype is a creational design pattern that lets you copy existing \\
    \n\robjects without making your code dependent on their classes." << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;

    Animal *wild = new Wild();
    wild->set_name("Tiger");
    wild->show_animal();

    std::cout << "Cloning..." << std::endl;
    Animal *wild_clone = wild->clone();
    wild->show_animal();
    wild_clone->show_animal();

    std::cout << "update cloning name..." << std::endl;
    wild_clone->set_name("Lion");
    std::cout << "Original" << std::endl;
    wild->show_animal();
    std::cout << "Cloned" << std::endl;
    wild_clone->show_animal();

    std::cout << "--------------------" << std::endl;
    Animal *pet = new Pet();
    pet->set_name("Rabbit");
    pet->show_animal();

    std::cout << "Cloning..." << std::endl;
    Animal *pet_clone = pet->clone();
    pet->show_animal();
    pet_clone->show_animal();

    std::cout << "update cloning name..." << std::endl;
    pet_clone->set_name("Dog");
    std::cout << "Original" << std::endl;
    pet->show_animal();
    std::cout << "Cloned" << std::endl;
    pet_clone->show_animal();
   
    return 0;
}