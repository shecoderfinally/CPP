#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string name;
    char gender;
    int age;
    cout << "Enter name : ";
    getline(cin,name);

    cout << "Enter gender(M/F): ";
    cin >> gender;

    cout << "Enter age : ";
    cin >> age;

    cout << " Helloo!! You are " << name << " and you are a " << gender << " who is " << age << " years old.";
    return 0;
}
