#include <iostream>
// #include "music_album_view.hpp"
// #include "book_view.hpp"

class Image {
    public:
        virtual void display() = 0;
};

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


class ProxyImage: public Image {
    private:
        RealImage *real;
    public:
        ProxyImage(std::string &image_name) {
            real = new RealImage(image_name);
        }

        void display() {
            real->display();
        }
};

int main(int argc, char** argv) {
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  PROXY PATTERN" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "Proxy Design Pattern means ‘in place of’, representing’ or ‘in place of’ or \\
    \n\r‘on behalf of’ something, to restrict the access to resources." << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;

    std::string image_name = "nature.jpg";
    Image *img = new ProxyImage(image_name);

    img->display();
    img->display();
    img->display();
    img->display();

    return 0;
}