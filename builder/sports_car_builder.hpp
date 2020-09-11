#pragma once
#include <iostream>
#include "car_builder.hpp"
#include "sports_car.hpp"

class SportsCarBuilder : public CarBuilder {
    private:
        SportsCar *car_;
    public:
        SportsCarBuilder() {
            car_ = new SportsCar();
            std::cout << "Building sports car" << std::endl;
        }

        void add_platform() { 
            std::cout << "adding sports platform" << std::endl;
        }

        void add_engine() { 
            std::cout << "adding sports engine" << std::endl;
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

        SportsCar * get_car() {
            std::cout << "delivering car..." << std::endl;
            return car_;
        }
};
