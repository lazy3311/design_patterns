#ifndef _PIZZA_HPP_
#define _PIZZA_HPP_
#include <iostream>

class IPizza {
    public:
        virtual std::string get_description() = 0;
        virtual float get_cost() = 0;
};

#endif