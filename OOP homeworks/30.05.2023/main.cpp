

#pragma region Part1

//
//#include <iostream>
//using namespace std;
//
//void reduction(int &resultNumerator1, int &resultDenominator1)
//{
//
//    int reduction = 0;
//
//
//    if (resultNumerator1 > 0)
//    {
//        if (resultNumerator1 > resultDenominator1)
//            reduction = resultDenominator1;
//        else
//            reduction = resultNumerator1;
//
//        for (int i = reduction; i > 0; --i) {
//            if ((resultNumerator1 % i == 0) && (resultDenominator1 % i == 0))
//            {
//                resultNumerator1 /= i;
//                resultDenominator1 /= i;
//            }
//        }
//    }
//    else if (resultNumerator1 < 0)
//    {
//        resultNumerator1 = -(resultNumerator1);
//
//        if (resultNumerator1 > resultDenominator1)
//            reduction = resultDenominator1;
//        else
//            reduction = resultNumerator1;
//
//        for (int i = reduction; i > 0; --i) {
//            if ((resultNumerator1 % i == 0) && (resultDenominator1 % i == 0))
//            {
//                resultNumerator1 /= i;
//                resultDenominator1 /= i;
//            }
//        }
//
//        if (resultNumerator1 == 0)
//        {
//            resultNumerator1 = 0;
//            resultDenominator1 = 0;
//        }
//        else
//            resultNumerator1 = -(resultNumerator1);
//
//    }
//
//
//}
//
//class Fraction {
//public:
//
//    int numerator{};
//    int denominator{};
//
//    Fraction() = default;
//
//    Fraction(int numerator, int denominator) {
//        this->numerator = numerator;
//        this->denominator = denominator;
//    }
//
//    void comDenom(Fraction other, int &comDenomin, int &multiplier, int &multiplier2) const
//    {
//        while(true)
//        {
//            if ((comDenomin % denominator == 0) && (comDenomin % other.denominator == 0))
//                break;
//            else
//                comDenomin++;
//        }
//
//        multiplier = comDenomin / denominator;
//        multiplier2 = comDenomin / other.denominator;
//
//        other.numerator = multiplier2 * other.numerator;
//    }
//
//    Fraction operator + (Fraction& other) const
//    {
//
//        int commonDenominator = 1, multiplierAdd{}, multiplierAdd2{};
//        comDenom(other,commonDenominator,multiplierAdd,multiplierAdd2);
//
//        int resultNumerator = (multiplierAdd * numerator) + other.numerator;
//        int resultDenominator = commonDenominator;
//
//        reduction(resultNumerator, resultDenominator);
//            //return Fraction(resultNumerator,resultDenominator); хотел так сделать, но можно и проще
//        return {resultNumerator,resultDenominator};
//    }
//
//    Fraction operator - (Fraction& other) const
//    {
//        int commonDenominator = 1, multiplierDif{}, multiplierDif2{};
//        comDenom(other,commonDenominator,multiplierDif,multiplierDif2);
//
//        int resultNumerator = (multiplierDif * numerator) - other.numerator;
//        int resultDenominator = commonDenominator;
//
//        reduction(resultNumerator, resultDenominator);
//        return {resultNumerator,resultDenominator};
//    }
//
//    Fraction operator * (Fraction& other) const
//    {
//        int resultNumerator = numerator * other.numerator;
//        int resultDenominator = denominator * other.denominator;
//
//        reduction(resultNumerator, resultDenominator);
//        return{resultNumerator,resultDenominator};
//    }
//
//    Fraction operator / (Fraction& other) const
//    {
//        int tmp{};
//        tmp = other.numerator;
//        other.numerator = other.denominator;
//        other.denominator = tmp;
//
//        int resultNumerator = numerator * other.numerator;
//        int resultDenominator = denominator * other.denominator;
//
//        reduction(resultNumerator, resultDenominator);
//        return {resultNumerator, resultDenominator};
//    }
//
//    friend ostream& operator << (ostream& os, const Fraction& fraction)
//    {
//        os << fraction.numerator << "/" << fraction.denominator << endl;
//        return os;
//    }
//
//    friend istream& operator >> (istream& is,  Fraction& fraction)
//    {
//        cout << "Enter numerator: ";
//        is >> fraction.numerator;
//
//        cout << "Enter denominator: ";
//        is >> fraction.denominator;
//
//        return is;
//    }
//};
//
//
//int main()
//{
//    Fraction fraction1;
//    Fraction fraction2;
//
//    cin >> fraction1;
//    cin >> fraction2;
//
//
//    cout << fraction1 + fraction2;
//    cout << fraction1 - fraction2;
//    cout << fraction1 * fraction2;
//    cout << fraction1 / fraction2;
//
//
//
//    return 0;
//}


#pragma endregion Part1


#pragma region Part2
//#include <iostream>
//using namespace std;
//
//
//
//class Classroom
//{
//public:
//    uint16_t count;
//    uint16_t grade;
//    string nameClass;
//
//    Classroom() = default;
//    Classroom(uint16_t count, uint16_t grade, string nameClass)
//    {
//        this->count = count;
//        this->grade = grade;
//        this->nameClass = nameClass;
//    }
//
//
//    bool operator > (const Classroom& other) const{
//        return this->count > other.count;
//    }
//
//    bool operator < (const Classroom& other) const{
//        return this->count < other.count;
//    }
//
//    bool operator == (const Classroom& other) const{
//        return this->count == other.count;
//    }
//
//    bool operator != (const Classroom& other) const{
//        return this->count != other.count;
//    }
//
//    friend ostream& operator << (ostream& out, Classroom& classroom)
//    {
//        out <<"Class grade and name: " << classroom.grade << classroom.nameClass << endl
//            << "Students count in "<< classroom.grade << classroom.nameClass << " class: "<< classroom.count << endl;
//
//        return out;
//    }
//
//    friend istream& operator >> (istream& is, Classroom& classroom)
//    {
//        cout << "Enter class grade: "; is >> classroom.grade;
//        cout << "Enter classroom name: "; is >> classroom.nameClass;
//        cout << "Enter students count in " << classroom.grade << classroom.nameClass << " class: "; is >> classroom.count;
//        return is;
//    }
//
//
//
//};
//
//
//class Student : public Classroom
//{
//protected:
//    uint16_t age;
//public:
//    string name;
//    string surname;
//
//    Student() = default;
//    Student(uint16_t count,uint16_t clas, string nameClass, string name, string surname, uint16_t age) : Classroom(count,grade,nameClass)
//    {
//        this->name = name;
//        this->surname = surname;
//        this->age = age;
//    }
//
//    void setAge(uint16_t age)
//    {
//        if (age > 0 && age < 100)
//            this->age = age;
//    }
//
//    uint16_t getAge() const{
//        return this->age;
//    }
//
//
//    bool operator > (const Student& other) const{
//        return this->age > other.age;
//    }
//
//    bool operator < (const Student& other) const{
//        return this->age < other.age;
//    }
//
//    bool operator == (const Student& other) const{
//        return this->age == other.age;
//    }
//
//    bool operator != (const Student& other) const{
//        return this->age != other.age;
//    }
//
//    friend ostream& operator << (ostream& out, const Student& student)
//    {
//        out  << student.name << " " << student.surname << " " << student.getAge() << endl;
//        return out;
//    }
//
//    friend istream& operator >> (istream& in, Student& student)
//    {
//        cout << "Enter student name: ";
//        in >> student.name;
//
//        cout << "Enter student surname: ";
//        in >> student.surname;
//
//        cout << "Enter student age: ";
//        in >> student.age;
//
//
//        return in;
//    }
//};
//
//
//
//int main()
//{
//
//    uint16_t classCount{};
//    cout << "Enter class count: "; cin >> classCount;
//
//    Classroom* classroom = new Classroom[classCount]{};
//
//    for (int i = 0; i < classCount; ++i) {
//        cin >> classroom[i];
//    }
//
//    Student* students = new Student[classroom->count]{};
//
//    for (int i = 0; i < classCount; ++i) {
//        cout << "Enter students for class " << classroom[i].grade << classroom[i].nameClass << endl;
//        for (int i = 0; i < classroom->count; ++i) {
//            cin >> students[i];
//        }
//    }
//
//
//    for (int i = 0; i < classCount; ++i) {
//        cout << classroom[i];
//        for (int j = 0; j < classroom->count; ++j) {
//            cout << students[i];
//        }
//    }
//
//
//
//    return 0;
//}

#pragma endregion Part2



