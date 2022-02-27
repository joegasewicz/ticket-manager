//
// Created by Joe Geezer on 26/02/2022.
//

#include <sqlite3.h>


#ifndef TICKET_MANAGER_DATABASE_H
#define TICKET_MANAGER_DATABASE_H


class Database {
public:

    explicit Database();

    void init();

    sqlite3* get_db();

    bool close();

private:

    sqlite3* _tm_db;

    void set_db(sqlite3 *tm_db);
};

#endif //TICKET_MANAGER_DATABASE_H
