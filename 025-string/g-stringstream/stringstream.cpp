#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin, S);
    cout << S << endl;

    stringstream ss(S);
    string word;

    // ss >> word;
    // cout << word << endl;

    // ss >> word;
    // cout << word << endl;

    // ss >> word;
    // cout << word << endl;

    while (ss >> word)
    {
        cout << word << endl;
    }

    return 0;
}