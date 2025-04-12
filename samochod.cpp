#include <iostream>
#include <string>

using namespace std;

class Samochod
{
private:
    int rokProdukcji;
    string marka, model;
    double pojemnoscSilnika;

public:
    Samochod(int rokProdukcji, string marka, string model, double pojemnoscSilnika)
        : rokProdukcji(rokProdukcji), marka(marka), model(model), pojemnoscSilnika(pojemnoscSilnika) {};

    void wyswietlInformacje()
    {
        cout << "Rok produkcji: " << rokProdukcji << endl;
        cout << "Marka: " << marka << endl;
        cout << "Model: " << model << endl;
        cout << "Pojemnosc silnika: " << pojemnoscSilnika << endl;
    }
};
int main()
{
    Samochod samochod1(2025, "Toyota", "Corolla", 1.6);
    samochod1.wyswietlInformacje();

    Samochod samochod2(2010, "Skoda", "Fabia", 6.0);
    samochod2.wyswietlInformacje();

    Samochod samochod3(2012, "BMW", "X5", 11.0);
    samochod3.wyswietlInformacje();
}