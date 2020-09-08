#ifndef _PROXY_IMAGE_HPP_
#define _PROXY_IMAGE_HPP_
#include <iostream>
#include "real_image.hpp"

class ProxyImage: public Image {
    private:
        RealImage *real_;
    public:
        ProxyImage(std::string &image_name) {
            real_ = new RealImage(image_name);
        }

        void display() {
            real_->display();
        }
};


#endif