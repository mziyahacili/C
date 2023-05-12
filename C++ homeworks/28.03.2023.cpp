#include <iostream>
using namespace std;

template <typename T>
T min(T arr[], const int length)
{
    T min = arr[0];
    for (int i = 0; i < length; ++i)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "Min number: ";
    return min;
}
template <typename M>
M max(M arr[], const int length)
{
    M max = arr[0];
    for (int i = 0; i < length; ++i)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "Max number: ";
    return max;
}

template <typename N>
N arithMean(N arr[], const int length)
{
    N sum{};
    int count = 0;
    for (int i = 0; i < length; ++i)
    {
        sum+=arr[i];
        count++;
    }
    cout << "Arithmetic mean: ";
    return sum/count;
}
template <typename K>
K fact(K arr[], const int length)
{
    K mult = 1;
    for (int i = 0; i < length; ++i) {
        mult *= arr[i];
    }
    cout << "Factorial is: ";
    return mult;
}


template <typename J>
J factSum(J arr[], const int length)
{
    int mult = 1;
    int count = 0;
    for (int i = 0; i < 3; ++i)
    {
        cout << arr[i] << ' ';
        mult = 1;
        for (int j = 0; j < arr[i]; ++j) {
            mult*=arr[i];
            arr[i]--;
        }
        count+=mult;
    }
    cout << "Result: ";
    return count;
}


int main()
{
    int arr[4]{12, 99, 400, 2};
    double doubleArray[4]{12.3,90.2, 500, 900.1};

    double sumfactorDouble[3]{3.3,3.3,2};
    float sumfactorFloat[3]{3.2,1.1,2.2};
    int sumfactor[3]{3,3,2};

    cout << min(arr, 4) << endl;
    cout << max(arr, 4) << endl;

    cout << min(doubleArray, 4) << endl;
    cout << max(doubleArray, 4) << endl;

    cout << arithMean(arr, 4) << endl;
    cout << arithMean(doubleArray, 4) << endl;

    cout << fact(arr, 4) << endl;
    cout << fact(doubleArray, 4) << endl;

    cout << factSum(sumfactor, 3) << endl;
    cout << factSum(sumfactorDouble, 3) << endl;
    cout << factSum(sumfactorFloat, 3) << endl;

    return 0;
}