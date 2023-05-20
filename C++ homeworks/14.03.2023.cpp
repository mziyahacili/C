#include <iostream>
using namespace std;

int main()
{
    int countGoods = 0;

    cout << "Enter how much goods you want: ";
    cin >> countGoods;

    char** name = new char*[countGoods]{};
    double** cost = new double*[countGoods+1]{};

    for (int i = 0; i < countGoods; ++i) {
         name[i] = new char[]{};
         char* nameGoods = new char[20]{};

         cin.ignore();
         cout << "Enter " << i + 1 << " elements: ";
         cin.getline(nameGoods,21);

         name[i] = nameGoods;

         cost[i] = new double[]{};
         double* costGoods = new double[10]{};

         cout << "Enter " << i + 1 << " cost goods: ";
         cin >> costGoods[i];

         cost[i] = &costGoods[i];
    }

    cout << endl;


    for (int i = 0; i < countGoods; ++i) {
        cout << name[i] << endl << *cost[i] << endl;
        cout << endl;
    }
    cout << endl;

    int choice = 0;

    double *tmpForCostExpensive = nullptr;
    char *tmpForNameExpensive = nullptr;

    double *tmpForCostCheap = nullptr;
    char *tmpForNameCheap = nullptr;

    char *tmpForNameAscii = nullptr;
    double* tmpForCostAscii = nullptr;


    do {
        cout << "1. Search expensive goods" << endl;
        cout << "2. Search cheap goods" << endl;
        cout << "3. Sort goods ASCII" << endl;
        cout << "4. Stop" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:

                for (int i = 0; i < countGoods-1; ++i) {
                    for (int j = 0; j < countGoods - i - 1; ++j) {
                        if (*cost[j] > *cost[j+1])
                        {
                            tmpForCostExpensive = cost[j];
                            cost[j] = cost[j+1];
                            cost[j+1] = tmpForCostExpensive;

                            tmpForNameExpensive = name[j];
                            name[j] = name[j+1];
                            name[j+1] = tmpForNameExpensive;
                        }
                    }
                }
                cout << endl << name[countGoods-1] << endl;
                cout << *cost[countGoods-1] << endl;
                break;

            case 2:
                for (int i = 0; i < countGoods - 1; ++i) {
                    for (int j = 0; j < countGoods - i - 1; ++j) {
                        if (*cost[i] > *cost[i+1])
                        {
                            tmpForCostCheap = cost[j];
                            cost[j] = cost[j+1];
                            cost[j+1] = tmpForCostCheap;

                            tmpForNameCheap = name[j];
                            name[j] = name[j+1];
                            name[j+1] = tmpForNameCheap;
                        }
                    }
                }
                cout << endl;
                cout << name[0] << endl;
                cout << *cost[0] << endl;
                break;

            case 3:
                for (int i = 0; i < countGoods-1; ++i) {
                    for (int j = 0; j < countGoods-i-1; ++j) {
                        if ((int)*name[j] > (int)*name[j+1])
                        {
                            tmpForNameAscii = name[j];
                            name[j] = name[j+1];
                            name[j+1] = tmpForNameAscii;

                            tmpForCostAscii = cost[j];
                            cost[j] = cost[j+1];
                            cost[j+1] = tmpForCostAscii;
                        }
                    }
                }

                cout << endl;
                for (int i = 0; i < countGoods; ++i) {
                    cout << name[i] << endl;
                    cout << *cost[i] << endl;
            }
                break;
        }

    }while(choice != 4);

    delete[] cost;
    delete[] name;

    return 0;
}

