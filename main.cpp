#include <iostream>
#include <cmath>

using namespace std;
void sayHi(string name, int age); // intialize a function
double cube(double num)
{
    return num * num * num; // tells c++ we are done executing code
    cout << "hello";        // will never be reached;
    // double result = num * num * num;
    // return result;
}
int getMax(int num1, int num2, int num3)
{
    int result;

    // if (num1 > num2)
    // {
    //     result = num1;
    // }
    // else if (num2 > num1)
    // {
    //     result = num2;
    // }
    // else
    // {
    //     result = num1;
    // }
    // if 3 numbers

    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
    return result;
}
int main()
{

    // cout << "   /|" << endl;
    // cout << "  / |" << endl;
    // cout << " /  |" << endl;
    // cout << "/___|" << endl;

    /* Variables */

    // //string
    // string characterName;
    // //integer
    // int age;

    // characterName = "Deba";
    // age = 25;
    // cout << "There was once a man named " << characterName << endl;
    // characterName = "Mike";
    // cout << characterName << " loved eba" << endl;
    // cout << "He is  " << age << " years old" << endl;

    /* DATA TYPES*/
    //     // character: allows us to save one single character in single quotes
    //     char grade = 'A';

    //     // string: to store more than one characer
    //     string phrase = "I love my self";

    //     // numbers: int float and double. double can store more decimal points than a float. use double as a beginner
    //     int age = 50;
    //     double gpa = 2.3;
    //     // boolean
    //     bool isMarried = true; // or false

    //     cout << 4.5 << endl ;// constants

    //    //    when making a variable you have to DECLARE THE DATA TYPE

    // /*Working with strings (plain text)*/

    // string phrase = "Degraphe";
    // cout << "Hello my friend\n"
    //      << phrase << "\n"; // instead of endl

    // // string functions
    // // length function
    // cout << phrase.length() << endl;
    // // accesing single characters in a string. 0  based.
    // cout << phrase[0] << endl;
    // phrase[0] = 'B';

    // // find a character in a string:

    // cout << phrase.find("phe", 0) << endl; // the find function first arg: the string you are looking for, second arg: the index it starts from if foujnd
    // cout << phrase.substr(2, 3) << endl;   // cut subsection of string like javascript
    // // cout << phrase.find_last_not_of() << endl;
    // cout << phrase << endl;

    /* Working with numbers*/

    // cout << 40 + 98;      // addition
    // cout << 4 + 5 * 10;   // BODMAS; 5 * 10 FIRST THEN PLUS 4 GIVE 54
    // cout << (4 + 5) * 10; // BODMAS; BRACKET FIRST
    // cout << 40 - 98;      // substraction
    // cout << 10 % 3;       // give us the remainder of 10/3
    // int wnum = 5;
    // double dnum = 5.5;
    // // wnum++; // add1
    // // wnum--; //sub 1
    // // wnum += 8;
    // // wnum -= 3;
    // // cout << wnum;
    // // any time we do math with a double and an integer, we get a decimal back;
    // cout << wnum * dnum << endl;

    // cout << 10 / 3; // we get an integer 3 back. if we do math between 2 or more integers we always get an integer back. so to be precise use a double to do your math
    // // if ur answer could be a decimal

    // math func

    // cout << pow(2, 5) << endl; // 2 raised to 5
    // cout << sqrt(36) << endl;  // square root

    // cout << round(4.3) << endl; // return rounded number according to normal rounding rules

    // cout << ceil(3.5) << endl;  // round number to highest whole number
    // cout << floor(3.4) << endl; // round number to lowest whole number

    // cout << fmax(3,10) << endl; // tell us which was the bigger number
    // cout << fmin(3,10) << endl; // tell us which was the smallest number

    /*Getting user input*/

    // int age;
    // // if we want to get a string it's different, we use getline instead
    // string name;

    // cout << "Enter your name: ";
    // getline(cin, name);
    // cout << "Enter your age: ";
    // cin >> age;

    // cout << "Hello " << name << " You must be " << age << " years old" << endl;

    // /*CREATING A BASIC CALCULATOR*/

    // double num1, num2;
    // cout << "Enter first number: ";

    // cin >> num1;
    // cout << "Enter Second number: ";

    // cin >> num2;

    // cout << "The sum of these numbers is: " << num1 + num2 << endl;

    /*CREATING A madlibs game*/

    // string color, pluralNoun, celebrity;
    // cout << "enter a color: ";
    // getline(cin, color);
    // cout << "enter a plural noun: ";
    // getline(cin, pluralNoun);
    // cout << "enter a celebrity: ";
    // getline(cin, celebrity);
    // cout << "Roses are " << color << endl;
    // cout << pluralNoun << " are blue " << endl;
    // cout << "I love " << celebrity << endl;

    // /*arrays*/

    // int luckyNums[] = {4, 8, 15, 16, 23, 42}; // first element in an array is in position 0
    // int luckyNums2[20]; // I want to be able to store 20 elements here

    // cout << luckyNums[2];

    /*functions */

    // sayHi("Deba", 34);
    // sayHi("clem", 24);
    // sayHi("jessica", 14);

    // with return

    // double answer = cube(5.0);

    // cout << answer << endl;

    /*IF STATEMENT*/ // checking conditions and executing code based on whether or not conditinos are met

    // bool isMale = true;
    // bool isTall = false;
    // if (isMale || isTall) // at leastone of them needs to be true
    // {
    //     cout << "I am male or tall" << endl;
    // }
    // else
    // {
    //     cout << "You are not male and not tall" << endl;
    // }
    // if (isMale && isTall) // both of them need to be true
    // {
    //     cout << "I am male and tall" << endl;
    // }
    // else
    // {
    //     cout << "You are not male and not tall" << endl;
    // }

    // if (isMale && isTall)
    // {
    //     cout << "tall male";
    // }
    // else if (isMale && !isTall)
    // {
    //     cout << "short male";
    // }
    // else if (!isMale && isTall)
    // {
    //     cout << "tall female";
    // }
    // else
    // {
    //     cout << "You are not male and you are not tall";
    // }
    // USING COMPARISONS
    cout << getMax(2, 50, 6);
    return 0;
}
void sayHi(string name, int age)
{
    cout << "Hello " << name << "You are " << age << " years old" << endl;
}