#include <iostream>
using namespace std;

class Library
{
public:
    string libraryName;

    void getLibrary()
    {
        cout << "Enter library name: ";
        cin >> libraryName;
    }
};

class Book : public Library
{
public:
    string bookName;

    void getBook()
    {
        cout << "Enter book name: ";
        cin >> bookName;
    }

    void displayBook()
    {
        cout << "\nBook Details" << endl;
        cout << "Library: " << libraryName << endl;
        cout << "Book: " << bookName << endl;
    }
};

class Magazine : public Library
{
public:
    string magazineName;

    void getMagazine()
    {
        cout << "Enter magazine name: ";
        cin >> magazineName;
    }

    void displayMagazine()
    {
        cout << "\nMagazine Details" << endl;
        cout << "Library: " << libraryName << endl;
        cout << "Magazine: " << magazineName << endl;
    }
};

int main()
{
    Book b;

    b.getLibrary();
    b.getBook();
    b.displayBook();

    Magazine m;

    m.getLibrary();
    m.getMagazine();
    m.displayMagazine();

    return 0;
}
