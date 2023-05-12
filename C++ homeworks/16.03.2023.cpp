#include <iostream>
using namespace std;

//#1
//void foo(int *arr, int size, int *sum, int *multiplication){
//    *sum = 0;
//    *multiplication = 1;
//    for (int i = 0; i < size; ++i) {
//        *sum+=arr[i];
//        *multiplication*=arr[i];
//    }
//}


//#2
//void foo2(int *arr, int size, int negative, int positive, int null)
//{
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] > 0)
//            positive++;
//        else if (arr[i] < 0)
//            negative++;
//        else if(arr[i] == 0)
//            null++;
//    }
//    cout << endl << "Count positive elements: " << positive << endl;
//    cout << "Count negative elements: " << negative << endl;
//    cout << "Count NULL elements: " << null << endl;
//
//}

//#4 Negative elements
//void foo4(int *arr, const int size)
//{
//    int index = 0;
//    int indexFinal = 0;
//
//    for (int i = 0; i < size-1; ++i) {
//        for (int j = 0; j < size-i-1; ++j) {
//            if (arr[j] < arr[j+1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//            }
//        }
//    }
//
//    int count = 0;
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] < 0)
//            count++;
//    }
//    for (int i = 0; i < size-count; ++i) {
//        cout << arr[i] << ' ';
//    }
//
//}

//#5 Block elements
//void foo5(int *arr, const int size)
//{
//    for (int i = 0; i < 5; ++i) {
//        cout << arr[i] << ' ';
//    }
//    int count = 0;
//    cout << endl << "Enter count block elements: "; cin >> count;
//    int *arr2 = new int[count]{};
//    for (int i = 0; i < count; ++i) {
//        cin >> arr2[i];
//    }
//
//    int *arr3 = new int [size+count]{};
//    for (int i = 0; i < size; ++i) {
//        arr3[i] = arr[i];
//        cout << arr3[i] << ' ';
//    }
//    for (int i = 0; i < size+count-size; ++i) {
//        arr3[i] = arr2[i];
//        cout << arr3[i] << ' ';
//    }
//
//}

//#6 Add block element
//void foo6(int *arr, const int size)
//{
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << ' ';
//    }
//    int index = 0;
//    cout <<endl<< "Enter index: "; cin >> index;
//    for (int i = 0; i < index; ++i) {
//        cout << arr[i] << ' ';
//    }
//    int count = 0;
//    cout << "Enter count block elements: "; cin >> count;
//    int *arr2 = new int [count]{};
//    for (int i = 0; i < count; ++i) {
//        cin >> arr2[i];
//    }
//    int *arr3 = new int [size+count]{};
//    for (int i = 0; i < index; ++i) {
//        arr3[i] = arr[i];
//        cout << arr[i] << ' ';
//    }
//    for (int i = 0; i < size + count - size; ++i) {
//        arr3[i] = arr2[i];
//        cout << arr3[i] << ' ';
//    }
//
//}

//#7 Delete block elements
//void foo7(int *arr, const int size)
//{
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << ' ';
//    }
//
//    int index = 0;
//    cout << endl << "Enter index: "; cin >> index;
//
//    for (int i = 0; i < index; ++i) {
//        cout << arr[i] << ' ';
//    }
//
//}


//#3
//void foo3(int *arr, int *arr2, int size, int size2)
//{
//    for (int i = 0; i < size; ++i) {
//        cout << arr[i] << ' ';
//        for (int j = 0; j < size2; ++j) {
//            if (arr[i] == arr[j])
//                cout << &arr[i];
//        }
//    }
//}


int main()
{
#pragma region Part1_4
//    int *arr = new int [5]{};
//
//    for (int i = 0; i < 5; ++i) {
//        cin >> arr[i];
//        cout << arr[i] << ' ';
//    }
//    int sum{}; int multiplication{};
//
//    foo(arr, 5, &sum, &multiplication);
//    cout <<endl << "Sum: " << sum << endl;
//    cout << "Multiplication: " << multiplication;
//
#pragma endregion Part1_4
#pragma region Part2_4
//    int *arr = new int [5]{};
//    for (int i = 0; i < 5; ++i) {
//        cin >> arr[i];
//        cout << arr[i] << ' ';
//    }
//
//    int countNegative{};
//    int countPositive{};
//    int countNull{};
//
//    foo2(arr, 5, countNegative, countPositive, countNull);
#pragma endregion Part2_4
#pragma region Part4_4
//    int *arr = new int[5]{};
//    const int size = 5;
//    for (int i = 0; i < size; ++i) {
//        cin >> arr[i];
//    }
//    foo4(arr, size);
#pragma endregion Part4_4
#pragma region Part5_4
//    const int size = 5;
//    int *arr = new int[size]{};
//    cout << "Enter elements: ";
//    for (int i = 0; i < size; ++i) {
//        cin >> arr[i];
//    }
//    foo5(arr, size);
#pragma endregion Part5_4
#pragma region Part6_4
//    const int size = 5;
//    int *arr = new int[size]{};
//    for (int i = 0; i < size; ++i) {
//        cin >> arr[i];
//    }
//    foo6(arr, size);
#pragma endregion Part6_4
#pragma region Part7_4
//    const int size = 5;
//    int *arr = new int[size]{};
//    for (int i = 0; i < size; ++i) {
//        cin >> arr[i];
//    }
//
//    foo7(arr, size);
#pragma endregion Part7_4
#pragma region Part3_4
//    const int size = 5;
//    int *arr = new int[size]{};
//    cout << "Enter first array elements: ";
//    for (int i = 0; i < size; ++i) {
//        cin >> arr[i];
//    }
//
//    const int size2 = 3;
//    int *arr2 = new int[size2]{};
//    cout << "Enter second array elemenets: ";
//    for (int i = 0; i < size2; ++i) {
//        cin >> arr2[i];
//    }
//
//    foo3(arr, arr2, size, size2);
#pragma endregion Part3_4

    return 0;
}