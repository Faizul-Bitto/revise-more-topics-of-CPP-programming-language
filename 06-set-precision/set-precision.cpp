#include <iostream>
#include <iomanip>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    double d = 23.45676;

    cout << d << endl; // it will print = 23.4568 -> only four after decimal point. Rest will not be printed. If we want to print the rest, we need setprecision(), as there is no format specifier in C++

    cout << fixed << setprecision(7) << d << endl;

    return 0;
}