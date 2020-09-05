#ifndef _EUROPEAN_PLUG_HPP_
#define _EUROPEAN_PLUG_HPP_
#include <iostream>
class EuropeanPlug: public Plug {
   
    public:
        EuropeanPlug(): Plug() {
            pin_numbers = 3;
            name = "european plug";
        }        
};
#endif