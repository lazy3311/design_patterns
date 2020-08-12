#ifndef _MEMENTO_HPP_
#define _MEMENTO_HPP_
#include <iostream>

class Memento {
    private:
        std::string data_;

    public:
        Memento(std::string data): data_(data){
        }

        std::string get_data() {
            return data_;
        }
};

#endif