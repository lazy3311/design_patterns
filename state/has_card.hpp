#ifndef _HAS_CARD_HPP_
#define _HAS_CARD_HPP_
#include <iostream>
#include "atm_state.hpp"
#include "atm_machine.hpp"


class HasCardState : public ATMState {
    private:
        ATMMachine *atm_machine_;
    public:
        HasCardState(ATMMachine *atm_machine): atm_machine_(atm_machine) {
        }

        void insert_card() {
            std::cout << "already card in machine!.." << std::endl;
        }

        void eject_card() {
            std::cout << "card ejected.." << std::endl;
            this->atm_machine_->set_state(atm_machine_->no_card_state());
        }

        void insert_pin(int pin) {
            if (pin == 1234) {
                std::cout << "pin verified..." << std::endl;
                this->atm_machine_->set_state(atm_machine_->has_pin_state());
            }
            else
                std::cout << "wrong pin!..." << std::endl;
        }
        
        bool withdraw_cash(int amount) {
            std::cout << "no pin entered!.." << std::endl;
            return false;
        }
};

#endif