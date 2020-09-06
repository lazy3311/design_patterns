#ifndef _MUSIC_ALBUM_VIEW_HPP_
#define _MUSIC_ALBUM_VIEW_HPP_
#include <iostream>
#include "view.hpp"

class MusicAlbumView : public View {
    public:
        void DrawView(std::map<std::string, std::string> &content) {
            std::cout << "Music Album View" << std::endl;
            std::cout << "-------------------------" << std::endl;
            for( auto &c : content) 
                std::cout << c.first << ":" << c.second << std::endl;
        }
};

#endif