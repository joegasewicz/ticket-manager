//
// Created by Joe Geezer on 26/02/2022.
//

#ifndef TICKET_MANAGER_FILE_H
#define TICKET_MANAGER_FILE_H


#include <sqlite3.h>
#include <fstream>
#include <filesystem>
#include <string>
#include <dirent.h>
#include <iostream>
#include <string>

bool create_file_if_not_exist(const std::string& name);
std::string get_app_dir_path();
int create_app_support_folder();

#endif //TICKET_MANAGER_FILE_H
