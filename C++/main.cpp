#include <iostream>
using namespace std;

int main()
{

    char *word = new char[20]{};
    int *intPassword = new int[20]{};
    int *newPasswordReverseInt = new int[20]{};
    char *newPasswordReverseChar = new char[20]{};

    int length = 0;
    cout << "Enter password: ";
    cin.getline(word,20);

    int step{};
    cout << "Enter step: "; cin >> step;

    for (int i = 0; i < 20; ++i) {
        if (word[i] >= 65 && word[i] <= 90 || word[i] >= 97 && word[i]<= 122 || word[i] >= 48 && word[i] <=57 || word[i] == 33|| word[i] == 63)
            length++;
    }

    for (int i = 0; i < length; ++i) {
        word[i] += step;
    }
    for (int i = 0; i < length; ++i) {
        intPassword[i] = word[i];
    }
    for (int i = 0; i < length; ++i) {
        int reverse = 0;
        while (intPassword[i] > 0) {
            reverse *= 10;
            reverse += intPassword[i] % 10;
            intPassword[i] /= 10;
        }
        newPasswordReverseInt[i] = reverse;
    }

    for (int i = 0; i < length; ++i) {
        if(newPasswordReverseInt[i] >= 127)
            newPasswordReverseInt[i] /= 10;
        if(newPasswordReverseInt[i] <= 32)
            if (step == 1)
                step++;
            else if(step == 0)
                step+=2;
        while(newPasswordReverseInt[i] <= 32)
        {
            newPasswordReverseInt[i] *= step;
        }
    }
    for (int i = 0; i < length; ++i) {
        newPasswordReverseChar[i] = newPasswordReverseInt[i];
    }

    int tmp = 0;
    for (int i = 0; i < length-1; ++i) {
        for (int j = 0; j < length-i-1; ++j) {

            if (newPasswordReverseChar[j] > newPasswordReverseChar[j+1])
            {
                tmp = newPasswordReverseChar[j];
                newPasswordReverseChar[j] = newPasswordReverseChar[j+1];
                newPasswordReverseChar[j+1] = tmp;
            }
        }
    }

    cout << "Your new password: ";
    for (int i = 0; i < length; ++i) {
        cout << newPasswordReverseChar[i];
    }

    cout << endl << "This project is new!";
    return 0;
}
