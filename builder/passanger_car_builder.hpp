#pragma once
#include <iostream>
#include "car_builder.hpp"
#include "passanger_car.hpp"

class PassangerCarBuilder : public CarBuilder {
    private:
        PassangerCar *car_;
    public:
        PassangerCarBuilder() {
            car_ = new PassangerCar();
            std::cout << "Building passanger car" << std::endl;
        }

        void add_platform() { 
            std::cout << "adding passanger platform" << std::endl;
        }

        void add_engine() { 
            std::cout << "adding passanger engine" << std::endl;
        }

        void add_doors(int count) { 
            std::cout << "adding doors " << count << std::endl;
        };

        void add_wheels() { 
            std::cout << "adding wheels " << std::endl;
        };

        void add_paint(std::string color) { 
            std::cout << "adding paint " << color << std::endl;
        };

        void add_seats(int count) { 
            std::cout << "adding seats " << count << std::endl;
        };

        void add_interior() { 
            std::cout << "adding interiors" << std::endl;
        };

        void add_exterior() { 
            std::cout << "adding exterior" << std::endl;
        };

        PassangerCar * get_car() {
            std::cout << "delivering car..." << std::endl;
            return car_;
        }
};

