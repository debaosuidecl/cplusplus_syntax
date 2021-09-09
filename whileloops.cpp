#include <iostream>

using namespace std;
int main()
{
    // int index = 1;

    // while (index <= 5)
    // {
    //     cout << index << endl;
    //     index++;
    // }
    int index = 6;

    do // will never run if index is greater than 6
    {
        cout << index << endl;
        index++;
    } while (index <= 5);

    // execute the code first before checking the condition - do while loop.
    // check the condition before executing the code - while loop

    return 0;
}
