#include <iostream>
#include "atm_machine.hpp"

#include "has_card.hpp"
#include "no_card.hpp"
#include "has_pin.hpp"
#include "no_cash.hpp"

/* Avoid circular loop  */
ATMState * ATMMachine::no_card_state() { return new NoCardState(this); }
ATMState * ATMMachine::no_cash_state() { return new NoCashState(this); }
ATMState * ATMMachine::has_pin_state() { return new HasPinState(this); }
ATMState * ATMMachine::has_card_state() { return new HasCardState(this); }

int main(int argc, char** argv) {
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "                  STATE PATTERN : Behavioral" << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "State is a behavioral design pattern that lets an object alter its \\
    \n\rbehavior when its internal state changes. It appears as if the object changed \\
    \n\rits class." << std::endl;
    std::cout << "-------------------------------------------------------------------" << std::endl;

    ATMMachine *machine = new ATMMachine();
    machine->add_cash(500);
    machine->set_state(machine->no_card_state());

    machine->insert_card();
    machine->eject_card();

    machine->insert_card();
    machine->insert_pin(1234);
    machine->withdraw_cash(400);
    machine->eject_card();

    machine->insert_card();
    machine->insert_pin(1234);
    machine->withdraw_cash(100);
    machine->eject_card();

    machine->insert_card();
    machine->insert_pin(1234);
    machine->withdraw_cash(100);
    machine->eject_card();

    machine->insert_card();
    machine->insert_pin(1234);
    machine->withdraw_cash(200);
    machine->eject_card();

    machine->add_cash(200);
    machine->set_state(machine->no_card_state());
    machine->insert_card();
    machine->insert_pin(1234);
    machine->withdraw_cash(100);
    machine->eject_card();
   
    return 0;
}