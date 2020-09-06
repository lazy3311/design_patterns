#ifndef _LONG_WINDOW_HPP_
#define _LONG_WINDOW_HPP_
#include <iostream>
#include "window.hpp"


class LongWindow : public Window {
    public:
        void DrawContents() {
            std::cout << "-------------------------" << std::endl;
            std::cout << "Long Window : ";
            view->DrawView(content);
        }
};

#endif