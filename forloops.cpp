#include <iostream>

using namespace std;

int main()
{

    int nums[] = {
        4,
        5,
        2,
        5,
        6,
    };

    cout << sizeof(nums) << sizeof(nums[0]);
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        /* code */
        cout << nums[i] << endl;
    }

    return 0;
}