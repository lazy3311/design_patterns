#include <iostream>
#include "animal.hpp"

int main(int argc, char **argv)
{
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  STARTERGY PATTERN : Behavioral" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "Strategy is a behavioral design pattern that lets you define a \\
    \n\rfamily of algorithms, put each of them into a separate class, and make their \\
    \n\robjects interchangeable." << std::endl;
    std::cout << "-------------------------------------------------------------------\n" << std::endl;
    
    Animal animal;
    while(true) {
        int option;
        std::cout << " 1. Set Animal Name\n 2. Set Animal Move Behavior(Algorithm)\n 3. Ask Animal Move\n 4. Exit" << std::endl;
        std::cout << "selection: ";
        std::cin >> option;
        std::cout << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');

        if (option == 1) {
            std::string name;
            std::cout << "Enter your animal name: ";
            std::cin >> name;
            animal.set_name(name);
        }
        else if(option == 2) {
            std::string move;
            std::cout << "Available move behaviors are [walking, running, flying & swimming]" << std::endl;
            std::cout << "Enter your choice: ";
            std::cin >> move;
            animal.set_move_behavior(move);
        }
        else if (option == 3) {
            animal.move();
        }
        else if (option == 4)
            break;

        std::cout << std::endl;
    }

    return 0;
}