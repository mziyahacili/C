
#include <iostream>
#include "Student.h"
#include "Academy.h"
using namespace std;


int main()
{

    string name = "Ziya";
    string surname = "Hacili";
    string faculty = "Programming";

    string academyName = "Step It";


    Student student(name, surname, faculty, 20, 3);
    Academy academy(academyName, student);

    academy.info();


    return 0;
}