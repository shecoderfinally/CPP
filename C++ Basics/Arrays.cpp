#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int luckyNums[] = {4,8,15,16,23,42};
    //accessing the first element in the array
    cout << luckyNums[0] << endl;
    //accessing the element 15
    cout << luckyNums[2] << endl;
    //modifying an element in the array
    cout << "before modification : " << luckyNums[3] << endl;
    luckyNums[3]=19;
    cout << "after modification : " << luckyNums[3] << endl;

    //As illustrated below we may create a array but at the beginning
    // we may not have all the values..we created array of size 10 but it has presently only 6 values
    int arr[10]={1,2,3,4,5,6};
    arr[7]=8;
    cout << arr[7] << endl;

    int array1[20];
    array1[4]=50;
    cout << "array1[4] : "<< array1[4];
    return 0;
}
