#ifndef _SHORT_WINDOW_HPP_
#define _SHORT_WINDOW_HPP_
#include <iostream>
#include "window.hpp"

class ShortWindow : public Window {
    public:
        void DrawContents() {
            std::cout << "-------------------------" << std::endl;
            std::cout << "Short Window : ";
            view->DrawView(content);
        }
};


#endif