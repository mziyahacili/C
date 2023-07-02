//#include <iostream>
//using namespace std;


#pragma region Part1
//class Student{
//protected:
//    int age{};
//public:
//    string name{};
//    string surname{};
//
//    explicit Student(string name, string surname, int age) : name(name), surname(surname), age(age) {}
//
//    int getAge() const{
//        return this->age;
//    }
//
//    void info() const{
//        cout << "Student name: " << this->name << endl
//             << "Student surname: " << this->surname << endl
//             << "Student age: " << getAge() << endl;
//    }
//
//};
//
//class Aspirant : public Student{
//private:
//    string protectionTheme{};
//public:
//    explicit Aspirant(string name, string surname, int age, string protectionTheme) : Student(name,surname,age)
//    {
//        this->protectionTheme = protectionTheme;
//    }
//
//    string getThemeProtection() const{
//        return this->protectionTheme;
//    }
//
//    void info() const{
//        cout << "Aspirant name: " << this->name << endl
//             << "Aspirant surname: " << this->surname << endl
//             << "Aspirant age: " << getAge() << endl
//             << "Aspirant theme protection: " << getThemeProtection() << endl;
//    }
//
//
//};
//
//int main()
//{
//
//    Student s("Ziya", "Hacili", 21);
//    Aspirant a("Elvin", "Azimov", 22, "Nature");
//
//    s.info();
//    cout << endl;
//    a.info();
//
//
//
//    return 0;
//}

#pragma endregion Part1

#pragma region Part2

//
//class Passport{
//protected:
//    string name{};
//    string surname{};
//    string patronymic{};
//    string citizenship{};
//    string DOB{};
//    string SEX{};
//public:
//
//    Passport(string name, string surname, string patronymic, string citizenship, string DOB, string SEX)
//    {
//        this->name = name;
//        this->surname = surname;
//        this->patronymic = patronymic;
//        this->citizenship = citizenship;
//        this->DOB = DOB;
//        this->SEX = SEX;
//    }
//
//
//    void info() const{
//        cout << "Person name: " << this->name << endl
//             << "Person surname: " << this->surname << endl
//             << "Person DOB: " << this->DOB << endl
//             << "Person patronymic: " << this->patronymic << endl
//             << "Person citizenship: " << this->citizenship << endl
//             << "Person sex: " << this->SEX << endl;
//    }
//
//
//};
//
//
//class ForeignPassport : public Passport{
//protected:
//    int numberFPassport{};
//    int countEntries{};
//    string visaType{};
//    int totalStay{};
//
//public:
//    ForeignPassport(string name, string surname, string patronymic, string citizenship, string DOB, string SEX,
//                    int numberFPassport, int countEntries, string visaType, int totalStay) : Passport(name,surname,patronymic,citizenship,DOB,SEX)
//    {
//        this->numberFPassport = numberFPassport;
//        this->countEntries = countEntries;
//        this->visaType = visaType;
//        this->totalStay = totalStay;
//    }
//
//    void info() const{
//        Passport :: info();
//        cout << "Person number of foreign passport: " << this->numberFPassport << endl
//             << "Person count entries: " << this->countEntries <<endl
//             << "Person visa type: " << this->visaType << endl
//             << "Person total stay: " << this->totalStay << endl;
//    }
//
//};
//
//int main()
//{
//
//
//    Passport p("Ziya", "Hacili", "Alisahib", "Baku", "10.05.2007", "M");
//    p.info();
//    cout << endl;
//    ForeignPassport f("Elvin", "Azimov", "Rauf", "Baku", "13.04.2001", "M", 19940, 15, "C", 3);
//    f.info();
//
//    return 0;
//}

#pragma endregion Part2


#pragma region Part3
//class Transport{
//protected:
//    string make{};
//    string model{};
//    string color{};
//    string type{};
//
//public:
//    double avgSpeed{};
//
//    Transport() = default;
//
//    Transport(string &make, string &model, string &color, string &type, double &avgSpeed) : make(make), model(model), color(color), type(type), avgSpeed(avgSpeed) {}
//
//    string getMake() const {return this->make;}
//    string getModel() const{return this->model;}
//    string getColor() const{return this->color;}
//    string getType() const{return this->type;}
//    double getAvgSpeed() const{return this->avgSpeed;}
//
//};
//
//class Car : public Transport{
//
//public:
//    struct Engine{
//        string name{};
//        float volume{};
//
//        Engine(string name, float volume) : name(name), volume(volume) {}
//
//    };
//
//
//    Car(string make, string model, string color, string type,  double avgSpeed, Engine* engine) : Transport(make,model, color,type, avgSpeed) {
//        this->engine = engine;
//    }
//
//    void info() const{
//        cout << "Car make: " << getMake() << endl
//             << "Car model: " << getModel() << endl
//             << "Car color: " << getColor() << endl
//             << "Car type: " << getType() << endl
//             << "Car average speed: " << getAvgSpeed() << endl
//             << "Car engine(name): " << engine->name << endl
//             << "Car engine(volume): " << engine->volume << endl;
//    }
//
//
//
//protected:
//    Engine *engine{};
//};
//
//class Bicycle : public Transport{
//protected:
//    string spokes{};
//
//public:
//    Bicycle(string make, string model, string color, string type, double avgSpeed, string spokes) : Transport(make,model,color,type, avgSpeed){
//        this->spokes = spokes;
//    }
//
//    void info() const{
//        cout << "Bicycle make: " << getMake() << endl
//             << "Bicycle model: " << getModel() << endl
//             << "Bicycle color: " << getColor() << endl
//             << "Bicycle type: " << getType() << endl
//             << "Bicycle average speed: " << getAvgSpeed() << endl
//             << "Bicycle spokes: " << this->spokes << endl;
//
//    }
//
//};
//
//class Wagon : public Transport{
//protected:
//    int horseCount{};
//public:
//    Wagon(string make, string model, string color, string type, double avgSpeed, int horseCount) : Transport(make, model, color, type, avgSpeed)
//    {
//        this->horseCount = horseCount;
//    }
//
//    void info() const{
//        cout << "Wagon make: " << getMake() << endl
//             << "Wagon model: " << getModel() << endl
//             << "Wagon color: " << getColor() << endl
//             << "Wagon type: " << getType() << endl
//             << "Wagon average speed: " << getAvgSpeed() << endl
//             << "Wagon horse count: " << this->horseCount << endl;
//
//    }
//};
//
//
//
//void Time(double &distance, double &carSpeed, double &wagonSpeed, double &bicycleSpeed, double &carTime, double &bicycleTime, double &wagonTime)
//{
//
//
//    cout << "Enter distance between the origin and destination in km: ";
//    cin >> distance;
//
//    carTime = distance/carSpeed;
//    wagonTime = distance/bicycleSpeed;
//    bicycleTime = distance/wagonSpeed;
//
//    cout << "Time for car: " <<  carTime << endl;
//    cout << "Time for bicycle: " << bicycleTime << endl;
//    cout << "Time for wagon: " << wagonTime << endl;
//
//}
//
//void Cost(double &costCar, double &costWagon, double &costBicycle, double &distance, double& carTime, double &wagonTime, double &bicycleTime)
//{
//    double beginCost = 1;
//
//    double costMinuteForCar = 3;
//    double costMinuteForBicycle = 2;
//    double costMinuteForWagon = 1;
//
//
//    double costKilometerForCar = 3;
//    double costKilometerForBicycle = 2;
//    double costKilometerForWagon = 1.5;
//
//    costCar = beginCost + (distance*costKilometerForCar) + (carTime*costMinuteForCar);
//    costBicycle = beginCost + (distance*costKilometerForBicycle) + (bicycleTime*costMinuteForBicycle);
//    costWagon= beginCost + (distance*costKilometerForWagon) + (wagonTime*costMinuteForWagon);
//
//
//    cout << "Your cost for car: " << costCar << endl;
//    cout << "Your cost for bicycle: " << costBicycle << endl;
//    cout << "Your cost for wagon: " << costWagon << endl;
//
//}
//
//int main()
//{
//
//
//   Car ::Engine engine("v8", 1.24);
//   double carSpeed = 50;
//    double carTime{};
//    double carCost{};
//    Car *car = new Car("Kia", "Rio", "White", "Driving", carSpeed, &engine);
//   car->info();
//
//
//
//
//   cout << endl;
//    double bicycleSpeed = 6;
//    double bicycleTime{};
//    double bicycleCost{};
//    Bicycle *bicycle = new Bicycle("Maker", "Model", "White", "Type bicycle", bicycleSpeed ,"Yes");
//   bicycle->info();
//
//    cout << endl;
//    double wagonSpeed = 10;
//    double wagonTime{};
//    double wagonCost{};
//    Wagon *wagon = new Wagon("Make", "Model", "Brown", "Hourses", wagonSpeed, 5);
//    wagon->info();
//
//    double distance{};
//    Time(distance, carSpeed, bicycleSpeed, wagonSpeed, carTime, wagonTime, bicycleTime);
//    Cost(carCost,wagonCost,bicycleCost, distance, carTime, wagonTime, bicycleTime);

//    return 0;
//}
#pragma endregion Part3
