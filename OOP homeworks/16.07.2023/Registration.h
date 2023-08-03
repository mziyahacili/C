#pragma once
#include <iostream>
#include <string>
#include <regex>


class Registration
{
public:
    Registration(std :: string &name, std :: string &surname, std :: string &email, std :: string &phone, std :: string &password, std :: string &login);

    std :: string getName();
    std :: string getSurname();
    std :: string getEmail();
    std :: string getPhone();
    std :: string getPassword();
    std :: string getLogin();


    void info() const;

private:
    std :: string name;
    std :: string surname;
    std :: string phone;
    std :: string email;
    std :: string password;
    std :: string login;
};