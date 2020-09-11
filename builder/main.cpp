#include <iostream>
#include "car_director.hpp"
#include "passanger_car_builder.hpp"
#include "sports_car_builder.hpp"

int main(int argc, char** argv) {
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  BUILDER PATTERN : Creational" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "Builder is a creational design pattern that lets you construct \\
    \n\rcomplex objects step by step. The pattern allows you to produce different types \\
    \n\rand representations of an object using the same construction code." << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;

    CarDirector *director = new CarDirector();

    std::cout << "----PASSANGER CAR----" << std::endl; 
    PassangerCarBuilder *pb = new PassangerCarBuilder();
    director->set_builder(pb);
    director->build_car(4, "WHITE", 4);
    PassangerCar *pc = pb->get_car();
   
    std::cout << "----SPORTS CAR----" << std::endl; 
    SportsCarBuilder *sb = new SportsCarBuilder();
    director->set_builder(sb);
    director->build_car(2, "RED", 2);
    SportsCar *sc = sb->get_car();
   
    return 0;
}