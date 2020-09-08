#ifndef _MARIO_HPP_
#define _MARIO_HPP_
#include <iostream>
#include "game.hpp"

class Mario: public Game {
    public:
        void initialize() {
            std::cout << "Mario Game Initialized! Start playing." << std::endl;
        }

        void start_play() {
            std::cout << "Mario Game Started. Enjoy the game!" << std::endl;
        }

        void end_play() {
            std::cout << "Mario Game Finished!" << std::endl;
        }
};
#endif