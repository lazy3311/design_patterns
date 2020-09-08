#include <iostream>
#include "proxy_image.hpp"

int main(int argc, char** argv) {
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  PROXY PATTERN : Structural" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "Proxy is a structural design pattern that lets you provide a \\
    \n\rsubstitute or placeholder for another object. A proxy controls access to the \\
    \n\roriginal object, allowing you to perform something either before or after the \\
    \n\rrequest gets through to the original object." << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;

    std::string image_name = "nature.jpg";
    Image *img = new ProxyImage(image_name);

    img->display();
    img->display();
    img->display();
    img->display();

    return 0;
}