#include <iostream>
#include "songs_of_80s.hpp"
#include "songs_of_90s.hpp"

void display_song_info(Iterator *iterator) {
    while(iterator->has_next()) {
        SongInfo *si = iterator->next();

        std::cout << si->get_name() << std::endl;
        std::cout << si->get_album() << std::endl;
        std::cout << si->get_released_year() << std::endl;

        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    }
}

int main(int argc, char** argv) {
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  ITERATOR PATTERN : Behavioral" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "Iterator is a behavioral design pattern that lets you traverse\\
    \n\relements of a collection without exposing its underlying representation (list, stack, tree, etc.)" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;

    SongsCollection *s80 = new SongsOf80s();
    SongsCollection *s90 = new SongsOf90s();

    std::cout << "80s Songs" << std::endl;
    std::cout << "----------------------------" << std::endl;
    display_song_info(s80->create_iterator());

    std::cout << "90s Songs" << std::endl;
    std::cout << "----------------------------" << std::endl;
    display_song_info(s90->create_iterator());
   
    return 0;
}