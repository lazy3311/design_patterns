#ifndef _ITERATOR_HPP_
#define _ITERATOR_HPP_

#include "song_info.hpp"

class Iterator {
    public:
        virtual bool has_next() = 0;
        virtual SongInfo *next() = 0;
};
#endif