#ifndef _WINDOW_HPP_
#define _WINDOW_HPP_
#include <iostream>
#include "view.hpp"

class Window {
    protected:
        std::map<std::string, std::string> content;
        View *view;
    public:

        void set_content(std::map<std::string, std::string> &new_content){
            content = new_content;
        }

        void set_view(View *new_view) {
            view = new_view;
        }

        virtual void DrawContents() = 0;
};

#endif