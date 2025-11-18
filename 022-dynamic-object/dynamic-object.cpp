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

int main()
{
    // int x;
    Student Karim(10, 10, 4.75);

    // int *p = new int;
    Student *Rahim = new Student(02, 10, 5.00);

    cout << Karim.cls << " " << Karim.roll << " " << Karim.gpa << endl;
    cout << Rahim->cls << " " << Rahim->roll << " " << Rahim->gpa;

    return 0;
}