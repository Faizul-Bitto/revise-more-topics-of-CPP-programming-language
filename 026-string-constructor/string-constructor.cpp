#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S = "Hello";

    // we can assign value just like variable in string like this like object and class ->
    string S1("Hello");
    cout << S1 << endl;

    // resized
    string S2("Hello World!", 5); // -> first 5 characters will be kept, rest will be omitted
    cout << S2 << endl;

    // resized
    string S3 = "Hello World!";
    string S4(S3, 6); // -> first 6 characters will be omitted
    cout << S4 << endl;

    // set default characters with size
    string S5(10, 'A'); // -> string S5 of 10 characters with 19 'A'
    cout << S5 << endl;

    return 0;
}