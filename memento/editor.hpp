#ifndef _EDITOR_HPP
#define _EDITOR_HPP
#include "originator.hpp"
#include "care_taker.hpp"

class Editor {
    private:
        std::string visible_;
        CareTaker care_taker_;
        Originator originator_;

        signed int current_;
        unsigned int stored_;

    public:
        Editor() {
            current_ = -1;
            stored_ = 0;
        }

        void save() {
            std::string data;
            std::cout << "Enter Data: ";
            std::cin >> data;
            if (!data.empty()) {
                care_taker_.add_memento(originator_.store_memento(data));
                current_++;
                stored_++;
            }
        }

        void show() {
            if (current_ > -1)
                std::cout << "Show: " << originator_.restore_memento(care_taker_.get_memento(current_)) << std::endl; 
            else
                std::cout << "None" << std::endl;
        }

        void undo() {
            if (current_ > -1)
                current_--;
            
            show();
        }

        void redo() {
            if (stored_ > (current_ + 1))
                current_++;

            show();
        }
};

#endif