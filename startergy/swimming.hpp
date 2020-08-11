#ifndef _SWIMMING_HPP_
#define _SWIMMING_HPP_
#include "move_behavior.hpp"

class ISwimming: public IMoveBehavior {
    public:
        std::string move() {
            return "Swimming...";
        }
};
#endif