#ifndef _THINCRUST_PIZZA_HPP_
#define _THINCRUST_PIZZA_HPP_
#include "pizza.hpp"

class ThinCrustPizza: public  IPizza {
    public:
        ThinCrustPizza() {
            std::cout << "Add Thin Crust Dough" << std::endl;
        }
        virtual std::string get_description() {
            return "Pizza Thin Crust";
        }
        virtual float get_cost() {
            return 4;
        }
};

#endif