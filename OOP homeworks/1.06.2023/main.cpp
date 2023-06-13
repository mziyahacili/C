#include <iostream>
using namespace std;

#pragma region Part1
class Circle
{
public:
    double radius{};
    double length{};
    Circle() = default;

    Circle(double radius, double length)
    {
        this->radius = radius;
        this->length = length;
    }

    bool operator == (const Circle& other) const
    {
        return this->radius == other.radius;
    }

    bool operator != (const Circle& other) const
    {
        return this->radius != other.radius;
    }

    bool operator > (const Circle& other) const
    {
        return this->length > other.length;
    }

    bool operator < (const Circle& other) const
    {
        return this->length < other.length;
    }

    friend Circle& operator += (Circle& left, const Circle& rigth)
    {
        left.radius += rigth.radius;
        return left;
    }

    friend Circle& operator -= (Circle& left, const Circle& right)
    {
        left.radius -= right.radius;
        return left;
    }

    friend ostream& operator << (ostream& os, const Circle& circle)
    {
        os << "Radius: " << circle.radius << endl << "Length: " << circle.length << endl;
        return os;
    }


    friend istream& operator >> (istream& is, Circle& circle)
    {
        cout << "Enter radius: "; is >> circle.radius;
        cout << "Enter length: "; is >> circle.length;
        return is;
    }


};


int main()
{

    Circle c;
    Circle c1;

    cin >> c;
    cin >> c1;

    cout << c;
    cout << c1;

    return 0;
}

#pragma endregion Part1

#pragma region Part2


class Airplane
{
private:
    string name;
    string model;
    uint16_t maxEngine{};
public:
    uint16_t countEngine{};

    Airplane() = default;
    Airplane(string name, string model, uint16_t maxEngine, uint16_t countEngine)
    {
        this->name = name;
        this->model = model;
        this->countEngine = countEngine;
        this->maxEngine = maxEngine;
    }

    bool operator == (const Airplane& other)
    {

        return this->model == other.model;
    }

    bool operator > (const Airplane& other) const
    {
        return this->maxEngine > other.maxEngine;
    }

    bool operator < (const Airplane& other) const
    {
        return this->maxEngine < other.maxEngine;
    }

    friend Airplane& operator ++ (Airplane& left)
    {
       ++left.countEngine;
        return left;
    }

    friend Airplane& operator -- (Airplane& left)
    {
        --left.countEngine;
        return left;
    }

    friend ostream& operator << (ostream& os, Airplane& airplane)
    {
        os << "Name: " << airplane.name << endl << "Model: " << airplane.model << endl
           << "Count engine: " << airplane.countEngine << endl << "Count max engine: " << airplane.maxEngine << endl;
        return os;
    }

    friend istream& operator >> (istream& is, Airplane& airplane)
    {
        cout << "Enter airplane name: "; is >> airplane.name;
        cout << "Enter airplane model: "; is >> airplane.model;
        cout << "Enter engine count: "; is >> airplane.countEngine;
        cout << "Enter max count engine: "; is >> airplane.maxEngine;

        return is;
    }
};

int main()
{

    Airplane a1;
    Airplane a2;

    cin >> a1;
    cout << a1;
    cout << endl;
    cin >> a2;
    cout << a2;


    cout << (a1 == a2);
    cout << (++a1) << endl << (--a1) << endl;
    cout << (++a2) << endl << (--a2) << endl;
    cout << (a1 > a2);


    return 0;
}

#pragma endregion Part2
