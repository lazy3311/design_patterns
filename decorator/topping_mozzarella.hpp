#ifndef _TOPPING_MOZARELLA_HPP_
#define _TOPPING_MOZARELLA_HPP_
#include "topping_decorator.hpp"

class ToppingMozarella: public  IToppingDecorator {
    public:
        ToppingMozarella(IPizza *pizza): IToppingDecorator(pizza) {
            std::cout << "Add Mozarella" << std::endl;
        }

        virtual std::string get_description() {
            return this->base_pizza_->get_description() + ", Mozarella";
        }

        virtual float get_cost() {
            return this->base_pizza_->get_cost() + 1.35;
        }
};

#endif