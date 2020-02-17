//SPOJ submission 23151878 (C++ 4.3.2) plaintext list.Status: AC, problem ETI06F1, contest SPOJPL.By ravruc(ravruc), 2019 - 01 - 30 20 : 15 : 43.
#include <iostream>
#include <cmath>

using namespace std;




int main()
{

    long double r, d, wynik;
    cin >> r >> d;
    d = d / 2.0;

    wynik = 3.141592654 * (r * r - d * d);

    cout.precision(2);
    cout << fixed;
    cout << wynik << endl;




    return 0;
}

