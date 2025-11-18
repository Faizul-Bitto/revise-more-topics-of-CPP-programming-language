#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    int a;

    Student Sakib;
    Sakib.roll = 10;
    Sakib.gpa = 3.5;

    // keep name 'sakib' to 'temp', then copy to 'name', as directly we cannot assign the value to the object
    char temp[100] = "Sakib";
    strcpy(Sakib.name, temp);

    cout << Sakib.name << " " << Sakib.roll << " " << Sakib.gpa;

    return 0;
}