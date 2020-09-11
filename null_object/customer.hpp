#pragma once
#include <iostream>

class Customer {
    public:
        virtual std::string get_name() = 0;
        virtual bool is_nil() = 0;
};