#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S = "Hello !";

    /*
        S.insert(Which index should be replaced, "String to be replaced");
    */

    S.insert(6, "Bitto"); // Hello Bitto!

    cout << S << endl;

    return 0;
}