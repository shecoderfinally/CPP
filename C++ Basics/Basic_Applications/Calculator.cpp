#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num1,num2;
    char op;

    cout << "Enter value of num1 : " << endl;
    cin >> num1;

    cout << "Enter value of num2 : " << endl;
    cin >> num2;
    //Printing the entered values of num1 and num2
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    cout << "Enter the operation you want to perform : " << endl;
    cin >> op;
    //For addition operation
    if(op == '+')
    {
       cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
    }
    //For subtraction operation
    else if( op == '-')
    {
        cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
    }
    //For multiplication operation
    else if( op == '*')
    {
        cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
    }
    //For division operation
    else if( op == '/')
    {
        double nums1=num1;
        double nums2=num2;

        cout << num1 << " / " << num2 << " = " << nums1/nums2 << endl;
    }
    //For remainder operation
    else if( op == '%')
    {
        cout << num1 << " % " << num2 << " = " << num1%num2 << endl;
    }
    //For invalid input
    else
    {
        cout << "Invalid Operation";
    }
    return 0;
}
