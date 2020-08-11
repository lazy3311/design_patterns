#ifndef _RUNNING_HPP_
#define _WRUNNING_HPP_
#include "move_behavior.hpp"

class IRunning: public IMoveBehavior {
    public:
        std::string move() {
            return "Running...";
        }
};
#endif