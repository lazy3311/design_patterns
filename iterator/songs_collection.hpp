#ifndef _SONGS_COLLECTION_HPP_
#define _SONGS_COLLECTION_HPP_

#include "iterator.hpp"

class SongsCollection {
    public:
        virtual Iterator *create_iterator() = 0;
};
#endif