#ifndef _HAS_PIN_HPP_
#define _HAS_PIN_HPP_
#include <iostream>
#include "atm_state.hpp"
#include "atm_machine.hpp"

class HasPinState : public ATMState {
    private:
        ATMMachine *atm_machine_;
    public:
        HasPinState(ATMMachine *atm_machine): atm_machine_(atm_machine) {
        }

        void insert_card() {
            std::cout << "already card in machine!.." << std::endl;
        }

        void eject_card() {
            std::cout << "card ejected.." << std::endl;
            atm_machine_->set_state(atm_machine_->no_card_state());
        }

        void insert_pin(int pin) {
            std::cout << "already pin entered!..." << std::endl;
        }
        
        bool withdraw_cash(int amount) {
            int available_cash = atm_machine_->cash_in_machine();

            if (amount <= available_cash) {
                if(this->atm_machine_->deduct_cash(amount)) {
                    std::cout << amount << " provided by machine..." << std::endl;
                    return true;
                }
                else {
                    std::cout << "Oops withdraw error!..." << std::endl; 
                    return false;
                } 
            }
            else {
                std::cout << "Out of money!..." << std::endl;

                if (available_cash == 0) {
                    this->atm_machine_->set_state(atm_machine_->no_cash_state());
                }

                return false;
            }
        }
};

#endif