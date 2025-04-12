#include <iostream>
#include <iomanip>

using namespace std;

class Prostokat
{
private:
    float a, b, pole;

public:
    void czytaj_dane()
    {
        cout << "Podaj długość boku a: ";
        cin >> a;
        cout << "Podaj długość boku b: ";
        cin >> b;
    }

    void przetworz_dane()
    {
        pole = a * b;
    }

    void wyswietl_wynik()
    {
        cout << fixed << setprecision(2);
        cout << "Bok a: " << a << endl;
        cout << "Bok b: " << b << endl;
        cout << "Pole prostokąta: " << pole << endl;
    }
};

int main()
{
    Prostokat prostokat;

    prostokat.czytaj_dane();
    prostokat.przetworz_dane();
    prostokat.wyswietl_wynik();

    return 0;
}