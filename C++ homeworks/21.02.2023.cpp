#1
#include <iostream>
using namespace std;

int main()
{
#pragma region Part1
//    srand(time(NULL));
//    int arr1[10]{};
//    for (int i = 0; i < 10; ++i)
//    {
//        arr1[i] = 1 + rand() % 10;
//        cout << arr1[i] << ' ';
//    }
//
//    int arr2[5]{};
//    int arr3[5]{};
//    cout << endl;
//
//    for (int i = 0; i < 5; ++i) {
//        arr2[i] = arr1[i];
//        cout << arr2[i] << ' ';
//    }
//    cout << endl;
//    for (int i = 5; i < 10; ++i) {
//        arr3[i] = arr1[i];
//        cout << arr3[i] <<' ';
//    }
#pragma endregion Part1


#pragma region Part2
//    srand(time(NULL));
//    int arr1[5]{};
//    int arr2[5]{};
//    int sum1 = 0;
//    int sum2 = 0;
//    for (int i = 0; i < 5; ++i) {
//        arr1[i] = 1 + rand() % 10;
//        cout << arr1[i] << ' ';
//        sum1+=arr1[i];
//    }
//    cout << endl;
//    for (int i = 0; i < 5; ++i) {
//        arr2[i] = 1 + rand() % 10;
//        cout << arr2[i] << ' ';
//        sum2+=arr2[i];
//
//    }
//    cout << endl;
//    int arr3[1]{};
//    for (int i = 0; i < 1; ++i) {
//        arr3[i] = sum1 + sum2;
//        cout << arr3[i];
//    }
#pragma endregion Part2



#pragma region Part3
//    int averageSpend{};
//    int total{};
//    int arr[7]{};
//    int count = 0;
//    int count1 = 0;
//
//    for (int i = 0; i < 7; ++i) {
//        cout << "Enter expenses for " << i+1 << " day: ";
//        cin >> arr[i];
//    }
//    cout << endl;
//
//    for (int i = 0; i < 7; ++i) {
//        averageSpend+=arr[i];
//        count++;
//    }
//    cout << "Average spend: " << averageSpend/count;
//    cout << endl;
//
//    for (int i = 0; i < 7; ++i) {
//        total += arr[i];
//    }
//
//    cout << "Total spend: " << total;
//    cout << endl;
//    for (int i = 0; i < 7; ++i) {
//        if (arr[i] > 100)
//        {
//            count1++;
//            cout << "The amount spent on " << i+1 <<" exceeded 100$" << endl;
//        }
//    }
//    cout << "Number of days that exceeded $100: " << count1 << endl;
#pragma endregion Part3

#pragma region Part4

    double exchange[12];
    double percent[12];
    double depositAmount;

    // ввод данных
    cout << "Введите курс доллара: \n";
    for (int i = 0; i < 12; i++) {
        std::cout << "Месяц " << i+1 << ": ";
        std::cin >> exchange[i];
    }

    cout << "Введите начисленные проценты:\n";
    for (int i = 0; i < 12; i++) {
        std::cout << "Месяц " << i+1 << ": ";
        std::cin >> percent[i];
    }

    cout << "Введите сумму на депозите в евро: ";
    cin >> depositAmount;

    int month{};
    cout << "Введите номер месяца: ";
    cin >> month;

    double amount = depositAmount * (percent[month-1] / 100);
    double cashAmount = 0;
    if (amount >= 500) {
        cashAmount = amount / 2;
    }

    cout << "Cумма для обналичивания в месяц " << month << ": " << cashAmount << " долларов\n";

#pragma endregion Part4

    return 0;
}