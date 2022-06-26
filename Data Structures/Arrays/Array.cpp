#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    cout << "Enter the size of the array: " << endl;
    cin >> x;

    int arr[x];

    cout << "Enter the elements of the array: " << endl;

    for(int i=0; i<x ;i++)
    {
        cin >> arr[i];
    }

    cout << "You entered: ";

    for(int i=0; i<x; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

