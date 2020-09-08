#ifndef _GAME_HPP_
#define _GAME_HPP_
#include <iostream>

class Game {
    public:
        void play() {
            initialize();
            start_play();
            end_play();
        }

        virtual void initialize() = 0;
        virtual void start_play() = 0;
        virtual void end_play() = 0;
};
#endif