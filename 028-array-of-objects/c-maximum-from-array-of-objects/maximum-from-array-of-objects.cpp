#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int N;
    cin >> N;

    // int a[10];
    Student A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i].name >> A[i].roll >> A[i].marks;
    }

    // int maximum = INT_MIN;
    Student maximum;
    maximum.marks = INT_MIN;

    for (int i = 0; i < N; i++)
    {
        if (A[i].marks > maximum.marks)
        {
            maximum = A[i];
        }
    }

    cout << maximum.name << " " << maximum.roll << " " << maximum.marks;

    return 0;
}