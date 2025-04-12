// Ćwiczenie 7.1
// Napisz zgodnie z zasadami programowania obiektowego program, który w tablicy 10×10 umieszcza losowo na przekątnej liczby od 0 do 9, a poza nią zera. Dodatkowo oblicza on sumę liczb znajdujących się na przekątnej. Klasa powinna zawierać trzy metody:
// > czytaj_dane() — umieszcza dane w tablicy;
// > przetworz_dane() — oblicza i wyświetla sumę liczb znajdujących
// się na przekątnej;
// > wyswietl_wynik() — pokazuje zawartość tablicy na ekranie monitora.

#include <iostream>
#include <iomanip>
#include <random>

using namespace std;
const int rozmiar = 10;
int macierz[rozmiar][rozmiar];
class matrix // definicja klasy matrix
{
public:
    void czytaj_dane(int macierz[rozmiar][rozmiar],
                     int rozmiar);
    void przetworz_dane(int macierz[rozmiar][rozmiar], int rozmiar);
    void wyswietl_wynik(int macierz[rozmiar][rozmiar], int rozmiar);
};
void matrix::czytaj_dane(int tablica[rozmiar][rozmiar], int rozmiar)
{
    int i, j;
    random_device rd;                      // uruchomienie generatora liczb pseudolosowych
    mt19937 gen(rd());                     // o nazwie Mersenne Twister
    uniform_int_distribution<> dist(0, 9); // zawężenie generowania liczb pseudolosowych do przedziału (0,9).

    for (i = 0; i < rozmiar; i++)
    {
        for (j = 0; j < rozmiar; j++)
        {
            if (i == j)
                tablica[i][j] = dist(gen);
            else
                tablica[i][j] = 0;
        }
    }
}
void matrix::przetworz_dane(int tablica[rozmiar][rozmiar], int rozmiar)
{
    int i, suma = 0;

    for (i = 0; i < rozmiar; i++)
    {
        suma = suma + tablica[i][i];
    }
    cout << "Suma elementów na przekątnej wynosi " << suma << "." << endl;
}

void matrix::wyswietl_wynik(int tablica[rozmiar][rozmiar], int rozmiar)
{

    int i, j;

    cout << endl;
    cout << "Zawartość tablicy:" << endl;
    cout << endl;

    for (i = 0; i < rozmiar; i++)
    {
        for (j = 0; j < rozmiar; j++)
        {
            cout << tablica[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int tablica[rozmiar][rozmiar];
    matrix matrix1; // utworzenie obiektu matrix1

    matrix1.czytaj_dane(tablica, rozmiar);
    matrix1.przetworz_dane(tablica, rozmiar);
    matrix1.wyswietl_wynik(tablica, rozmiar);

    return 0;
}