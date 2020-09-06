#include <iostream>
#include "proxy_image.hpp"

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