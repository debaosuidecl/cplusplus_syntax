#include <iostream>

using namespace std;

class Movies
{
private:
    string rating;

public:
    string name;
    string director;
    Movies(string _name, string _rating, string _director)
    {
        name = _name;
        setRating(_rating);
        director = _director;
    };

    string getRating()
    {
        return rating;
    }

    void setRating(string _rating)
    {
        string ratings[5] = {"PG-13", "R-16", "PG", "R", "NR"};
        bool exists = false;
        for (int i = 0; i < 5; i++)
        {
            if (ratings[i] == _rating)
            {
                exists = true;
                break;
            }
        }

        if (exists)
        {
            rating = _rating;
            cout << "setting rating because rating exists" << endl;
        }
        else
        {
            cout << "rating does not exist: " << _rating << endl;
            rating = "NR";
        }
    }
};

int main()
{
    Movies avengers("John", "PG-13", "Mechanical Engineer");
    avengers.setRating("R-16");
    avengers.setRating("R-18");

    cout << avengers.getRating() << endl;
    // cout << avengers.rating;
    // will return true (1 on cmd)
    return 0;
}