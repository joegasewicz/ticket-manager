//
// Created by Joe Gasewicz on 26/02/2022.
//
#include <string>

#ifndef TICKET_MANAGER_H
#define TICKET_MANAGER_H

class TicketManager
{
public:
    explicit TicketManager(char name[]);
    void set_name(char name[]);
    char *get_name();

private:
    char _name[];
};

#endif //TICKET_MANAGER_H
