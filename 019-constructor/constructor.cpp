#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
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