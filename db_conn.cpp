//
// Created by Joe Geezer on 26/02/2022.
// Create a sqlite database if one doesn't exist

#include <sqlite3.h>
#include <fstream>
#include <filesystem>
#include <string>
#include <dirent.h>
#include <iostream>
#include "db_conn.h"

using std::string;
namespace fs = std::filesystem;

/**
 * "/Users/joegeezer/Library/Application Support/Ticket Manager"
 * @return
 */
string get_app_dir_path()
{
    string dir_name;
    string root = "/Users/joegeezer/Library/Application Support";
    string app_name = "Ticket Manager";
    return root + "/" + app_name;
}


int create_app_support_folder()
{
    string dir_name;
    dir_name = get_app_dir_path();

    if (fs::exists(dir_name))
    {
        std::cout << "Directory already exists." << "\n";
        return 0;
    }
    bool dir_success = fs::create_directory(dir_name);
    if (!dir_success)
    {
        std::cout << "Directory Created."<< "\n";
        return 0;
    } else
    {
        std::cout << "Unable to create application directory." << "\n";
        return 1;
    }

}

/**
 *
 * @param name
 * @return
 */
bool create_db_if_not_exist(char *name)
{
    int has_directory = {0};
    has_directory = create_app_support_folder();
    if (has_directory > 0)
    {
        return false;
    }
    string dir_name = get_app_dir_path();
    string db_name = "tm_sqlite";
    string db_conn_str = dir_name + "/" + db_name + ".txt";

    std::fstream filestream;
    if(std::filesystem::exists(db_conn_str))
    {
        std::cout << "Database already exists" << "\n";
        return true;
    }
    filestream.open(db_conn_str, std::ios::out);
    filestream.close();

    std::cout << "- Database successfully created at" << db_name << "\n";
    return true;
}
