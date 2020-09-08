
#ifndef _SONG_INFO_HPP_
#define _SONG_INFO_HPP_

#include <iostream>

class SongInfo {
    private:
        std::string name_;
        std::string album_;
        int released_year_;
    public:
        SongInfo() {}

        SongInfo(std::string name, std::string album, int year) {
            name_ = name;
            album_ = album;
            released_year_ = year;
        }

        void set_name(std::string name) { name_ = name; }
        void set_album(std::string album) { album_ = album; }
        void set_released_year(int year) { released_year_ = year; }

        std::string get_name() { return name_; }
        std::string get_album() { return album_; }
        int get_released_year() { return released_year_; }
};

#endif