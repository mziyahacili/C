
//Cумма дробей

#include <iostream>
using namespace std;

class Fraction {
public:

    int numerator{};
    int denominator{};
    Fraction() = default;

    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }



    void add(Fraction other)
    {
        int commonDenominator = 1, multiplierAdd{}, multiplierAdd2{};
        while(true)
        {
            if ((commonDenominator % denominator == 0) && (commonDenominator % other.denominator == 0))
                break;
            else
                commonDenominator++;
        }

        multiplierAdd = commonDenominator / denominator;
        multiplierAdd2 = commonDenominator / other.denominator;

        other.numerator = multiplierAdd2 * other.numerator;

        int resultNumerator = (multiplierAdd * numerator) + other.numerator;
        int resultDenominator = commonDenominator;


        int reductionAdd = 0;

        if (resultNumerator > resultDenominator)
            reductionAdd = resultDenominator;
        else
            reductionAdd = resultNumerator;

        for (int i = reductionAdd; i > 0; --i) {
            if ((resultNumerator % i == 0) && (resultDenominator % i == 0))
            {
                resultNumerator /= i;
                resultDenominator /= i;
            }
        }
        if (resultNumerator == resultDenominator)
            cout << 1 << endl;
        else
            cout << resultNumerator << '/' << resultDenominator << endl;
    }


    void difference(Fraction other)
    {

        int commonDenominatorDifference = 1, multiplierDifference{}, multiplierDifference2{};
        while(true)
        {
            if ((commonDenominatorDifference % denominator == 0) && (commonDenominatorDifference % other.denominator == 0))
                break;
            else
                commonDenominatorDifference++;
        }

        multiplierDifference = commonDenominatorDifference / denominator;
        multiplierDifference2 = commonDenominatorDifference / other.denominator;

        other.numerator = multiplierDifference2 * other.numerator;

        int resultNumerator = (multiplierDifference * numerator) - other.numerator;
        int resultDenominator = commonDenominatorDifference;


        int reductionDifference = 0;


        if (resultNumerator < 0)
        {
            resultNumerator = -(resultNumerator);

            if (resultNumerator > resultDenominator)
                reductionDifference = resultDenominator;
            else
                reductionDifference = resultNumerator;

            for (int i = reductionDifference; i > 0; --i) {
                if ((resultNumerator % i == 0) && (resultDenominator % i == 0))
                {
                    resultNumerator /= i;
                    resultDenominator /= i;
                }
            }

            if (resultNumerator == 0)
                cout << 0 << endl;
            else
                cout << -(resultNumerator) << '/' << resultDenominator << endl;
        }

        else
        {
            if (resultNumerator > resultDenominator)
                reductionDifference = resultDenominator;
            else
                reductionDifference = resultNumerator;

            for (int i = reductionDifference; i > 0; --i) {
                if ((resultNumerator % i == 0) && (resultDenominator % i == 0))
                {
                    resultNumerator /= i;
                    resultDenominator /= i;
                }
            }
            if (resultNumerator == 0)
                cout << 0 << endl;
            else
                cout << resultNumerator << '/' << resultDenominator << endl;
        }


    }

    void multiply(Fraction other)
    {
        int greatesReductionMultiply{};
        int resultNumeratorMultiply = numerator * other.numerator;
        int resultDenominatorMultiply = denominator * other.denominator;

        if (resultNumeratorMultiply > resultDenominatorMultiply)
            greatesReductionMultiply = resultDenominatorMultiply;
        else
            greatesReductionMultiply = resultNumeratorMultiply;

        cout << greatesReductionMultiply << endl;


        for (int i = greatesReductionMultiply; i > 1; i--) {
            if ((resultNumeratorMultiply % i == 0) && (resultDenominatorMultiply % i == 0))
            {
                resultNumeratorMultiply = resultNumeratorMultiply / i;
                resultDenominatorMultiply = resultDenominatorMultiply / i;
            }
        }
        cout << resultNumeratorMultiply << '/' << resultDenominatorMultiply << endl;
    }

    void division(Fraction other)
    {
        int tmp{}, greatestReductionDivision{};
        tmp = other.numerator;
        other.numerator = other.denominator;
        other.denominator = tmp;

        int resultNumeratorDivision = numerator * other.numerator;
        int resultDenominatorDivision = denominator * other.denominator;

        if (resultNumeratorDivision > resultDenominatorDivision)
            greatestReductionDivision = resultDenominatorDivision;
        else
            greatestReductionDivision = resultNumeratorDivision;

        for (int i = greatestReductionDivision; i > 0; --i) {
            if ((resultNumeratorDivision % i == 0) && (resultDenominatorDivision % i == 0))
            {
                resultNumeratorDivision/=i;
                resultDenominatorDivision/=i;
            }
        }

        cout << resultNumeratorDivision << '/' << resultDenominatorDivision << endl;
    }

};

int main()
{
    int choice{};
    int chooseFraction{};
    int numerator{}, denominator{}, numerator2{}, denominator2{};
    Fraction fraction;
    Fraction fraction2;

    cout << "Enter numerator: ";
    cin >> numerator;
    fraction.numerator = numerator;

    cout << "Enter denominator: "; cin >> denominator;
    fraction.denominator = denominator;

    cout << "Enter other numerator: "; cin >> numerator2;
    cout << "Enter other denominator: "; cin >> denominator2;

    fraction2.numerator =  numerator2;
    fraction2.denominator = denominator2;


    do {

        cout << "1. Add" << endl
             << "2. Difference" << endl
             << "3. Multiply" << endl
             << "4. Division" << endl
             << "5. Stop" << endl;
        cout << "Choose one of the actions: "; cin >> choice;

        switch(choice)
        {
            case 1:
                fraction.add(fraction2);
                break;
            case 2:
                fraction.difference(fraction2);
                break;
            case 3:
                fraction.multiply(fraction2);
                break;
            case 4:
                fraction.division(fraction2);
                break;
            case 5:
                cout << "Program stop!" << endl;
                break;
            default:
                cout << "Please choose 1 - 5!";
                continue;
        }

        cout << "1. Add new fraction" << endl;
        cout << "2. No "<< endl;

        cout << "Choose 1 - 2: "; cin >> chooseFraction;

        if (chooseFraction == 1)
        {
            cout << "Enter numerator: ";
            cin >> numerator;
            fraction.numerator = numerator;

            cout << "Enter denominator: "; cin >> denominator;
            fraction.denominator = denominator;

            cout << "Enter other numerator: "; cin >> numerator2;
            cout << "Enter other denominator: "; cin >> denominator2;

            fraction2.numerator =  numerator2;
            fraction2.denominator = denominator2;
        }
        else
            continue;
    }while(choice != 5);


    return 0;
}