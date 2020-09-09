#ifndef _SONG_HPP_
#define _SONG_HPP_

#include <iostream>
#include "song_component.hpp"

class Song: public SongComponent {
    private:
        std::string name_;
        std::string album_;
        int year_released_;
    
    public:
        Song(std::string name, std::string album, int year)
        : name_(name), album_(album), year_released_(year) {}

        void display_component() {
            std::cout << "- " << name_ << ", " << album_ << ", " << year_released_ << std::endl;
        }
};
#endif