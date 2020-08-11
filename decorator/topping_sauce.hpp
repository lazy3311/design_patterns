#ifndef _TOPPING_SAUCE_HPP_
#define _TOPPING_SAUCE_HPP_
#include "topping_decorator.hpp"

class ToppingSauce: public  IToppingDecorator {
    public:
        ToppingSauce(IPizza *pizza): IToppingDecorator(pizza) {
            std::cout << "Add Sauce" << std::endl;
        }

        virtual std::string get_description() {
            return this->base_pizza_->get_description() + ", Sauce";
        }
        
        virtual float get_cost() {
            return this->base_pizza_->get_cost() + 1.5;
        }
};

#endif