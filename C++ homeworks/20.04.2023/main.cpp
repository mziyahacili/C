
#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Man.h"

using namespace std;






int main()
{

    string studName = "Pustexanim", studSurname = "Mamedova", studProgr = "100%";

    string manName = "Elovset", manSurname = "Dadasov";
    uint16_t age = 20; string birthday = "10.05.2023";


    Student student(studName, studSurname,studProgr);
    Man man(manName, manSurname, age,birthday);

    man.manInfo();

    return 0;
}



