#include <iostream>
#include "ticket_manager.h"
#include "database.h"


int main() {
    // Init Database
    Database database{};
    database.init();

    bool is_conn = true;
    if (!is_conn)
    {
        std::cout << "Error creating database" << "\n";
        exit(EXIT_FAILURE);
    }

    TicketManager ticketManager {"hello"};

    std::cout << ticketManager.get_name() << std::endl;

    ticketManager.set_name("goodbye");

    std::cout << ticketManager.get_name() << std::endl;
    return 0;
}
