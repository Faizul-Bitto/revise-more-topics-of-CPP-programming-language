#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S1 = "Hello";

    S1.clear();

    cout << S1.empty() << endl; // 1 -> true , 0 -> false

    if (S1.empty() == true)
    {
        cout << "Empty";
    }
    else
    {
        cout << "Not Empty";
    }

    return 0;
}