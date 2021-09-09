#include <iostream>

using namespace std;

class Chef // chef is the super class
{
public:
    void makeChicken()
    {
        cout << "Chef is making a chicken" << endl;
    }
    void makeSalad()
    {
        cout << "Chef is making a salad" << endl;
    }
    void makeSpecialDish()
    {
        cout << "Chef is making a bbq ribs" << endl;
    }
};

class ItalianChef : public Chef // italian chef is the sub class
{
public:
    void makePasta()
    {
        cout << "Chef is making pasta" << endl;
    }

    void makeSpecialDish()
    {
        cout << "Chef is making a chicken parm" << endl;
    }
};
int main()
{

    Chef chef;

    ItalianChef italianchef;
    italianchef.makeChicken();
    italianchef.makePasta();

    chef.makeChicken();
    chef.makeSpecialDish();
    italianchef.makeSpecialDish();

    return 0;
}