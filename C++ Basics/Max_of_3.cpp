#include <iostream>
#include <cmath>

using namespace std;

int max(int num1, int num2, int num3)
{
    int result;
    if(num1 >= num2 && num1 >= num3)
    {
        result=num1;
    }
    else if(num2 >= num1 && num2 >= num3)
    {
        result=num2;
    }
    else
    {
        result=num3;
    }
    return result;
}
int main()
{
    int num1,num2,num3;

    cout << "Enter num1: " << endl;
    cin >> num1;

    cout << "Enter num2: " << endl;
    cin >> num2;

    cout << "Enter num3: " << endl;
    cin >> num3;

    cout << "The maximum between " << num1 << " and " << num2 << " and " << num3 << " is " << max(num1,num2,num3);

    return 0;
}

