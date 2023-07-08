#include "ForeignPassport.h"


ForeignPassport ::ForeignPassport(string name, string surname, string patronymic, string citizenship, string DOB,
                                  string SEX, int numberFPassport, int countEntries, string visaType, int totalStay) : Passport(name, surname, patronymic, citizenship, DOB, SEX)

{
    this->numberFPassport = numberFPassport;
    this->countEntries = countEntries;
    this->visaType = visaType;
    this->totalStay = totalStay;
}

void ForeignPassport::info() const {
    Passport :: info();
    cout << "Person number of foreign passport: " << this->numberFPassport << endl
         << "Person count entries: " << this->countEntries <<endl
         << "Person visa type: " << this->visaType << endl
         << "Person total stay: " << this->totalStay << endl;
}