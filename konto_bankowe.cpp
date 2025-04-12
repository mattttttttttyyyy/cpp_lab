#include <iostream>
using namespace std;

class KontoBankowe
{
private:
    string numerKonta, imie, nazwisko;
    double saldo;

public:
    KontoBankowe(string imie, string nazwisko, string numerKonta)
        : numerKonta(numerKonta), imie(imie), nazwisko(nazwisko), saldo(0.0) {};

    void wplac(double kwota)
    {
        if (kwota > 0)
        {
            saldo += kwota;
        }
    }

    void pokazSaldo()
    {
        cout << "Masz: " << saldo << endl;
    }

    void wyplac(double kwota)
    {
        if (kwota > 0 && kwota <= saldo)
        {
            saldo -= kwota;
            cout << "Wyplacono: " << kwota << endl;
            pokazSaldo();
        }
        else
        {
            cout << "Jesteś za biedny." << endl;
        }
    }
};

int main()
{
    KontoBankowe konto("Jan", "Kowalski", "1234567890");
    konto.wplac(100.0);
    konto.wyplac(50.0);
    konto.wyplac(70.0);
    return 0;
}