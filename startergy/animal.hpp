#ifndef _ANIMAL_HPP_
#define _ANIMAL_HPP_ 
#include <iostream>
#include "move_behavior.hpp"
#include "walking.hpp"
#include "running.hpp"
#include "flying.hpp"
#include "swimming.hpp"

class Animal {
    private:
        std::string name_;
        IMoveBehavior *move_startegy_;
    public:
        Animal():name_("Anonymous") {};

        void set_name(std::string &name){
            name_ = name;
        }

        void move() {
            std::cout << name_ << ": ";

            if (!move_startegy_)
                std::cout << "No move behavior!..." << std::endl;
            else
                std::cout << move_startegy_->move() << std::endl;
        }

        void set_move_behavior(std::string &behavior) {
            if (behavior == "walking")
                move_startegy_ = new IWalking();
            else if(behavior == "running")
                move_startegy_ = new IRunning();
            else if(behavior == "flying")
                move_startegy_ = new IFlying();
            else if(behavior == "swimming")
                move_startegy_ = new ISwimming();
        }
};
#endif