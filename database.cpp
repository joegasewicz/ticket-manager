//
// Created by Joe Geezer on 26/02/2022.
// Create a sqlite database if one doesn't exist


#include "database.h"
#include "file.h"


Database::Database()
{

}

/**
 * @param tm_db
 */
void Database::set_db(sqlite3 *tm_db)
{
    _tm_db = tm_db;
};

/**
 * @return sqlite3*
 */
sqlite3* Database::get_db()
{
    return _tm_db;
};

/**
 * @details Create a sqlite3 database & set Database.tm_db
 * @return
 */
void Database::init()
{
    sqlite3* tm_db;
    std::string app_sup_dir = get_app_dir_path();
    std::string db_name = "ticket_manager.db";
    std::string db_with_path = app_sup_dir + "/" + db_name;
    char *test = &db_with_path[0];

    int open_ok = sqlite3_open(test, &tm_db);
    if (open_ok == SQLITE_OK)
    {
        set_db(tm_db);
        std::cout << "Database successfully created." << "\n";
    }

};
