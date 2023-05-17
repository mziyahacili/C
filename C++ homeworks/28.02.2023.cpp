#include <iostream>
using namespace std;

int main()
{
#pragma region Part1_2
//    srand(time(NULL));
//
//    int arr[2][4]{};
//    double sum{};
//    double arithMean{};
//    double count{};
//
//
//    for (int i = 0; i < 2; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            arr[i][j] = 1 + rand() % 9;
//            sum+=arr[i][j];
//            cout << arr[i][j] << ' ';
//        }
//    }
//    int min = arr[0][0];
//    int max = arr[0][0];
//
//    for (int i = 0; i < 2; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            ++count;
//            arithMean = sum/count;
//        }
//    }
//
//    for (int i = 0; i < 2; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            if (arr[i][j] < min)
//                min = arr[i][j];
//            if (arr[i][j] > max)
//                max = arr[i][j];
//        }
//    }
//    cout << endl;
//    cout << "Sum: " << sum << endl;
//    cout << "Arith mean: " << arithMean<< endl;
//    cout << "Min elem: " << min<< endl;
//    cout << "Max elem: " << max<< endl;
#pragma endregion Part1_2
#pragma region Part2_2
//    int arr[3][4]{};
//    int sum = 0;
//    int sum2 = 0;
//    int sum3 = 0;
//    int sumFirst = 0;
//    int sumSecond = 0;
//    int sumThird = 0;
//    int sumForth = 0;
//    int sumFifth = 0;
//
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            cin >> arr[i][j];
//        }
//    }
//
//    for (int i = 0; i < 1; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            cout << arr[i][j] << ' ';
//            sum += arr[i][j];
//        }
//    }
//    cout << " | " << sum;
//    cout << endl;
//    for (int i = 1; i < 2; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            cout << arr[i][j] << ' ';
//            sum2+= arr[i][j];
//        }
//    }
//    cout << " | " << sum2;
//    cout << endl;
//
//    for (int i = 2; i < 3; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            cout << arr[i][j] << ' ';
//            sum3+=arr[i][j];
//        }
//    }
//
//    cout << " | " << sum3;
//    cout << endl;
//
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 1; ++j) {
//            sumFirst += arr[i][j];
//        }
//    }
//    cout << "--------------------";
//    cout << endl;
//    cout << sumFirst;
//
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 1; j < 2; ++j) {
//            sumSecond += arr[i][j];
//        }
//    }
//    cout << ' ';
//    cout << sumSecond;
//
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 2; j < 3; ++j) {
//            sumThird += arr[i][j];
//        }
//    }
//    cout << ' ';
//    cout << sumThird;
//
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 3; j < 4; ++j) {
//            sumForth += arr[i][j];
//        }
//    }
//
//    cout << ' ';
//
//    cout << sumForth;
//
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 4; ++j) {
//            sumFifth += arr[i][j];
//        }
//    }
//
//    cout << ' ';
//    cout << '|' <<' '<<sumFifth;
#pragma endregion Part2_2
#pragma region Part3_2
//    srand(time(NULL));
//    int arr[5][10]{};
//    int arr2[5][5]{};
//
//    for (int i = 0; i < 5; ++i) {
//        for (int j = 0; j < 10; ++j) {
//            arr[i][j] = 1 + rand() % 50;
//            cout << arr[i][j] << ' ';
//        }
//    }
//
//    cout << endl;
//    int count = 0;
//    int count2 = 1;
//    for (int i = 0; i < 5; ++i) {
//        for (int j = 0; j < 5; ++++j) {
//            arr2[i][j] = arr[i][j] + arr[i][j+1];
//            cout << arr2[i][j] << ' ';
//
//        }
//    }
#pragma endregion Part3_2

    return 0;
}