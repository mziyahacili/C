#include <iostream>
using namespace std;


int getMax(int* arr, int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int* arr, int size) {
    int min = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int getAvg(int* arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (int)sum / size;
}

int Action(int* A, int* B, int size, int (*func)(int*, int)) {
    return func(A, size) + func(B, size);
}

int main() {
    const int size = 5;
    int A[size] = {1, 2, 3, 4, 5};
    int B[size] = {10, 20, 30, 40, 50};

    cout << "max" << endl;
    cout << "min" << endl;
    cout << "avg" << endl;

    int choice{};
    cout << "Enter your choice (1 - 3): "; cin >> choice;

    switch(choice) {
        case 1:
            cout << "Sum max elements: " << Action(A, B, size, getMax) << endl;
            break;
        case 2:
            cout << "Sum min elements: " << Action(A, B, size, getMin) << endl;
            break;
        case 3:
            cout << "Sum avg elements: " << Action(A, B, size, getAvg) << endl;
            break;
        default:
            cout << "Error. Please choice 1 - 3." << endl;
            break;
    }
    return 0;
}
