#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    char c = 'A';

    cout << int(c) << endl; // type casting -> character to int -> which means, 'c' is holding character 'A', and when its casted to integer value, it's converted to ASCII value and printing as ASCII value. So, data type conversion.

    int A = 65;

    cout << char(A) << endl; // will print A, just like same, int (ASCII) to char

    return 0;
}