#pragma once

#include <iostream>

class CarBuilder {
    public:
        virtual void add_platform() = 0;
        virtual void add_engine() = 0;
        virtual void add_doors(int count) = 0;
        virtual void add_wheels() = 0;
        virtual void add_paint(std::string color) = 0;
        virtual void add_seats(int count) = 0;
        virtual void add_interior() = 0;
        virtual void add_exterior() = 0;
};