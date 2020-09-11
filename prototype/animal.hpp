#pragma once
#include <iostream>

class Animal {
    protected:
        std::string type_;
        std::string name_;
    public:
        void set_name(std::string name) { name_ = name; }
        virtual Animal * clone() = 0;
        void show_animal() {
            std::cout << type_ << " - " << name_ << std::endl;
        }
};