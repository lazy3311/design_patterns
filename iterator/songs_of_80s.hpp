#ifndef _SONGS_OF_80S_HPP_
#define _SONGS_OF_80S_HPP_

#include "songs_collection.hpp"
#include "static_array_iterator.hpp"

class SongsOf80s : public SongsCollection {
    private:
        SongInfo songs80s_[3];

    public:
        SongsOf80s() {
            songs80s_[0].set_name("Roam");
            songs80s_[0].set_album("B 52s");
            songs80s_[0].set_released_year(1989);

            songs80s_[1].set_name("Cruel Summer");
            songs80s_[1].set_album("Bananarama");
            songs80s_[1].set_released_year(1984);

            songs80s_[2].set_name("Head Over Heels");
            songs80s_[2].set_album("Tears For Fears");
            songs80s_[2].set_released_year(1985);
        }

        Iterator *create_iterator() {
            StaticArrayIterator *iterator = new StaticArrayIterator(this->songs80s_, 3);
            return iterator;
        }
};

#endif