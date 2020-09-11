#pragma once
#include <iostream>
#include "car_builder.hpp"

class CarDirector {
    private:
        CarBuilder *builder_;

    public:
        void set_builder(CarBuilder *new_builder) {
            builder_ = new_builder;
        }

        void build_car(int doors, std::string color, int seats) {
            builder_->add_platform();
            builder_->add_engine();
            builder_->add_doors(doors);
            builder_->add_paint(color);
            builder_->add_wheels();
            builder_->add_seats(seats);
            builder_->add_interior();
            builder_->add_exterior();
            std::cout << "Car is ready" << std::endl;
        }
};
