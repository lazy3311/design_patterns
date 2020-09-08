#ifndef _REAL_IMAGE_HPP_
#define _REAL_IMAGE_HPP_
#include <iostream>
#include "image.hpp"

class RealImage: public Image {
    private:
        std::string filename_;
    public:
        RealImage(std::string &image_name) {
            this->filename_ = image_name;
            this->load_image();
        }

        void load_image() {
            std::cout << this->filename_ << " loading..." << std::endl;
        }
        void display() {
            std::cout << this->filename_ << " displaying..." << std::endl;
        }
};

#endif