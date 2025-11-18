#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // Student(int r, int c, double g)
    // {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }

    // instead of keeping the parameters different names, like r, c, g, we can also keep same name, like roll, cls, gpa, but not not make the constructor confused, we have to use the, 'this->' keyword
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }

    // this 'this->' keyword is actually a pointer, which is like this -> (*this.) -> dereferencing
};

int main()
{
    int x;

    Student Karim(10, 10, 4.75);

    Student Rahim(02, 10, 4.25);

    cout << Karim.cls << " " << Karim.roll << " " << Karim.gpa << endl;
    cout << Rahim.cls << " " << Rahim.roll << " " << Rahim.gpa;

    return 0;
}