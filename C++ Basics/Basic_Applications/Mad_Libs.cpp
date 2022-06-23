#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Making a Mad Lib Program
    string color,pluralNoun,celebrity;
    cout << "Enter color: ";
    getline(cin, color);

    cout << "Enter pluralNoun :";
    getline(cin, pluralNoun);

    cout << "Enter celebrity: ";
    getline(cin,celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue " << endl;
    cout << " I love " << celebrity << endl;
    return 0;
}
