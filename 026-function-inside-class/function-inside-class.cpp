#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mathMarks;
    int englishMarks;

    Student(string name, int roll, int mathMarks, int englishMarks)
    {
        this->name = name;
        this->roll = roll;
        this->mathMarks = mathMarks;
        this->englishMarks = englishMarks;
    }

    void hi()
    {
        cout << "Hi from " << name << endl;
    }

    void totalMarks()
    {
        cout << "Total marks of " << name << "is : " << mathMarks + englishMarks << endl;
    }
};

int main()
{
    Student Sakib("Sakib Ahmed", 10, 90, 93);
    cout << Sakib.name << " " << Sakib.roll << endl;
    Sakib.hi();
    Sakib.totalMarks();

    Student Rakib("Rakib Ahmed", 10, 97, 95);
    cout << Rakib.name << " " << Rakib.roll << endl;
    Rakib.hi();
    Rakib.totalMarks();

    return 0;
}