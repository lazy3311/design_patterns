#pragma once
#include "customer.hpp"

class NullCustomer : public Customer {
    public:
        NullCustomer(){};
        std::string get_name() { return "null customer"; }
        virtual bool is_nil() { return true; }
};