#include <iostream>
using namespace std;

int main()
{
#pragma region Part4_9_04_23
//    char *arr = new char[100]{};
//    cin.getline(arr, 100);
//    int numCount = 0;
//    for (int i = 0; i < 100; ++i) {
//        cout << arr[i];
//        if (arr[i] >= 48 && arr[i] <= 57)
//            numCount++;
//    }
//    cout << endl << "Numbers count: " << numCount;
#pragma endregion Part4_9_04_23

#pragma region Part3_9_04_23
//char *text = new char[100]{};
//int count[26]{};
//
//cout << "Enter text: ";
//cin.getline(text, 100);
//
//for (int i = 0; text[i] != '\0'; i++)
//{
//    if (text[i] >= 'a' && text[i] <= 'z')
//        count[text[i] - 'a']++;
//    else if (text[i] >= 'A' && text[i] <= 'Z')
//        count[text[i] - 'A']++;
//}
//
//for (int i = 0; i < 26; i++)
//{
//    if (count[i] != 0)
//        cout << char(i + 'a') << ": " << count[i] << endl;
//}


#pragma endregion Part3_9_04_23

#pragma region Part1_mozgoderniy
//#include <iostream>
//using namespace std;
//
//int main() {
//    int length = 1;
//    char *text = new char[100]{};
//    cin.getline(text,100);
//    for (int i = 0; i < 100; ++i) {
//        if (text[i] >= 97 && text[i] <= 122 || text[i] >= 65 && text[i] <= 90 || text[i] == 32)
//            length++;
//    }
//
//    char *word1 = new char[100]{};
//    cout << "Enter word: ";
//    cin.getline(word1,100);
//
//    int wordLength = 0;
//    char *newWord = new char[100]{};
//    cout << "Enter new word: ";
//    cin.getline(newWord,100);
//    for (int i = 0; i < 100; ++i) {
//        if (newWord[i] >= 97 && newWord[i] <= 122 || newWord[i] >= 65 && newWord[i] <= 90 || newWord[i] == 32)
//            wordLength++;
//    }
//    int count = 0;
//    char *newArr = new char[10]{};
//
//
//    int start = 0;
//    while (text[start] == ' ' || text[start] == '\t' || text[start] == '\n') {
//        start++;
//    }
//    for (int i = start; i < length; i++) {
//        if (text[i] == ' ' || text[i] == '\t' || text[i] == '\n' || text[i] == '\0') {
//            int word_length = i - start;
//            char word[word_length + 1];
//
//            if (wordLength > word_length)
//                word_length++;
//            for (int j = 0; j < word_length; j++) {
//                word[j] = text[start + j];
//                if (word[j] == word1[j])
//                    word[j] = newWord[j];
//            }
//
//
//            word[word_length] = '\0';
//            cout << word << endl;
//
//
//
//            start = i + 1;
//            while (text[start] == ' ' || text[start] == '\t' || text[start] == '\n') {
//                start++;
//            }
//        }
//    }
//
//
//    cout << endl << count;
//    return 0;
//}
#pragma endregion Part1



    return 0;
}
