#ifndef _MOVE_BEHAVIOR_HPP_
#define _MOVE_BEHAVIOR_HPP_ 
#include <iostream>

class IMoveBehavior {
    public:
        virtual std::string move() = 0;
};
#endif