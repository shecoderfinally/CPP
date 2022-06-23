#include <iostream>
#include <cmath>

using namespace std;
int cubing(int num)
{
    return pow(num,3);
    //unreachable statement
    cout << "Hello";
}
int main()
{
    int num;
    cout << " Enter number: " << endl;
    cin >> num;
    cout<< "Given number : " << num << endl;
    cout << "The cube of the given number is " << cubing(num);
    return 0;
}

