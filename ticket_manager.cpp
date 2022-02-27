//
// Created by Joe Geezer on 26/02/2022.
//

#include "ticket_manager.h"

TicketManager::TicketManager() {
    // init events
};


void TicketManager::init()
{
    int userOpt;
    std::cout << "========\n";
    std::cout << "Options:\n";
    std::cout << "========\n\n";
    std::cout << "1. Create Ticket\n";
    std::cout << "0. Exit\n";
    std::cin >> userOpt;
    _opt_val = userOpt;


    while (_tm_is_running > 0)
    {
    }
}

