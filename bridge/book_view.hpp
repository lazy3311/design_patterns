#ifndef _BOOK_VIEW_HPP_
#define _BOOK_VIEW_HPP_
#include <iostream>
#include "view.hpp"

class BookView : public View {
    public:
        void DrawView(std::map<std::string, std::string> &content) {
            std::cout << "Book View" << std::endl;
            std::cout << "-------------------------" << std::endl;
            for( auto &c : content) 
                std::cout << c.first << ":" << c.second << std::endl;
        }
};
#endif