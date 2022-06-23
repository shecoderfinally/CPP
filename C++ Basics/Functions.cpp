#include <iostream>
#include <cmath>

using namespace std;

// unparameterized function
void sayHello()
{
    cout << "Hello User" << endl;
}

//parameterized function with single attribute
void sayHi(string name)
{
    cout << "Hi " << name << endl;
}

//parameterized function with multiple attributes
void sayHey(string name,int age)
{
    cout << "Hi " << name << " you are " << age << " years old " << endl;
}

int main()
{
    string name;
    cout << "Enter your name: " << endl;
    cin >> name;

    cout << "Top" << endl;

    //calling the sayHello function
    sayHello();

    //calling the sayHi function
    sayHi(name);

    //calling the sayHey function
    sayHey("Mike",28);
    cout << "Bottom" << endl;
    return 0;
}
