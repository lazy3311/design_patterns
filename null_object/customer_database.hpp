#pragma once
#include <iostream>
#include "real_customer.hpp"
#include "null_customer.hpp"
#include <vector>

class CustomerDatabase {
    private:
        std::vector<std::string> database_;
    public:
        Customer * get_customer(std::string name) {
            for (auto c : database_) {
                if (c == name)
                    return new RealCustomer(name);
            }

            return new NullCustomer();
        }

        void add(std::string name) {
            database_.emplace_back(name);
        }
};