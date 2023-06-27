#include <iostream>
#include "DoubleLinkedList.h"
using namespace std;


int main()
{

    DoubleLinkedList<int> list;
    list.pushBegin(1);
    list.pushBack(2);
    list.pushBack(3);
    list.pushBack(4);
    list.pushBack(5);
    list.addIndex(3,44);
    list.pop();
    list.deleteValue(2);
    cout << list;
    return 0;
}
