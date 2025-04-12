#include <iostream>
#include <iomanip>

using namespace std;

class Produkt
{
private:
    string nazwa;
    double cenaNetto;
    double stawkaVAT;

public:
    Produkt() : stawkaVAT(0.23) {}

    Produkt(string nazwa, double cenaNetto, int stawkaVAT)
        : nazwa(nazwa), cenaNetto(cenaNetto), stawkaVAT(stawkaVAT / 100.0) {}

    void setNazwa(string nazwa)
    {
        this->nazwa = nazwa;
    }

    void setCenaNetto(double cenaNetto)
    {
        this->cenaNetto = cenaNetto;
    }

    void setStawkaVAT(int stawkaVAT)
    {
        this->stawkaVAT = (stawkaVAT / 100.0);
    }
    string getNazwa() const
    {
        return nazwa;
    }

    double getCenaNetto() const
    {
        return cenaNetto;
    }

    double getStawkaVAT() const
    {
        return stawkaVAT * 100.0;
    }

    double obliczCeneBrutto() const
    {
        return cenaNetto + (cenaNetto * stawkaVAT);
    }

    void wyswietlDane() const
    {
        cout << fixed << setprecision(2);
        cout << "Nazwa produktu: " << nazwa << endl;
        cout << "Cena netto: " << cenaNetto << " zł" << endl;
        cout << "Stawka VAT: " << getStawkaVAT() << "%" << endl;
        cout << "Cena brutto: " << obliczCeneBrutto() << " zł" << endl;
    }
};

int main()
{
    Produkt produktDomyslny;
    produktDomyslny.setNazwa("Ksiazka");
    produktDomyslny.setCenaNetto(30.0);

    cout << "Produkt ustawiony manualnie:" << endl;
    produktDomyslny.wyswietlDane();
    cout << endl;

    Produkt produkt("Klawiatura", 100.0, 23);
    cout << "Produkt ustawiony przy tworzeniu:" << endl;
    produkt.wyswietlDane();

    Produkt jabklo("Jabłko", 3, 5);
    cout << "Produkt ustawiony przy tworzeniu:" << endl;
    jabklo.wyswietlDane();

    return 0;
}