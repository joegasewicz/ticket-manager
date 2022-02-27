//
// Created by Joe Geezer on 26/02/2022.
//

#include "ticket.h"

Ticket::Ticket(string title, string description, string repo_url)
{
    _title = title;
    _description = description;
    _repo_url = repo_url;

};

string Ticket::get_title(){
    return _title;
};

string Ticket::get_description()
{
    return _description;
};

string Ticket::get_repo_url()
{
    return _repo_url;
};

int Ticket::save()
{

    return 1;
};
