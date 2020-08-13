#include "singelton.hpp"

Singelton *Singelton::instance_ = nullptr;

int main(int argc, char **argv) {
     std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  SINGELTON PATTERN" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "The singleton pattern is a software design pattern that restricts\\
    \n\rthe instantiation of a class to one instance. This is useful\\
    \n\rwhen exactly one object is needed to coordinate actions\\
    \n\racross the system. . " << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
   
    Singelton *handle = Singelton::get_instance();
    std::cout << handle << std::endl;
    
    handle->set(10);
    std::cout << "H1 Data: " << handle->get() << std::endl;

    Singelton *handle_two = Singelton::get_instance();
    std::cout << handle_two << std::endl;
    
    std::cout << "H2 Data: " << handle_two->get() << std::endl;
    handle_two->set(20);
    std::cout << "H2 Data: " << handle_two->get() << std::endl;
    std::cout << "H1 Data: " << handle->get() << std::endl;

    return 0;
}