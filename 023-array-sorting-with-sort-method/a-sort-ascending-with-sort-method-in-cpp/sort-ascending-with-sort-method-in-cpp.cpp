#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    /*
        syntax:

            sort(starting, ending);
                 A       , A+4/5/6/etc.
                 A       , A+N
    */
    sort(A, A + N); // ascending order

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}