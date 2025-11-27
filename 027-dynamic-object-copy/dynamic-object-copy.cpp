#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    string country;
    int jersey;

    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};

int main()
{
    Cricketer *Shakib = new Cricketer("Bangladesh", 75);
    Cricketer *Tamim = new Cricketer("Bangladesh", 100);

    // Tamim = Shakib; // This is wrong, cause, if we delete Shakib, then there will be garbage value

    /*
        So, we will manually copy the data :
            Tamim->country = Shakib->country;
            Tamim->jersey = Shakib->jersey;
    */

    // We can do it even easier, without doing it manually line by line ->
    *Tamim = *Shakib;

    delete Shakib;

    cout << Tamim->country << " " << Tamim->jersey;

    return 0;
}