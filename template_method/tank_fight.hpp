#ifndef _TANK_FIGHT_HPP_
#define _TANK_FIGHT_HPP_
#include <iostream>
#include "game.hpp"

class TankFight: public Game {
    public:
        void initialize() {
            std::cout << "Tank fight Game Initialized! Start playing." << std::endl;
        }

        void start_play() {
            std::cout << "Tank fight Game Started. Enjoy the game!" << std::endl;
        }

        void end_play() {
            std::cout << "Tank fight Game Finished!" << std::endl;
        }
};
#endif