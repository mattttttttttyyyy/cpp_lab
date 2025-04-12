#include <iostream>
#include <string>

using namespace std;

class Samochod
{
private:
    string marka;
    string model;
    int rocznik;

    static int licznik;

public:
    Samochod()
    {
        licznik++;
        cout << "Utworzono samochód domyślny." << endl;
    }

    Samochod(string marka, string model, int rocznik)
        : marka(marka), model(model), rocznik(rocznik)
    {
        licznik++;
        cout << "Utworzono samochód z parametrami. " << endl;
    }

    ~Samochod()
    {
        cout << "Zniszczono samochód: " << marka << " " << model << endl;
        licznik--;
    }

    void setMarka(string marka)
    {
        this->marka = marka;
    }

    void setModel(string model)
    {
        this->model = model;
    }

    void setRocznik(int rocznik)
    {
        this->rocznik = rocznik;
    }

    string getMarka() const
    {
        return marka;
    }

    string getModel() const
    {
        return model;
    }

    int getRocznik() const
    {
        return rocznik;
    }

    void wyswietlDane() const
    {
        cout << "Marka: " << marka << endl;
        cout << "Model: " << model << endl;
        cout << "Rocznik: " << rocznik << endl;
    }

    static int getLicznik()
    {
        return licznik;
    }
};

int Samochod::licznik = 0;

int main()
{
    Samochod samochodDomyslny;
    samochodDomyslny.setMarka("Toyota");
    samochodDomyslny.setModel("Yaris");
    samochodDomyslny.setRocznik(2021);
    cout << "Liczba utworzonych samochodów: " << Samochod::getLicznik() << endl;

    cout << "Samochód ustawiony setterami:" << endl;
    samochodDomyslny.wyswietlDane();
    cout << endl;

    Samochod samochod1("Toyota", "Corolla", 2010);
    samochod1.wyswietlDane();
    Samochod samochod2("BMW", "X5", 2020);
    samochod2.wyswietlDane();

    cout << endl;
    cout << "Liczba utworzonych samochodów: " << Samochod::getLicznik() << endl;

    return 0;
}