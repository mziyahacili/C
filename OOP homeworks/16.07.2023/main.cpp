#include <iostream>
#include "Registration.h"



int main()
{

    std :: string name = "Ziya";
    std :: string surname = "Hacili";
    std :: string email = "mziyahaj@itstep.edu.az";
    std :: string phone = "+994505040015";
    std :: string password = "123!Hjd";
    std :: string login = "ziyagadz-hi425";


    try
    {
        Registration registration(name, surname, email, phone, password, login);
//        std :: cout << registration.getEmail() << std :: endl;
//        std :: cout << registration.getSurname() << std :: endl;
//        std :: cout << registration.getPhone() << std :: endl;
//        std :: cout << registration.getName() << std :: endl;
//        std :: cout << registration.getPassword() << std :: endl;
//        std :: cout << registration.getLogin() << std :: endl;
        registration.info();
    }
    catch (std :: exception &ex)
    {
        std :: cout << "Error: " << ex.what() << std :: endl;
    }




    return 0;
}