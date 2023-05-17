#pragma region Part1_14_03_2023
//int foo(double num, int deg)
//{
//
//    if (deg == 0)
//        return 1;
//    else
//        return num * foo(num, deg - 1);
//
//}
//int main()
//{
//    double number{};
//    int degree{};
//
//    cout << "Enter number: ";
//    cin >> number;
//
//    cout << "Enter degree: ";
//    cin >> degree;
//
//    double result = foo(number, degree);
//
//    cout << "Your result: " << result;
//    return 0;
//}

#pragma endregion Part1_14_03_2023






#pragma region Part2_14_03_2023

//void foo(int N)
//{
//
//    if (N == 0)
//        return;
//    cout << "*";
//    return foo(N-1);
//
//
//}
//int main()
//{
//
//    int N{};
//    cout << "Enter N: "; cin >> N;
//
//
//
//    foo(N);
//
//
//    return 0;
//}


#pragma endregion Part2_14_03_2023





#pragma region Part3_14_03_2023

//int foo(int num1, int num2)
//{
//
//    if (num1 > num2)
//        return 0;
//    return num1 + foo(num1+1,num2);
//
//}
//
//int main()
//{
//
//    int start{};
//    int end{};
//
//    cout << "Enter start number: "; cin >> start;
//    cout << "Enter end number: "; cin >> end;
//
//    int result = foo(start, end);
//
//    cout << "Your result: " << result;
//
//    return 0;
//}
#pragma endregion Part3_14_03_2023










#pragma region Part4_14_03_2023



//#include <iostream>
//using namespace std;
//
//int foo(int *arr, int start) {
//    int minSum = 0;
//    int sum = 0;
//    int position = start;
//    for(int i = 0; i < 10; i++) {
//        sum += arr[start+i];
//    }
//    minSum = sum;
//    for(int i = start; i <= 100 - 10; i++) {
//        sum -= arr[i];
//        sum += arr[i+10];
//        if(sum < minSum) {
//            minSum = sum;
//            position = i+1;
//        }
//    }
//    return position;
//}
//
//int main()
//{
//    srand(time(NULL));
//    int arr[100];
//    for(int i = 0; i < 100; i++) {
//        arr[i] = rand()%100 - 50;
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//    int pos = foo(arr, 0);
//    cout << "Minimum sum position: " << pos << endl;
//    return 0;
//}
#pragma endregion Part4_14_03_2023












#pragma region Part5_14_03_2023

//#1
//int foo(int arr[], int length)
//{
//
//    int max = arr[0];
//
//    for (int i = 0; i < 4; ++i)
//    {
//        if (arr[i] > max)
//            max = arr[i];
//    }
//    return max;
//
//}
//
//double foo(double arr[], int length)
//{
//    double max = arr[0];
//
//    for (int i = 0; i < 4; ++i)
//    {
//        if (arr[i] > max)
//            max = arr[i];
//    }
//    return max;
//}


//#2
//int foo2(int arr[][2], int rows, int cols)
//{
//    int max = arr[0][0];
//    for (int i = 0; i < rows; ++i)
//    {
//        for (int j = 0; j < cols; ++j)
//        {
//            if (arr[i][j] > max)
//                max = arr[i][j];
//        }
//    }
//
//    return max;
//}
//
//double foo2(double arr[][2], int rows, int cols)
//{
//    double max = arr[0][0];
//    for (int i = 0; i < rows; ++i)
//    {
//        for (int j = 0; j < cols; ++j)
//        {
//            if (arr[i][j] > max)
//                max = arr[i][j];
//        }
//    }
//
//    return max;
//}



//#4
//int foo4(int start, int end)
//{
//    int max = {};
//    if (start > end)
//       max = start;
//    else if(start < end)
//        max = end;
//
//    return max;
//}
//
//double foo4(double start, double end)
//{
//    double max = 0;
//    if (start > end)
//        max = start;
//    else if(start < end)
//        max = end;
//
//    return max;
//
//}


//#5
//int foo5(int num1, int num2, int num3)
//{
//    int max = 0;
//    if (num1 > num2 && num1 > num3)
//        max = num1;
//    else if(num2 > num1 && num2 > num3)
//        max = num2;
//    else if(num3 > num1 && num3 > num2)
//        max = num3;
//
//    return max;
//}
//
//double foo5(double num1, double num2, double num3) {
//
//
//    double max = 0;
//    if (num1 > num2 && num1 > num3)
//        max = num1;
//    else if (num2 > num1 && num2 > num3)
//        max = num2;
//    else if (num3 > num1 && num3 > num2)
//        max = num3;
//
//    return max;
//}

int main()
{
//#1
//    int arr[4]{5,3,9,2};
//    double arr_double[4]{4.6,90.3,234.4,2.3};
//    cout << foo(arr,4) << endl;
//    cout << foo(arr_double, 4) << endl;


//#2

//int arr[][2]{{1,9}, {5,2}};
//double arr_double[][2]{{54.3,97.3} , {31.2,56.3}};
//cout << foo2(arr, 2, 2) << endl;
//cout << foo2(arr_double, 2,2) << endl;




//#4
//cout << foo4(25,86) << endl;
//cout << foo4(93.4,100.3) << endl;


//#5
//cout << foo5(3,9,5) << endl;
//cout << foo5(4.6, 9.3, 10.4) << endl;



//    return 0;
//}


#pragma endregion Part5_14_03_2023
