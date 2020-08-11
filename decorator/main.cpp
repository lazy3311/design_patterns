#include <iostream>
#include "thincrust_pizza.hpp"
#include "topping_mozzarella.hpp"
#include "topping_sauce.hpp"

int main(int argc, char** argv) 
{
    IPizza *pizza = new ToppingMozarella(new ToppingSauce(new ThinCrustPizza()));
    std::cout << "Ready: " << pizza->get_description() << std::endl;
    std::cout << "Cost: $" << pizza->get_cost() << std::endl;
    return 0;
}