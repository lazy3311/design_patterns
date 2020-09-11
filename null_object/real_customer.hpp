#pragma once
#include "customer.hpp"

class RealCustomer : public Customer {
    private:
        std::string name_;
    public:
        RealCustomer(std::string name):name_(name) {};
        std::string get_name() { return name_; }
        virtual bool is_nil() { return false; }
};