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
        //unparameterized constructor
        Book()
        {
            title="no title";
            author="no author";
            pages=0;
        }
        //parameterized constructor-1
        Book(string name)
        {
            cout << name << endl;
        }
        //parameterized constructor-2
        Book(string aTitle,string aAuthor, int aPages)
        {
            title=aTitle;
            author=aAuthor;
            pages=aPages;
        }
};

int main()
{
    //Object 1: Instance of Book Class
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages= 500;

    cout << book1.title << endl;
    cout << book1.pages << endl;

     cout << endl;

    //Object 2: Instance of Book Class
    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 700;

    cout << book2.title << endl;
    cout << book2.pages << endl;

     cout << endl;

    //Object 3: Instance of Book Class
    Book book3("Harry Potter");
    book3.title = "Harry Potter";
    book3.author = "JK Rowling";
    book3.pages= 500;

     cout << endl;

    // In object 1,2,3 we had to explicitly define the values of title,author and pages
    //Now we are going to automate that using the parameterized constructor-2.
    Book bookie("Stranger Things", "Dustin Henderson", 600);
    cout << bookie.title << endl;
    cout << bookie.author << endl;
    cout << bookie.pages << endl;

    cout << endl;

    Book bkc;
    cout << bkc.title << endl;
    cout << bkc.author << endl;
    cout << bkc.pages << endl;
    return 0;
}

