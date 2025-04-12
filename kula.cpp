#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float promien, objetosc, pi = 3.14;

    cout << "Podaj promień: " << endl;
    cin >> promien;

    objetosc = (4.0 / 3.0) * pi * pow(promien, 3);

    cout << fixed << setprecision(2);
    cout << "Objętość kuli wynosi " << objetosc << "." << endl;

    return 0;
}