#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Here while loop will get executed till condition remains true
    int index =1;
    while(index <=5 )
    {
        cout << index << endl;
        index++;
    }
    
    //here while loop will never get executed as condition is never true
    index =6;
    while(index <=5 )
    {
        cout << index << endl;
        index++;
    }
    return 0;
}

