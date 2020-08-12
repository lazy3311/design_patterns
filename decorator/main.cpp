#include <iostream>
#include "thincrust_pizza.hpp"
#include "topping_mozzarella.hpp"
#include "topping_sauce.hpp"

int main(int argc, char** argv) 
{
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  DECORATOR PATTERN" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "In object-oriented programming, the decorator pattern is a\\ 
    \n\rdesign pattern that allows behavior to be added to an\\
    \n\rindividual object, dynamically, without affecting the\\
    \n\rbehavior of other objects from the same class." << std::endl;
    std::cout << "-------------------------------------------------------------------\n" << std::endl;
    
    IPizza *pizza = new ToppingMozarella(new ToppingSauce(new ThinCrustPizza()));
    std::cout << "Ready: " << pizza->get_description() << std::endl;
    std::cout << "Cost: $" << pizza->get_cost() << std::endl;
    return 0;
}