#include <iostream>

using namespace std;
int main()
{
    int secretnum = 7;

    int tries = 0;
    int TRYLIMIT = 3;
    int guess;

    do
    {
        if (tries == 2)
        {

            cout << "Enter a guess number, (you have " << TRYLIMIT - tries << " chance left) : ";
        }
        else
            cout << "Enter a guess number, (you have " << TRYLIMIT - tries << " chance(s) left) : ";
        cin >> guess;
        tries++;
    } while (secretnum != guess && tries < TRYLIMIT);

    if (secretnum != guess)
    {
        cout << "You couldn't guess it correctly. sorry";
    }
    else
        cout
            << " You have guessed the number correctly. you win" << endl;
    return 0;
}
