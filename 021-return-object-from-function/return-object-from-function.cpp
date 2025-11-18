#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student func()
{
    Student Rahim(2, 10, 4.78);

    return Rahim;
}

int main()
{
    Student object = func();

    cout << object.cls << " " << object.roll << " " << object.gpa;

    return 0;
}