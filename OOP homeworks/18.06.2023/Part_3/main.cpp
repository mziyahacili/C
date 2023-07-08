
#include <iostream>
#include "Transport.h"
#include "Car.h"
#include "Bicycle.h"
#include "Wagon.h"

using namespace std;

void Cost(double beginCost, double costMinute, double time, double costKm, double distance){

    double cost = beginCost + (costMinute * time) + (costKm * distance);
    cout << "Cost: " << cost;
};


void Time(double distance, double averageSpeed)
{
    double time = distance/averageSpeed;
    cout << "Your average time: " << time << endl;

    double beginCost = 10.0;
    double costMinute = 0.5;
    double costKm = 0.1;

    Cost(beginCost, costMinute, time, costKm, distance);
}


int main()
{

    Car ::Engine engine("v8", 1.24);

    Car *car = new Car("Kia", "Rio", "White", "Driving", 10, &engine);
    car->info();
    Time(10,car->avgSpeed);


    cout << endl;
    Bicycle *bicycle = new Bicycle("Maker", "Model", "White", "Type bicycle", 4 ,"Yes");
    bicycle->info();

    cout << endl;
    Wagon *wagon = new Wagon("Make", "Model", "Brown", "Hourses", 6, 5);
    wagon->info();



    return 0;
}
