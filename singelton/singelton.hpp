#ifndef _SINGELTON_HPP_
#define _SINGELTON_HPP_
#include <iostream>

class Singelton {
    private:
        static Singelton *instance_;
        int data_;

        Singelton() {
            data_ = 0;
        }
    
    public:

        static Singelton * get_instance() {
            if (instance_ == nullptr)
                instance_ = new Singelton();

            return instance_;
        }

        void set(int data) {
            data_ = data;
        }

        int get() {
            return data_;
        }
};
#endif