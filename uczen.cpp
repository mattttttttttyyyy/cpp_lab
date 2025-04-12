#include <iostream>
using namespace std;

class Uczen
{
private:
    string imie, nazwisko;
    int numerIndeksu;
    double sredniaOcena;

public:
    void setImie(string imie)
    {
        this->imie = imie;
    }
    void setNazwisko(string nazwisko)
    {
        this->nazwisko = nazwisko;
    }
    void setNumerIndeksu(int numerIndeksu)
    {
        this->numerIndeksu = numerIndeksu;
    }
    void setSredniaOcena(double sredniaOcena)
    {
        this->sredniaOcena = sredniaOcena;
        sprawdzSrednia();
    }
    string getImie()
    {
        return imie;
    }
    string getNazwisko()
    {
        return nazwisko;
    }
    int getNumerIndeksu()
    {
        return numerIndeksu;
    }
    double getSredniaOcena()
    {
        return sredniaOcena;
    }

    void sprawdzSrednia()
    {
        cout << "Uczeń " << imie << " " << nazwisko << " ma średnią ocenę: " << sredniaOcena << endl;
        if (sredniaOcena > 5.0)
        {
            cout << "Srednia jest nieprawidlowa. Podaj jeszcze raz: ";
            cin >> sredniaOcena;
            setSredniaOcena(sredniaOcena);
        }
        else if (sredniaOcena >= 2.0)
        {
            cout << "Uczeń zdał!" << endl;
        }
        else if (sredniaOcena < 1.0)
        {
            cout << "Srednia nie moze być nizsza niz 1! Podaj jeszcze raz: ";
            cin >> sredniaOcena;
            setSredniaOcena(sredniaOcena);
        }
        else
        {
            cout << "Uczeń nie zdał!" << endl;
        }
    }
};

int main()
{
    Uczen uczen1;
    uczen1.setImie("Wiktor");
    uczen1.setNazwisko("Jeleń");
    uczen1.setNumerIndeksu(123456);

    cout << "Podaj średnią dla " << uczen1.getImie() << " " << uczen1.getNazwisko() << ": ";
    double srednia;
    cin >> srednia;
    uczen1.setSredniaOcena(srednia);

    cout << "Imie: " << uczen1.getImie() << endl;
    cout << "Nazwisko: " << uczen1.getNazwisko() << endl;
    cout << "Numer indeksu: " << uczen1.getNumerIndeksu() << endl;

    return 0;
}