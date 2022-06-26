#include <iostream>
#include <cmath>

using namespace std;

int binarySearch(int arr[],int n,int key)
{
    int s=0;
    int e=n;
    while(s<=n)
    {
        int mid=(s+e)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << "You entered: " << endl;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int key;
    cout << "Enter the key to be searched: " << endl;
    cin >> key;

    if(binarySearch(arr,n,key) == -1)
    {
        cout << "Sorry, element not found." << endl;
    }
    else
    {
        cout << "Element found at " << binarySearch(arr,n,key) +1;
    }
    return 0;
}

