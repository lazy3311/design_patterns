#include <iostream>
#include "song_group.hpp"
#include "song.hpp"

int main(int argc, char** argv) {
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  COMPOSITE PATTERN : Structural" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "Composite is a structural design pattern that lets you compose \\
    \n\robjects into tree structures and then work with these structures \\
    \n\ras if they were individual objects." << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;

    SongGroup *parent_group = new SongGroup(std::string("Parent"));
    parent_group->add(new Song("parent level song", "P", 2020));
    
    SongGroup *level1 = new SongGroup(std::string("Level 1"));
    level1->add(new Song("level 1 song a", "L1", 2019));
    level1->add(new Song("level 1 song b", "L1", 2019));
    parent_group->add(level1);
    
    SongGroup *level2 = new SongGroup(std::string("Child Level 2"));
    level2->add(new Song("level 2 song x", "L2", 2018));
    level2->add(new Song("level 2 song y", "L2", 2018));
    parent_group->add(level2);

    parent_group->display_component();

    return 0;
}
