#include <iostream>
using namespace std;

class Osoba
{
private:
    string imie, nazwisko, ulica;

public:
    void czytaj_dane()
    {
        cout << "Cześć! Przedstaw się." << endl;
        cout << "Podaj imię: ";
        getline(cin, imie);
        cout << "Podaj nazwisko: ";
        getline(cin, nazwisko);
        cout << "Podaj ulicę: ";
        getline(cin, ulica);
    }

    void wyswietl_dane()
    {
        cout << "Miło cię poznać, " << imie << " " << nazwisko << "!" << endl;
        cout << "Mieszkasz na: " << ulica << endl;
    }
};

int main()
{
    int liczbaOsob;
    cout << "Ilu was jest? ";
    cin >> liczbaOsob;
    cin.ignore();
    Osoba osoby[liczbaOsob];
    for (int i = 0; i < liczbaOsob; i++)
    {
        cout << "Osoba " << i + 1 << ":" << endl;
        Osoba osoba;
        osoba.czytaj_dane();
        osoby[i] = osoba;
    }
    cout << endl;
    for (int i = 0; i < liczbaOsob; i++)
    {
        osoby[i].wyswietl_dane();
        cout << endl;
    }
    return 0;
}