//
// Created by Joe Gasewicz on 26/02/2022.
//
#include <string>
#include <iostream>
#include <sqlite_orm/sqlite_orm.h>

#define TM_IS_RUNNING 1


#ifndef TICKET_MANAGER_H
#define TICKET_MANAGER_H

enum class TMEvents {
    CREATE_TICKET,
    EXIT
};

class TicketManager
{
public:

     TicketManager();

    void init();

private:
    int _opt_val;
    int _tm_is_running;
};

#endif //TICKET_MANAGER_H
