#ifndef _EUROPEAN_PLUG_HPP_
#define _EUROPEAN_PLUG_HPP_
#include <iostream>
class EuropeanPlug: public Plug {
   
    public:
        EuropeanPlug(): Plug() {
            pin_numbers_ = 3;
            name_ = "european plug";
        }        
};
#endif