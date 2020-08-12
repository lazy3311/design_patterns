#include "editor.hpp"

int main(int argc, char **argv) {
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  MEMENTO PATTERN" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "The memento pattern is a software design pattern that provides the\\ 
    \n\rability to restore an object to its previous state (undo via rollback)." << std::endl;
    std::cout << "-------------------------------------------------------------------\n" << std::endl;
    
    Editor editor;

    while(true) {
        int option;
        std::cout << " 1. Show\n 2. Save\n 3. Undo\n 4. Redo\n 5. Exit" << std::endl;
        std::cout << "selection: ";
        std::cin >> option;
        std::cout << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');

        if (option == 1) {
            editor.show();
        }
        else if (option == 2) {
            editor.save();
        }
        else if (option == 3) {
            editor.undo();
        }
        else if (option == 4) {
            editor.redo();
        }
        else if (option == 5) {
            break;
        }
    }
    return 0;
}