#ifndef _SONG_GROUP_HPP_
#define _SONG_GROUP_HPP_

#include <iostream>
#include <list>
#include "song_component.hpp"

class SongGroup: public SongComponent {
    private:
        std::string name_;
        std::list<SongComponent*> components_;

    public:
        SongGroup(std::string name) {
            name_ = name;
        }

        void add(SongComponent *component) {
            components_.emplace_back(component);
        }

        void remove(SongComponent *component) {
            components_.remove(component);
        }

        std::list<SongComponent *> get_components() {
            return components_;
        }

        void display_component() {
            std::cout << "+ " << name_ << std::endl;
            
            for(auto& c : components_)
            {
                c->display_component();
            }
        }
};

#endif