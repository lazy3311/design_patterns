#include <iostream>
#include "music_album_view.hpp"
#include "book_view.hpp"
#include "long_window.hpp"
#include "short_window.hpp"

int main(int argc, char** argv) {
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  BRIDGE PATTERN : Structural" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "Bridge is a structural design pattern that lets you split a large \\
    \n\rclass or a set of closely related classes into two separate hierarchies—abstraction \\
    \n\rand implementation—which can be developed independently of each other." << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;

    std::map<std::string, std::string> music_content;
    music_content["album"] = "New World Music";
    music_content["artist"] = "Lover";
    music_content["song"] = "Happy New Year";
    music_content["length"] = "4.34 secs";
    music_content["year"] = "2020";
    music_content["price"] = "$23";
    music_content["rating"] = "****";

    View *mvw = new MusicAlbumView();

    Window *lwin = new LongWindow();
    lwin->set_content(music_content);
    lwin->set_view(mvw);
    lwin->DrawContents();
    std::cout << "-------------------------" << std::endl;

    Window *swin = new ShortWindow();
    swin->set_content(music_content);
    swin->set_view(mvw);
    swin->DrawContents();
    std::cout << "-------------------------" << std::endl;

    std::map<std::string, std::string> book_content;
    book_content["title"] = "Hello World";
    book_content["author"] = "Newbee";
    book_content["category"] = "Documentory";
    book_content["price"] = "$43";
    book_content["published"] = "2020";
    book_content["rating"] = "****";

    View *bvw = new BookView();

    lwin->set_content(book_content);
    lwin->set_view(bvw);
    lwin->DrawContents();
    std::cout << "-------------------------" << std::endl;

    swin->set_content(book_content);
    swin->set_view(bvw);
    swin->DrawContents();
    std::cout << "-------------------------" << std::endl;

    return 0;
}