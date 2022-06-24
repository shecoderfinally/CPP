#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool isMale = true;
    bool isTall = false;
    if(isMale && isTall)
    {
        cout << "You are a tall male." << endl;
    }
    else if(isMale && !isTall)
    {
        cout << "You are a short male." << endl;
    }
    else if(!isMale && isTall)
    {
        cout << "You are tall but not a male." << endl;
    }
    else
    {
        cout << "You are not a male and not tall" << endl;
    }
    return 0;
}

