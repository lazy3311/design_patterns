#ifndef _COMMAND_HPP_
#define _COMMAND_HPP_
#include <iostream>

class Command {
    public:
        virtual void execute() = 0;
};

#endif