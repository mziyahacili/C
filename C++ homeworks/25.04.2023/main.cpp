#include <iostream>
#include "Animal.h"
#include "Zoo.h"
using namespace std;





int main()
{

    string nameAn = "Lion";
    string anGender = "M";

    string zooName = "Zoopark";


    Animal animal(nameAn, 3, anGender);
    Zoo zoo(zooName, 30, 1, animal);

    zoo.info();




    return 0;
}
