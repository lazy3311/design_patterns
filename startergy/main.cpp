#include <iostream>
#include "animal.hpp"

int main(int argc, char **argv)
{
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  STARTERGY PATTERN" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "The strategy pattern is a behavioral software design pattern that \n\\
    \renables selecting an algorithm at runtime. Instead of implementing\n\\
    \ra single algorithm directly, code receives run-time instructions as\n\\
    \rto which in a family of algorithms to use." << std::endl;
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