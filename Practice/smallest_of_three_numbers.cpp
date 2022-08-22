#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    float a,b,c;
    cout<<"Enter the 3 numbers: "<< endl;
    cin>>a>>b>>c;
    cout<<"smallest number: ";
    if(a<b)
    {
        if(a<c)
        {
            cout<<a;
        }
        else
        {
            cout<<c;
        }
    }
    else
    {
        if(b<c)
        {
            cout<<b;
        }
        else
        {
            cout<<c;
        }
    }
    return 0;
}
