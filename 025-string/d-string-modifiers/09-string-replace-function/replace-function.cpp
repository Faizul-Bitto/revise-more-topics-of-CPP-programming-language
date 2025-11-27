#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S = "Hello World";

    /*
        S.replace(Which index should be replaced, How many characters will be deleted?, "String to be replaced");
    */

    S.replace(6, 5, "Bangladesh!"); // Hello Bangladesh!

    cout << S << endl;

    string S2 = "Hello World!";

    S2.replace(6, 0, "Bangladesh! "); // Hello Bangladesh! World!

    cout << S2 << endl;

    return 0;
}