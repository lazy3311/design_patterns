#ifndef _DYNAMIC_ARRAY_ITERATOR_HPP_
#define _DYNAMIC_ARRAY_ITERATOR_HPP_

#include "iterator.hpp"
#include "song_info.hpp"

class DynamicArrayIterator : public Iterator {
    private:
        SongInfo **song_array_;
        int count_;
        int index_;

    public:
        DynamicArrayIterator(SongInfo **song_array, int count) {
            song_array_ = song_array;
            count_ = count;
            index_ = 0;
        }

        bool has_next() {
            if (index_ < count_)
                return true;
            return false;
        }

        SongInfo *next() {
            return song_array_[index_++];
        }
};

#endif