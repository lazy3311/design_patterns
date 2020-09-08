#include <iostream>
#include "mario.hpp"
#include "tank_fight.hpp"

int main(int argc, char** argv) {
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  TEMPLATE METHOD PATTERN : Behavioral" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "Template Method is a behavioral design pattern that defines the \\
    \n\rskeleton of an algorithm in the superclass but lets subclasses override \\
    \n\rspecific steps of the algorithm without changing its structure." << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;

    Mario mario;
    mario.play();
    
    std::cout << "---------------------" << std::endl;

    TankFight tank;
    tank.play();

    return 0;
}