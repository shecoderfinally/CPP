#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Initializing variables
    int age = 19;
    double gpa = 2.7;
    string name = "Mike";

    // Defining pointer variables for all the variables we declared
    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    //m1- Printing out the value of memory address of the variables used in the pgm
    cout << "Age: " << pAge << endl;
    cout << "Gpa: " << pGpa << endl;
    cout << "Name: " << pName << endl;

    //m2- Printing out the value of memory address of the variables used in the pgm
    cout << "Age: " << &age << endl;
    cout << "Gpa: " << &gpa << endl;
    cout << "Name: " << &name << endl;

    //Dereferencing a pointer to access the value at the memory location
    cout << pAge << endl;
    cout << *pAge << endl;

    cout << pGpa << endl;
    cout << *pGpa << endl;

    cout << pName << endl;
    cout << *pName << endl;

    // gpa --> value stored in gpa
    // &gpa --> address of gpa variable
    // *&gpa --> value stored in gpa
    // &*&gpa --> address of gpa variable

    return 0;
}

