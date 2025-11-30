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
        cin.ignore();
        getline(cin, A[i].name);
        cin >> A[i].roll >> A[i].marks;
    }

    for (int i = 0; i < N; i++)
    {
        cout << A[i].name << " " << A[i].roll << " " << A[i].marks << endl;
    }

    return 0;
}