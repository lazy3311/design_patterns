#ifndef _USA_PLUG_HPP_
#define _USA_PLUG_HPP_
#include <iostream>
#include "plug.hpp"

class USAPlug: public Plug {
   
    public:
        USAPlug(): Plug() {
            pin_numbers_ = 2;
            name_ = "usa plug";
        }        
};
#endif