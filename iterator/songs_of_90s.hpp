#ifndef _SONGS_OF_90S_HPP_
#define _SONGS_OF_90S_HPP_

#include "songs_collection.hpp"
#include "dynamic_array_iterator.hpp"

class SongsOf90s : public SongsCollection {
    private:
        SongInfo *songs90s_[3];

    public:
        SongsOf90s() {
           songs90s_[0] = new SongInfo("Losing My Religion", "REM", 1991);
           songs90s_[1] = new SongInfo("Creep", "Radiohead", 1993);
           songs90s_[2] = new SongInfo("Walk on the Ocean", "Toad The Wet Sprocket", 1991);
        }

        Iterator *create_iterator() {
            DynamicArrayIterator *iterator = new DynamicArrayIterator(this->songs90s_, 3);
            return iterator;
        }
};

#endif