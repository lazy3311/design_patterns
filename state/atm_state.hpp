#ifndef _ATM_STATE_HPP_
#define _ATM_STATE_HPP_
#include <iostream>

class ATMState {
    public:
        virtual void insert_card() = 0;
        virtual void eject_card() = 0;
        virtual void insert_pin(int pin) = 0;
        virtual bool withdraw_cash(int amount) = 0;
};

#endif