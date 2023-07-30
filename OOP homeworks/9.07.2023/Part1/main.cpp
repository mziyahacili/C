#include <iostream>
#include "OutOfRangeException.h"
using namespace std;


void arr(const int length, int* arr)
{
    int index{};
    if(length <= 0) {
        throw OutOfRangeException("Length error");
    }
    for (int i = 0; i < length; ++i) {
        cout << "Enter " << i + 1 << " element for array: "; cin >> arr[i];
    }


    cout << "Enter index: ";
    cin >> index;

    if  (index < 0  || index > length) {
        throw OutOfRangeException("Error index");
    }

}

int main()
{


    int* array = new int[]{};


    try{
        arr(-2,array);
    }catch(exception &e){
        cout << "Error: " << e.what() << endl;
    }


    return 0;
}



