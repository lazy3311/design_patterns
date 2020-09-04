#include <iostream>
#include "tv_remote.hpp"
#include "television.hpp"


int main(int argc, char** argv) {
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  COMMAND PATTERN" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "The command pattern is a behavioral design pattern in which\\
    \n\ran object is used to encapsulate all information needed to \\
    \n\rperform an action or trigger an event at a later time.\\
    \n\rThis information includes the method name, the object that\\
    \n\rowns the method and values for the method parameters." << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;

    Television *tv = new Television();
    TvRemote *remote_control = new TvRemote(tv);
    bool loop = true;

     while(loop) {
        std::cout << "\n 1. Turn TV On\n 2. Turn TV Off\n 3. Turn TV Volume Up\n 4. Turn TV Volume Down\n 5. Exit" << std::endl;
        int option;

        std::cin >> option;
        switch(option) {
            case 1:
                remote_control->press_on();
                break;
            case 2:
                remote_control->press_off();
                break;
            case 3:
                remote_control->press_volume_up();
                break;
            case 4:
                remote_control->press_volume_down();
                break;
            case 5:
                loop = false;
                break;
            default:
                continue;
        }
     }


    return 0;
}