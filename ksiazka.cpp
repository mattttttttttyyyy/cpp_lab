#include <iostream>

using namespace std;

class Ksiazka
{
private:
    string tytul;
    string autor;
    int rok;

public:
    Ksiazka()
    {
        cout << "Konstruktor domyślny." << endl;
    }

    Ksiazka(string tytul, string autor, int rok)
    {
        this->tytul = tytul;
        this->autor = autor;
        this->rok = rok;
        cout << "Konstruktor z parametrami." << endl;
    }

    ~Ksiazka()
    {
        cout << "Zniszczono książkę: " << tytul << endl;
    }

    void setTytul(string tytul)
    {
        this->tytul = tytul;
    }

    void setAutor(string autor)
    {
        this->autor = autor;
    }

    void setRok(int rok)
    {
        this->rok = rok;
    }

    string getTytul() const
    {
        return tytul;
    }

    string getAutor() const
    {
        return autor;
    }

    int getRok() const
    {
        return rok;
    }

    void wyswietlDane() const
    {
        cout << "Tytuł: " << tytul << endl;
        cout << "Autor: " << autor << endl;
        cout << "Rok wydania: " << rok << endl;
    }
};

int main()
{
    Ksiazka ksiazkaDomyslna;
    ksiazkaDomyslna.setTytul("Fajna domyslna");
    ksiazkaDomyslna.setAutor("fajny autor");
    ksiazkaDomyslna.setRok(0);

    cout << "Książka ustawiona z domyslnego konstruktora:" << endl;
    ksiazkaDomyslna.wyswietlDane();
    cout << endl;

    Ksiazka ksiazka("Jeszcze fajniejsza", "Najlepszy autor", 1954);
    cout << "Książka ustawiona w konstruktorze:" << endl;
    ksiazka.wyswietlDane();

    return 0;
}