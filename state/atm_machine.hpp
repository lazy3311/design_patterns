#ifndef _ATM_MACHINE_HPP_
#define _ATM_MACHINE_HPP_
#include <iostream>
#include "atm_state.hpp"
class ATMMachine {
    private:
        ATMState *atm_state_;
        int cash_;

    public:
        ATMMachine() {
            cash_ = 0;
        }

        void set_state(ATMState *new_state) {
            atm_state_ = new_state;
        }

        void add_cash(int amount) {
            cash_ += amount;
            std::cout << "ATM new balance: " << cash_ << std::endl;
        }

        bool deduct_cash(int amount) {
            cash_ -= amount;
            std::cout << "ATM new balance: " << cash_ << std::endl;

            return true;
        }

        int cash_in_machine() {
            return cash_; 
        }

        void insert_card() {
            atm_state_->insert_card();
        }

        void eject_card() {
            atm_state_->eject_card();
        }

        void insert_pin(int pin) {
            atm_state_->insert_pin(pin);
        }

        bool withdraw_cash(int amount) {
            return atm_state_->withdraw_cash(amount);
        }

        ATMState * no_card_state();
        ATMState * no_cash_state();
        ATMState * has_pin_state() ;
        ATMState * has_card_state() ;
};

#endif