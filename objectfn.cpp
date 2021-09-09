#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    string major;
    double gpa;

    Student(string _name, string _major, double _gpa)
    {
        name = _name;
        major = _major;
        gpa = _gpa;
    };

    bool hasHonors()
    {
        if (gpa >= 3.5)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Student student_a("John", "Mechanical Engineer", 2.5);
    Student student_b("Sam", "Systems Engineer", 4.5);

    cout << student_a.hasHonors() << endl; // will return false (0 on cmd)
    cout << student_b.hasHonors() << endl; // will return true (1 on cmd)
    return 0;
}