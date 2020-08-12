#ifndef _EDITOR_HPP
#define _EDITOR_HPP
#include "originator.hpp"
#include "care_taker.hpp"

class Editor {
    private:
        std::string visible_;
        CareTaker care_taker_;
        Originator originator_;

        signed int current;
        unsigned int stored;

    public:
        Editor() {
            current = -1;
            stored = 0;
        }

        void save() {
            std::string data;
            std::cout << "Enter Data: ";
            std::cin >> data;
            if (!data.empty()) {
                care_taker_.add_memento(originator_.store_memento(data));
                current++;
                stored++;
            }
        }

        void show() {
            if (current > -1)
                std::cout << "Show: " << originator_.restore_memento(care_taker_.get_memento(current)) << std::endl; 
            else
                std::cout << "None" << std::endl;
        }

        void undo() {
            if (current > -1)
                current--;
            
            show();
        }

        void redo() {
            if (stored > (current + 1))
                current++;

            show();
        }
};

#endif