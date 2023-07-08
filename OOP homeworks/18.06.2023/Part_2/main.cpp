#include <iostream>
#include "Passport.h"
#include "ForeignPassport.h"
using namespace std;




int main()
{


    Passport p("Ziya", "Hacili", "Alisahib", "Baku", "10.05.2007", "M");
    p.info();
    cout << endl;
    ForeignPassport f("Elvin", "Azimov", "Rauf", "Baku", "13.04.2001", "M", 19940, 15, "C", 3);
    f.info();

    return 0;
}

