#include <iostream>
#include <cmath>

using namespace std;

string getday(int dayno)
{
    switch(dayno)
    {
    case 1:
        return "Monday";
        break;
    case 2:
        return "Tuesday";
        break;
    case 3:
        return "Wednesday";
        break;
    case 4:
        return "Thursday";
        break;
    case 5:
        return "Friday";
        break;
    case 6:
        return "Saturday";
        break;
    case 7:
        return "Sunday";
        break;
    default:
        return "Invalid Input";
    }
}
int main()
{
    int num1;
    cout << "Enter num: " << endl;
    cin >> num1;

    cout << "The corresponding day of the week is: " << getday(num1);
    return 0;
}

