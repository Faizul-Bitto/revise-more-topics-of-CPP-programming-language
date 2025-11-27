#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    /*
        for (int i = 0; i < S.size(); i++)
        {
            cout << S[i] << endl;
        }
    */

    /*
        for (auto it = S.begin(); it < S.end(); it++)
        {
            cout << *it << endl;
        }
    */

    for (char C : S)
    {
        cout << C;
    }

    return 0;
}