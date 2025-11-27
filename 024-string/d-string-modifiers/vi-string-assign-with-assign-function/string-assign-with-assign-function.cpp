#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S1 = "Hello";

    string S2 = "Gello";

    S1.assign(S2);

    cout << S1 << endl;

    S1.assign("Hi");

    cout << S1;

    return 0;
}