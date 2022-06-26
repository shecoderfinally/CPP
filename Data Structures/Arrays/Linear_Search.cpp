#include <iostream>
#include <cmath>

using namespace std;

int linearSearch(int arr[],int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of the array: "<< endl;
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array : " << endl;

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    cout << " You entered: " << endl;

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int key;
    cout << "Enter the key to be searched: " << endl;
    cin >> key;

    if(linearSearch(arr,n,key) == -1)
    {
        cout << "Sorry, the element is not present in the array." << endl;
    }
     else
    {
        cout << "The element " << key << " is present at pos " << linearSearch(arr,n,key) + 1 << endl;
    }

    return 0;
}

