//#include <iostream>
//using namespace std;
//
//struct Book{
//    char* name{};
//    char* author{};
//    char* publishing{};
//    void bookInfo()
//    {
//        cout << "Book name: " << name << endl;
//        cout << "Book author: " << author << endl;
//        cout << "Book publishing: " << publishing << endl;
//
//    }
//};
//
//
//Book* createBook()
//{
//
//    Book* books = new Book{};
//    books->name = new char[30]{};
//    books->author = new char[30]{};
//    books->publishing = new char[30]{};
//
//    cout << "Enter book name: ";
//    cin.getline(books->name, 31);
//
//    cout << "Enter book author: ";
//    cin.getline(books->author, 31);
//
//    cout << "Enter book publishing: ";
//    cin.getline(books->publishing, 31);
//
//    return books;
//}
//
//int main()
//{
//    const int size = 10;
//    int choice = 0;
//
//    Book *tmpForName = nullptr;
//    Book *tmpForAuthor = nullptr;
//    Book *tmpForPublishing = nullptr;
//
//    Book** books1 = new Book*[size]{};
//
//
//
//    cout << "Enter books" << endl;
//    for (int i = 0; i < size; ++i) {
//        cout << "Enter " << i + 1 << " book" << endl;
//        books1[i] = createBook();
//    }
//
//    for (int i = 0; i < size; ++i) {
//        books1[i]->bookInfo();
//        cout << endl;
//    }
//
//
//    do {
//        cout << "1.Redact  books" << endl;
//        cout << "2.Show all books" << endl;
//        cout << "3.Search books by author" << endl;
//        cout << "4.Search books by name" << endl;
//        cout << "5.Sort books by name" << endl;
//        cout << "6.Search books by author" << endl;
//        cout << "7.Search books by publishing" << endl;
//        cout << "8.Stop" << endl;
//        cin >> choice;
//
//        switch (choice) {
//            case 1:
//            {
//                int index = 0;
//                char* nameNew = new char[20]{};
//                char* authorNew = new char[20]{};
//                char* publishingNew = new char[20]{};
//
//                cout << "Enter book number for edit: ";
//                cin >> index;
//
//                books1[index-1]->bookInfo();
//
//                cin.ignore();
//                cout << "Enter books new name: ";
//                cin.getline(nameNew,21);
//
//                cout << "Enter book new author: ";
//                cin.getline(authorNew,21);
//
//                cout << "Enter book new publishing: ";
//                cin.getline(publishingNew, 21);
//
//                books1[index-1]->name = nameNew;
//                books1[index-1]->author = authorNew;
//                books1[index-1]->publishing = publishingNew;
//
//                cout << endl;
//
//                for (int i = 0; i < size; ++i) {
//                    books1[i]->bookInfo();
//                    cout << endl;
//                }
//                break;
//            }
//
//            case 2:
//                for (int i = 0; i < size; ++i) {
//                    books1[i]->bookInfo();
//                    cout << endl;
//                }
//                break;
//
//
//            case 3:
//            {
//                char* authorForSearch = new char[20]{};
//
//                cin.ignore();
//                cout << "Enter book author for search: ";
//                cin.getline(authorForSearch,21);
//
//                for (int i = 0; i < size; ++i) {
//                    int j = 0;
//                    while(books1[i]->author[j] != '\0' && authorForSearch[j] != '\0')
//                    {
//                        if (books1[i]->author[j] != authorForSearch[j])
//                            break;
//                        j++;
//                    }
//                    if (books1[i]->author[j] == '\0' && authorForSearch[j] == '\0')
//                    {
//                        books1[i]->bookInfo();
//                        cout << endl;
//                    }
//                }
//                delete[] authorForSearch;
//                break;
//            }
//
//            case 4:
//            {
//                char* nameForSearch = new char[20]{};
//
//                cin.ignore();
//                cout << "Enter book name for search: ";
//                cin.getline(nameForSearch,21);
//
//                for (int i = 0; i < size; ++i) {
//                    int j = 0;
//                    while(books1[i]->name[j] != '\0' && nameForSearch[j] != '\0')
//                    {
//                        if (books1[i]->name[j] != nameForSearch[j])
//                            break;
//                        j++;
//                    }
//                    if (books1[i]->name[j] == '\0' && nameForSearch[j] == '\0')
//                    {
//                        books1[i]->bookInfo();
//                        cout << endl;
//                    }
//                }
//                delete[] nameForSearch;
//                break;
//            }
//
//            case 5:
//
//                for (int i = 0; i < size-1; ++i) {
//                    for (int j = 0; j < size-i-1; ++j) {
//                        if ((int)*books1[j]->name > (int)*books1[j+1]->name)
//                        {
//                            tmpForName = books1[j];
//                            books1[j] = books1[j+1];
//                            books1[j+1] = tmpForName;
//                         }
//                    }
//                }
//                cout << endl;
//                break;
//
//            case 6:
//
//                for (int i = 0; i < size-1; ++i) {
//                    for (int j = 0; j < size-i-1; ++j) {
//                        if ((int)*books1[j]->author > (int)*books1[j+1]->author)
//                        {
//                            tmpForAuthor = books1[j];
//                            books1[j] = books1[j+1];
//                            books1[j+1] = tmpForAuthor;
//                        }
//                    }
//                }
//                cout << endl;
//                break;
//
//            case 7:
//                for (int i = 0; i < size-1; ++i) {
//                    for (int j = 0; j < size-i-1; ++j) {
//                        if ((int)*books1[j]->publishing > (int)*books1[j+1]->publishing)
//                        {
//                            tmpForPublishing = books1[j];
//                            books1[j] = books1[j+1];
//                            books1[j+1] = tmpForPublishing;
//                        }
//                    }
//                }
//                cout << endl;
//                break;
//        }
//    }while(choice != 8);
//
//
//    delete[] books1;
//    delete[] tmpForName;
//    delete[] tmpForAuthor;
//    delete[] tmpForPublishing;
//
//
//    return 0;
//}
