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

    cout << "You entered: " << endl;

    for(int i=0; i<x; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int max_num = INT_MIN;
    int min_num = INT_MAX;

    for(int i=0;i<x;i++)
    {
        max_num = max(max_num,arr[i]);
        min_num = min(min_num,arr[i]);
    }

    cout << "The maximum number in the array is : " << max_num << endl;
    cout << "The minimum number in the array is : " << min_num << endl;

    return 0;
}

