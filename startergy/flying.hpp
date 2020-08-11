#ifndef _FLYING_HPP_
#define _FLYING_HPP_
#include "move_behavior.hpp"

class IFlying: public IMoveBehavior {
    public:
        std::string move() {
            return "Flying...";
        }
};
#endif