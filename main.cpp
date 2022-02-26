#include <iostream>
#include "ticket_manager.h"
#include "db_conn.h"


int main() {
    // Create sqlite db if one doesn't exist
    char db_name[] = {"ticket_manager"};
    bool is_conn = create_db_if_not_exist(db_name);
    if (!is_conn)
    {
        printf("Error creating database\n");
        exit(EXIT_FAILURE);
    }

    TicketManager ticketManager {"hello"};

    std::cout << ticketManager.get_name() << std::endl;

    ticketManager.set_name("goodbye");

    std::cout << ticketManager.get_name() << std::endl;
    return 0;
}
