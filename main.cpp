#include <iostream>
#include "ticket_manager.h"
#include "database.h"


int main() {
    // Init Database
    Database database{};
    database.init();

    TicketManager ticket_manager{};

    // Init ticket manager
    ticket_manager.init();

    // Close db
    bool db_did_close = database.close();
    if (!db_did_close)
    {
        exit(EXIT_FAILURE);
    }
    return 0;
}
