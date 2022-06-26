#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int n;
   cout << "Enter the size of the array : " << endl;
   cin >> n;

   int arr[n];
   cout << "Enter the elements of the array: " << endl;

   for(int i=0;i<n;i++)
   {
       cin >> arr[i];
   }

    cout << "You entered: " << endl;
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Sorting the given elements: " << endl;

    int pos=-1;
    int minno;
    int j;
    for(int i=0;i<n-1;i++)
    {
        for(j=i+1; j < n; j++)
        {
            if(arr[j] <arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

