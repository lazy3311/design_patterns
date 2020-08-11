#ifndef _TOPPING_DECORATOR_HPP_
#define _TOPPING_DECORATOR_HPP_
#include "pizza.hpp"

class IToppingDecorator: public  IPizza {
    protected:
        IPizza *base_pizza_;
    public:
        IToppingDecorator(IPizza *pizza) {
            this->base_pizza_ = pizza;
        }
        
        virtual std::string get_description() = 0;
        virtual float get_cost() = 0;
};

#endif