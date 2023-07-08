#include "Aspirant.h"

Aspirant ::Aspirant(string name, string surname, int age, string protectionTheme) : Student(name,surname,age){
    this->protectionTheme = protectionTheme;
}

string Aspirant::getThemeProtection() const {
    return this->protectionTheme;
}

void Aspirant::info() const {
    Student :: info();
    cout << "Aspirant theme protection: " << getThemeProtection() << endl;
}