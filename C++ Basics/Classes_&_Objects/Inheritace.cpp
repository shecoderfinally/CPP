#include <iostream>
#include <cmath>

using namespace std;
//Super Class
class Chef
{
    public:
        void makeChicken()
        {
            cout << "The chef makes Chicken" << endl;
        }
        void makeSalad()
        {
            cout << "The chef makes Salad" << endl;
        }
        void makeSpecialDish()
        {
            cout << "The chef makes Bbq Ribs" << endl;
        }
};

//Sub Class
class ItalianChef : public Chef
{
    public:
        void makePasta()
        {
            cout << "The chef makes Pasta" << endl;
        }
        void makePizza()
        {
            cout << "The chef makes Pizza" << endl;
        }
        //Overriding
        // The Italian chef has a different special dish then the regular chef
        void makeSpecialDish()
        {
            cout << "The chef makes Tiramisu" << endl;
        }


};
int main()
{
    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    cout << endl;

    ItalianChef ichef;
    ichef.makeChicken();
    ichef.makePasta();
    ichef.makeSpecialDish();
    return 0;
}

