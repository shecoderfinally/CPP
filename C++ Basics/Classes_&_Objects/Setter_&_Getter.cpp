#include <iostream>
#include <cmath>

using namespace std;

class Movie
{
    private:
        string rating;

    public:
        string title;
        string director;

        //parameterized constructor
        Movie(string aTitle, string aDirector, string aRating)
        {
            title = aTitle;

            director = aDirector;

            //rating = aRating;
            setRating(aRating);
        }

        void setRating(string aRating)
        {
            if(aRating == "PG" || aRating == "G" || aRating == "PG-13" || aRating =="R" || aRating == "NR")
            {
                rating=aRating;
            }
            else
            {
                cout << "Invalid Rating \nThus by default set to NR" << endl;
                rating="NR";
            }
        }

        string getRating()
        {
            return rating;
        }

};
int main()
{
    Movie avengers("The Avengers","Joss Whedon", "PG-13" );

    //This line will give us an error because the rating is now a private variable  so we cant access it so easily.
    //avengers.rating="Dog";
    avengers.setRating("Dog");

    cout << avengers.getRating();
    return 0;
}

