#include <iostream>
#include <cmath>

using namespace std;

//Class: Template of what book is
class Book
{
    public:
        string title;
        string author;
        int pages;
};

int main()
{
    //Oject1: Instance of Book Class
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages= 500;

    cout << book1.title << endl;
    cout << book1.pages << endl;

    //Oject2: Instance of Book Class
    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 700;

    cout << book2.title << endl;
    cout << book2.pages << endl;

    //You can update values
    book2.title = "Hunger Games";
    cout << book2.title;
    return 0;
}

