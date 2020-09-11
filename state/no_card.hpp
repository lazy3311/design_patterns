#ifndef _NO_CARD_STATE_HPP_
#define _NO_CARD_STATE_HPP_
#include <iostream>
#include "atm_state.hpp"
#include "atm_machine.hpp"

class NoCardState : public ATMState {
    private:
        ATMMachine *atm_machine_;
    public:
        NoCardState(ATMMachine *atm_machine): atm_machine_(atm_machine) {
        }

        void insert_card() {
            this->atm_machine_->set_state(atm_machine_->has_card_state());
            std::cout << "please enter pin.." << std::endl;
        }

        void eject_card() {
            std::cout << "no card inserted!.." << std::endl;
        }

        void insert_pin(int pin) {
            std::cout << "no card inserted!.." << std::endl;
        }

        bool withdraw_cash(int amount) {
            std::cout << "no card inserted!.." << std::endl;
            return false;
        }
};
#endif