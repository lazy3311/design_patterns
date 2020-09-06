#ifndef _VIEW_HPP_
#define _VIEW_HPP_
#include <iostream>
#include <map>

class View {
    public:
        virtual void DrawView(std::map<std::string, std::string> &content) = 0;
};

#endif