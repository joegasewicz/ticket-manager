//
// Created by Joe Geezer on 26/02/2022.
//

#include "file.h"


using std::string;
namespace fs = std::filesystem;


/** @details "~/Library/Application Support/Ticket Manager" */
string get_app_dir_path()
{
    string dir_name;
    string root = "/Users/joegeezer/Library/Application Support"; // TODO get user root
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

bool create_file_if_not_exist(const string& name)
{
    int has_directory = {0};
    has_directory = create_app_support_folder();
    if (has_directory > 0)
    {
        return false;
    }
    string dir_name = get_app_dir_path();
    string db_conn_str = dir_name + "/" + name + ".txt";

    std::fstream filestream;
    if(std::filesystem::exists(db_conn_str))
    {
        std::cout << "File already exists" << "\n";
        return true;
    }
    filestream.open(db_conn_str, std::ios::out);
    filestream.close();

    std::cout << "- File successfully created at" << name << "\n";
    return true;
}
