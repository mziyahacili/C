#include "Zoo.h"

Zoo ::Zoo(string &name, int maxCol, int col, Animal &animal)
{
    this->name = name;
    this->col = col;
    this->maxCol = maxCol;
    this->animal = &animal;
}

void Zoo::info() const
{
    cout << "Zoo name: " << this->name << endl
         << "Animals count in zoo: " << this->col << endl
         << "Animals max count in zoo: " << this->maxCol << endl
         << "Animal name: " << animal->name << endl
         << "Animal age: " << animal->age << endl
         << "Animal gender: " << animal->gender << endl;

}
