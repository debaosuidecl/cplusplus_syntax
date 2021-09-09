#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    string op;

    // get user input

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+ / * -): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;
    if (op == "+")
    {
        cout << num1 + num2;
    }
    else if (op == "-")
    {
        cout << num1 - num2;
    }
    else if (op == "/")
    {
        cout << num1 / num2;
    }
    else if (op == "*")
    {
        cout << num1 * num2;
    }
    else
    {
        cout << "The operator does not exist";
    }
    cout << endl;
    return 0;
}
