#ifndef _NO_CASH_HPP_
#define _NO_CASH_HPP_
#include <iostream>
#include "atm_state.hpp"
#include "atm_machine.hpp"


class NoCashState : public ATMState {
    private:
        ATMMachine *atm_machine_;
    public:
        NoCashState(ATMMachine *atm_machine): atm_machine_(atm_machine) {
        }

        void insert_card() {
            std::cout << "Out of money" << std::endl;
        }

        void eject_card() {
            std::cout << "Thank you, visit later" << std::endl;
        }

        void insert_pin(int pin) {
            std::cout << "Out of money" << std::endl;
        }
        
        bool withdraw_cash(int amount) {
            std::cout << "Out of money" << std::endl;
            return false;
        }
};

#endif