//
// Created by Joe Geezer on 26/02/2022.
//

#include "ticket_manager.h"


TicketManager::TicketManager(char name[])
{
    strcpy(_name, name);
};

void TicketManager::set_name(char name[])
{
    strcpy(_name, name);
};

char *TicketManager::get_name()
{
    return _name;
};
