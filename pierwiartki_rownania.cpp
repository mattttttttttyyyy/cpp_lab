#include <iostream>
#include <iomanip>

using namespace std;
class RownaniaKwadrat
{
public:
    double a, b, c, x1, x2;
    int delta;
    void czytaj_Dane()
    {
        cout << "Podaj a: ";
        cin >> a;
        if (a == 0)
        {
            cout << "A nie moze byc 0";
            exit(0);
        }
        cout << "Podaj b: ";
        cin >> b;
        cout << "Podaj c: ";
        cin >> c;
    }
    void prztworz_Dane()
    {
        delta = pow(b, 2) - 4 * a * c;
        int normalized_delta = delta;

        if (delta < 0)
        {
            normalized_delta = -1;
        }
        else if (delta > 1)
        {
            normalized_delta = 1;
        }

        switch (normalized_delta)
        {
        case -1:
            break;
        case 0:
            x1 = -b / (2 * a);
            break;
        case 1:
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            break;
        default:
            break;
        }
    }
    void wyswietl_wynik()
    {
        cout << "Delta: " << delta << endl;

        if (delta < 0)
        {
            cout << "Brak rozwiazan";
            return;
        }
        cout << fixed << setprecision(2);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
};
int main()
{
    RownaniaKwadrat r;
    r.czytaj_Dane();
    r.prztworz_Dane();
    r.wyswietl_wynik();
    return 0;
}