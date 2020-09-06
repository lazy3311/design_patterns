#ifndef _REAL_IMAGE_HPP_
#define _REAL_IMAGE_HPP_
#include <iostream>
#include "image.hpp"

class RealImage: public Image {
    private:
        std::string filename;
    public:
        RealImage(std::string &image_name) {
            this->filename = image_name;
            this->load_image();
        }

        void load_image() {
            std::cout << this->filename << " loading..." << std::endl;
        }
        void display() {
            std::cout << this->filename << " displaying..." << std::endl;
        }
};

#endif