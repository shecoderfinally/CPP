#include <iostream>

using namespace std;

int main()
{
    string phrase= "Giraffe Academy";
    // Computing Length of String
    cout << phrase.length() << endl;
    // Accesing first character of String
    cout << phrase[0] << endl;
    // Modifying a specific character of a String
    phrase[0]='B';
    cout << phrase <<endl;
    // To find whether there is a specific character or number in the string
    cout << phrase.find("Academy",9) << endl;
    //To compute substring of given string
    cout << phrase.substr(8,3) << endl;
    //Storing the value of substring in a new variable
    string substring1= phrase.substr(8,3);
    cout << substring1 << endl;
    return 0;
}
