#include <iostream>
#include "thincrust_pizza.hpp"
#include "topping_mozzarella.hpp"
#include "topping_sauce.hpp"

int main(int argc, char** argv) 
{
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  DECORATOR PATTERN : Structural" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "Decorator is a structural design pattern that lets you attach \\
    \n\rnew behaviors to objects by placing these objects inside special wrapper \\
    \n\robjects that contain the behaviors." << std::endl;
    std::cout << "-------------------------------------------------------------------\n" << std::endl;
    
    IPizza *pizza = new ToppingMozarella(new ToppingSauce(new ThinCrustPizza()));
    std::cout << "Ready: " << pizza->get_description() << std::endl;
    std::cout << "Cost: $" << pizza->get_cost() << std::endl;
    return 0;
}