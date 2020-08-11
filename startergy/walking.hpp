#ifndef _WALKING_HPP_
#define _WALKING_HPP_
#include "move_behavior.hpp"

class IWalking: public IMoveBehavior {
    public:
        std::string move() {
            return "Walking...";
        }
};
#endif