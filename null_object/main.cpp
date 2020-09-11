#include <iostream>
#include "customer_database.hpp"
#include "customer.hpp"

int main(int argc, char** argv) {
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  NULL OBJECT PATTERN : Behavioral" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "Null object is to encapsulate the absence of an object by providing\\
    \n\ra substitute alaternative that offers suitable default do nothing behavior." << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;

    CustomerDatabase *cd = new CustomerDatabase();
    cd->add("jack");
    cd->add("tom");
    cd->add("henry");

    Customer *c1 = cd->get_customer("tom");
    std::cout << c1->get_name() << std::endl;

    Customer *c2 = cd->get_customer("nathon");
    std::cout << c2->get_name() << std::endl;
   
    return 0;
}