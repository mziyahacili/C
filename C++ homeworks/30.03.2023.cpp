#include <iostream>
using namespace std;

//1
int mystrcmp (const char *str1, const char *str2)
{
    int count = 0;
    int count2 = 0;
    for (int i = 0; i < 100; ++i) {
        if (str1[i] >= 65 && str1[i] <= 90 || str1[i] >= 97 && str1[i] <= 122)
            count++;
    }
    for (int i = 0; i < 100; ++i) {
        if (str2[i] >= 65 && str2[i] <= 90 || str2[i] >= 97 && str2[i] <= 122)
            count2++;
    }
    if (count == count2)
        return 0;
    else if (count > count2)
        return 1;
    else if (count < count2)
        return -1;

}


//2
int StringToNumber(char *str)
{
//    First version code
//    int *numStr = new int[5]{};
//    for (int i = 0; i < 5; ++i) {
//        numStr[i] = str[i];
//        cout << numStr[i];
//    }

//Second version code
//    for (int i = 0; i < 5; ++i) {
//        cout << (int)str[i];
//    }
}


//3
char *NumberToString(int number)
{
    char *str = new char[5]{};
    for (int i = 0; i < 5; ++i) {
        cin >> number;
        str[i] = number;
        cout << str[i];
    }
}


//4
char *Uppercase (char *str1)
{
    for (int i = 0; i < 5; ++i) {
        if (str1[i] >= 97 || str1[i] <= 122)
        {
            str1[i] -= 32;
            cout << str1[i];
        }
    }
}


//5
char *Lowercase (char * str1)
{
    for (int i = 0; i < 5; ++i) {
        if (str1[i] >= 65 || str1[i] <= 90)
        {
            str1[i] += 32;
            cout << str1[i];
        }
    }

}'


//6
char *mystrrev (char * str)
{
    int *num = new int[5]{};
    for (int i = 0; i < 5; ++i) {
        num[i] = str[i];
    }
    int i = 5;
    char *reversStr = new char[5]{};
    for (int j = 0; j < 5; ++j) {
        i--;
        reversStr[j] = num[i];
        cout << reversStr[j];
    }

}

int main()
{

#pragma region Part1
//    const int size = 100;
//    char *firstStr = new char[size]{};
//    cout << "Enter first arr: ";
//    cin.getline(firstStr, size);
//
//    char *secondStr = new char[size]{};
//    cout << "Enter second arr: ";
//    cin.getline(secondStr, size);
//
//    cout << mystrcmp(firstStr, secondStr);
#pragma endregion Part1

#pragma region Part2
//    char *arr = new char[5]{};
//    cin.getline(arr,6);
//    StringToNumber(arr);
#pragma endregion Part2

#pragma region Part3
//    int num{};
//    NumberToString(num);
#pragma endregion Part3

#pragma region Part4
//    char *arr = new char[5]{};
//    cin.getline(arr,6);
//
//    Uppercase(arr);
#pragma endregion Part4

#pragma region Part5
//    char *arr = new char[5]{};
//    cin.getline(arr,6);
//
//    Lowercase(arr);
#pragma endregion Part5

#pragma region Part6
//    char *arr = new char[5]{};
//    cin.getline(arr,6);
//
//    mystrrev(arr);
#pragma endregion Part6

    return 0;
}