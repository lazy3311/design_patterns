#pragma once
#include <iostream>
#include "animal.hpp"

class Pet : public Animal {
    public:
        Pet() {
            type_ = "Pet";
        }

        Animal * clone() {
            return new Pet(*this);
        }
};