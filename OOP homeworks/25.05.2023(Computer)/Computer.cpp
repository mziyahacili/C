#include "Computer.h"
#include <iostream>
using namespace std;
class Computer
{
public:
    string corpus;
    Computer(string corpus)
    {
        this->corpus = corpus;
    }
    void corpusInfo() const{
        cout << "Corpus: " << corpus;
    }
};



//class Computer : public RAM, Motherboard
//{
//public:
//    string corpus;
//    Computer() = default;
//
//    Computer(int ramSize, int ramClockSpeed, string ramMake, string ramModel, string ramType,string makeMotherboard, string modelMotherboard, string formFactorMotherboard, int socketTypeMotherboard, string chipsetMakerMotherboard, int cpuCompatibilityMotherboard, string ramTypeMotherboard, int ramSizeMotherboard, string corpus) :
//            RAM(ramMake, ramModel, ramType, ramSize, ramClockSpeed),
//            Motherboard(makeMotherboard, modelMotherboard, formFactorMotherboard, socketTypeMotherboard, chipsetMakerMotherboard, cpuCompatibilityMotherboard,ramTypeMotherboard, ramSizeMotherboard)
//    {
//        this->corpus;
//    }
//    void corpusInfo() const{
//        cout << "Corpus: " << corpus;
//    }
//
//    void allInfoComputer() const
//    {
//        RAM c;
//        c.ramInfo();
//        Motherboard m;
//        m.motherboadInfo();
//    }
//};


