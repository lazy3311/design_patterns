#include "singelton.hpp"

Singelton *Singelton::instance_ = nullptr;

int main(int argc, char **argv) {
     std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  SINGELTON PATTERN : Creational" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "Singleton is a creational design pattern that lets you ensure that a\\
    \n\rclass has only one instance, while providing a global access point to this instance..." << std::endl;
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