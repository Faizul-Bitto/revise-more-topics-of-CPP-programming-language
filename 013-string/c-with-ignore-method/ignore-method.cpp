#include <iostream>
#include <iomanip>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    cin.ignore(); // just ignore one line after one cin

    char s[101];
    cin.getline(s, 101);

    cout << x << endl
         << s << endl;

    return 0;
}