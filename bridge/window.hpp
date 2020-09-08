#ifndef _WINDOW_HPP_
#define _WINDOW_HPP_
#include <iostream>
#include "view.hpp"

class Window {
    protected:
        std::map<std::string, std::string> content_;
        View *view_;
    public:

        void set_content(std::map<std::string, std::string> &new_content){
            content_ = new_content;
        }

        void set_view(View *new_view) {
            view_ = new_view;
        }

        virtual void DrawContents() = 0;
};

#endif