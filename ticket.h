//
// Created by Joe Geezer on 26/02/2022.
//

#include <string>

using std::string;


#ifndef TICKET_MANAGER_TICKET_H
#define TICKET_MANAGER_TICKET_H


class Ticket {


public:

    explicit Ticket(string title, string description, string repo_url);

    string get_title();

    string get_description();

    string get_repo_url();

    int save();

private:

    string _title;
    string _description;
    string _repo_url;

};


#endif //TICKET_MANAGER_TICKET_H
