#include <iostream>

using namespace std;

int main()
{
    int numberGrid[3][2] = {
        // 3 rows and 2 columns
        {1, 2},
        {3, 4},
        {5, 6},
    };

    cout << numberGrid[0][1] << endl;
    cout << numberGrid[2][0] << endl;

    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 2; j++)
        {
            /* code */
            cout << numberGrid[i][j];
        }
        cout << endl;
    }

    return 0;
}