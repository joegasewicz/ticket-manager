#include <iostream>
#include "ticket_manager.h"


int main() {
    TicketManager ticketManager {"hello"};

    std::cout << ticketManager.get_name() << std::endl;

    ticketManager.set_name("goodbye");

    std::cout << ticketManager.get_name() << std::endl;
    return 0;
}
