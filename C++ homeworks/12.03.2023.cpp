#1

int main()
//{
//
//    int firstLength{};
//    int secondLength{};
//    int count{};
//
//    cout <<  "Enter first length: "; cin >> firstLength;
//    cout << "Enter second length: "; cin >> secondLength;
//
//
//    int* firstArr = new int[firstLength];
//    int* secondArr = new int[secondLength];
//    int* thirdArr = new int[firstLength + secondLength];
//
//    for (int i = 0; i < firstLength; i++)
//    {
//        cin >> firstArr[i];
//    }
//
//    for (int i = 0; i < secondLength; i++)
//    {
//        cin >> secondArr[i];
//    }
//
//    for (int i = 0; i < firstLength; i++)
//    {
//        bool elem = true;
//        for (int j = 0; j < secondLength; j++)
//        {
//            if (firstArr[i] == secondArr[j])
//            {
//                elem = false;
//                break;
//            }
//        }
//        if (elem == true)
//        {
//            bool found = false;
//            for (int k = 0; k < count; k++)
//            {
//                if (thirdArr[k] == firstArr[i])
//                {
//                    found = true;
//                    break;
//                }
//            }
//            if (found == false)
//            {
//                thirdArr[count] = firstArr[i];
//                count++;
//            }
//        }
//    }
//
//    for (int i = 0; i < secondLength; i++)
//    {
//        bool elem = true;
//        for (int j = 0; j < firstLength; j++)
//        {
//            if (secondArr[i] == firstArr[j])
//            {
//                elem = false;
//                break;
//            }
//        }
//        if (elem == true)
//        {
//            bool found = false;
//            for (int k = 0; k < count; k++)
//            {
//                if (thirdArr[k] == secondArr[i])
//                {
//                    found = true;
//                    break;
//                }
//            }
//            if (found == false)
//            {
//                thirdArr[count] = secondArr[i];
//                count++;
//            }
//        }
//    }
//
//    for (int i = 0; i < count; i++)
//    {
//        cout << thirdArr[i] << " ";
//    }
//
//
//    return 0;
//
//
//}