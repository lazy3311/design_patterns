#pragma once
#include <iostream>
#include "animal.hpp"

class Wild : public Animal {
    public:
        Wild() {
            type_ = "Wild";
        }

        Animal * clone() {
            return new Wild(*this);
        }
};