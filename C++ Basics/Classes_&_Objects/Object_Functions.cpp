#include <iostream>
#include <cmath>

using namespace std;

class Student
{
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa)
        {
            name=aName;
            major=aMajor;
            gpa=aGpa;
        }
        //defining a function to determine whether given function is on the honor-roll or not
        bool hasHonors()
        {
            if(gpa >= 3.5)
            {
                return true;
            }
            return false;
        }
};
int main()
{
    Student student1("Jim", "Business",2.4);
    Student student2("Pam","Art",3.6);
    //calling the hasHonors function to determine whether student-1 and student-2 have honors or not
    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;

    return 0;
}

