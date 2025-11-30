#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student left, Student right)
{
    // if (left.marks > right.marks)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    return left.marks > right.marks;
}

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

    sort(A, (A + N), cmp);

    for (int i = 0; i < N; i++)
    {
        cout << A[i].name << " " << A[i].roll << " " << A[i].marks << endl;
    }

    return 0;
}