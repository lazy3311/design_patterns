#include <iostream>
#include "computer_facade.hpp"

int main(int argc, char** argv) {
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  FACADE PATTERN : Structural" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "Facade is a structural design pattern that provides a simplified\\
    \n\rinterface to a library, a framework, or any other complex set of classes." << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;

    ComputerFacade computer;
    computer.start();

    return 0;
}