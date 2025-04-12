#include <iostream>
using namespace std;

class Sortowanie
{
public:
    int liczby[6];
    void czytaj_dane()
    {
        cout << "Podaj 6 liczb calkowitych:" << endl;
        for (int i = 0; i < 6; i++)
        {
            cout << "Liczba " << i + 1 << ": ";
            cin >> liczby[i];
        }
    }
    void przetworz_dane()
    {
        for (int i = 0; i < 6 - 1; i++)
        {
            for (int j = 0; j < 6 - i - 1; j++)
            {
                if (liczby[j] > liczby[j + 1])
                {
                    int temp = liczby[j];
                    liczby[j] = liczby[j + 1];
                    liczby[j + 1] = temp;
                }
            }
        }
    }
    void wyswietl_wynik()
    {
        cout << "Posortowane liczby: " << endl;
        for (int i = 0; i < 6; i++)
        {
            cout << liczby[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Sortowanie sortowanie;

    sortowanie.czytaj_dane();
    sortowanie.przetworz_dane();
    sortowanie.wyswietl_wynik();

    return 0;
}
