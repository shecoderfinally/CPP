#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float p,n,r,i;
    cout<<"\n Enter the principal amount: ";
    cin>>p;
    cout<<"\n Enter the number of years: ";
    cin>>n;
    cout<<"\n Enter the rate: ";
    cin>>r;
    i=(p*n*r)/100;
    cout<<"\n The interest is:"<<i;
    return 0;
}
