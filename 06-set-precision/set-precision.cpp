#include <iostream>
#include <iomanip>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    double d1, d2, d3;

    // Reading input values
    cin >> d1 >> d2 >> d3;

    // Without setprecision - default precision (usually 4-6 digits)
    cout << "Without setprecision:" << endl;
    cout << d1 << endl;
    cout << d2 << endl;
    cout << d3 << endl;

    // With fixed and setprecision - controls decimal places
    cout << "\nWith fixed and setprecision(7):" << endl;
    cout << fixed << setprecision(7) << d1 << endl;
    cout << fixed << setprecision(7) << d2 << endl;
    cout << fixed << setprecision(7) << d3 << endl;

    return 0;
}