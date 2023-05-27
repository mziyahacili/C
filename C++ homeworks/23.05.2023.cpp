#include <iostream>
using namespace std;


struct Birthday
{
protected:
    uint16_t day{};
    uint16_t month{};
    uint16_t year{};
public:
    Birthday() = default;

    Birthday(uint16_t day, uint16_t month, uint16_t year)
    {
        setDay(day);
        setMonth(month);
        setYear(year);
    }


    void setDay(uint16_t day){
        this->day = day;
    }

    void setMonth(uint16_t month){
        this->month = month;
    }

    void setYear(uint16_t year){
        this->year = year;
    }

    string getDate() const {
        string res = to_string(day) + '/' + to_string(month) + '/' + to_string(year);
        return res;
    }


};


class Student : Birthday
{
private:
    string surname{};
    string patronymic{};
    string studyName{};
    string countryStudy{};
    string cityStudy{};
    uint16_t groupNumber{};
    Birthday data{};
public:
    string name{};
    string number{};
    string city{};
    string country{};

    Student() = default;

    Student(string name, string surname,string patronymic, string city,string country,string cityStudy,string countryStudy, uint16_t groupNumber ) : Birthday(data)
    {
        setSurname(surname);
        setPatronymic(patronymic);
        setStudyName(studyName);
        setCountryStudy(countryStudy);
        setGroupNumber(groupNumber);
        setCityStudy(cityStudy);


        this->name = name;
        this->country = country;
        this->city = city;
        this->number = number;
        this->data = data;

    }

    void setSurname(string surname)
    {
        this->surname = surname;
    }

    void setPatronymic(string patronymic)
    {
        this->patronymic = patronymic;
    }

    void setStudyName(string studyName)
    {
        this->studyName = studyName;
    }

    void setCountryStudy(string countryStudy)
    {
       this->countryStudy = countryStudy;
    }

    void setGroupNumber(uint16_t groupNumber)
    {
        this->groupNumber = groupNumber;
    }

    void  setCityStudy(string cityStudy)
    {
        this->cityStudy = cityStudy;
    }

    string getName() const{
        return name;
    }

    string getSurname() const{
        return surname;
    };

    string getPatronymic() const{
        return patronymic;
    }

    string getCountry() const{
        return country;
    }

    string getCity() const{
        return city;
    }

    string getNumber() const{
        return number;
    };

    string getStudyName() const{
        return studyName;
    }

    string getCountryStudy() const{
        return countryStudy;
    };

    uint16_t getGroupNumber() const{
        return groupNumber;
    }

    Birthday getBirthday() const{
        return data;
    }


    void printStudentAllInfo()
    {
        cout << "Student name: " << name << endl;
        cout << "Student surname: " << surname << endl;
        cout << "Student patronymic: " << patronymic << endl;
        cout << "Student country: " << country << endl;
        cout << "Student city: " << city << endl;
        cout << "Student number: " << number << endl;
        cout << "Name of the educational institution: " << studyName << endl;
        cout << "Сountry of educational institution: " << countryStudy << endl;
        cout << "Сity of educational institution: " << cityStudy << endl;
        cout << "Group number: " << groupNumber << endl;
        cout << "Data: " << this->data.getDate() << endl;
    }
};



int main()
{
    Student s;
    Birthday b;
    string name, surname, country, city, number, studyName, cityStudy, countryStudy, patronymic;
    uint16_t groupNumber{}, day{}, month{}, year{};

    cout << "Enter student name: "; cin >> name;
    cout << "Enter student surname: "; cin >> surname;
    cout << "Enter student patronymic: "; cin >> patronymic;
    cout << "Enter student country: "; cin >> country;
    cout << "Enter student city: "; cin >> city;
    cout << "Enter student number: "; cin >> number;
    cout << "Enter student studyName: "; cin >> studyName;
    cout << "Enter student study country: "; cin >> countryStudy;
    cout << "Enter student cityStudy: "; cin >> cityStudy;
    cout << "Enter student groupNumber: "; cin >> groupNumber;

    cin.ignore();
    cout << "Enter student birthday date day: ";
    cin >> day;

    cout << "Enter student birthday date month: ";
    cin >> month;

    cout << "Enter year birthday: ";
    cin >> year;


    s.name = name;
    s.country = country;
    s.city = city;
    s.number = number;
    s.setSurname(surname);
    s.setCountryStudy(countryStudy);
    s.setPatronymic(patronymic);
    s.setStudyName(studyName);
    s.setCityStudy(cityStudy);
    s.setGroupNumber(groupNumber);

    b.setDay(day);
    b.setMonth(month);
    b.setYear(year);


    s.printStudentAllInfo();
    cout << endl;



    return 0;
}






//
//class Person {
//protected:
//    string surname;
//    uint16_t age{};
//public:
//    string name;
//
//    void print() const {
//        cout << name << " " << surname << " " << age << endl;
//    }
//    Person() = default;
//
//    Person(string name, string surname, uint16_t age) {
//        this->name = name;
//        this->surname = surname;
//        this->age = age;
//    }
//};
//
//class Student : public Person {
//private:
//    float gpa{};
//public:
//    Student() = default;
//
//    Student(string name, string surname, uint16_t age, float gpa) : Person(name, surname, age) {
//        this->gpa = gpa;
//    }
//};
//
//int main()
//{
//
//    Person p;
//    Student s;
//
//    p.name = "Ziya";
//    p.print();
//
//
//    return 0;
//}