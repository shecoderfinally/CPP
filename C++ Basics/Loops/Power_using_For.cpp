#include <iostream>
#include <cmath>

using namespace std;
int getExponentValue(int num1,int num2)
{
    int result=1;
    for(int i=0;i<num2;i++)
    {
        result=result*num1;
    }
    return result;
}
int main()
{
    int num1,num2;
    cout << "Enter num1: " << endl;
    cin >> num1;

    cout << "Enter num2: " << endl;
    cin >> num2;

    cout << "The answer of " << num1 << "^" << num2 << " is : " << getExponentValue(num1,num2);
    return 0;
}

