#include <iostream>
#include "usa_plug.hpp"
#include "european_plug.hpp"
#include "european_socket.hpp"
#include "usa_socket.hpp"
#include "usa_adapter_european.hpp"


int main(int argc, char** argv) {
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  COMMAND PATTERN" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "The adapter pattern is a software design pattern that allows the\\
    \n\rinterface of an existing class to be used as another interface.\\
    \n\rIt is often used to make existing classes work with others without\\
    \n\rmodifying their source code" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;

    USAPlug *usa_plug = new USAPlug();
    EuropeanPlug *euro_plug = new EuropeanPlug();

    EuropeanSocket *euro_socket = new EuropeanSocket();
    USASocket *usa_socket = new USASocket();

    if (usa_socket->plug_in(usa_plug))
        usa_socket->plug_out(usa_plug);

    if (euro_socket->plug_in(euro_plug))
        euro_socket->plug_out(euro_plug);

    if (euro_socket->plug_in(usa_plug))
        euro_socket->plug_out(usa_plug);

    if (usa_socket->plug_in(euro_plug))
        usa_socket->plug_out(euro_plug);

    std::cout << "Lets try with adapter for incompatible types" << std::endl;
    USAAdapterEuropean *usa_adapter = new USAAdapterEuropean();

    if (usa_adapter->plug_in(usa_plug))
        usa_adapter->plug_out(usa_plug);

    return 0;
}