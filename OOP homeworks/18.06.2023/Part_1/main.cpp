


#include <iostream>
#include "Student.h"
#include "Aspirant.h"
using namespace std;


int main()
{

    Student s("Mahmud", "Mahmudov", 21);
    Aspirant a("Ziyafetdin", "Mansimov", 22, "Nature");

    s.info();
    cout << endl;
    a.info();



    return 0;
}




