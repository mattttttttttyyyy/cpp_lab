#include <iostream>

using namespace std;

int main()
{
    char wybor;
    float bok1, bok2, pole;
    std::cout << "Wybierz figure: t (trojkat prostokatny), k (kwadrat), p (prostokat): ";
    cin >> wybor;
    switch (wybor)
    {
    case 't':
        cout << "Wybrano trojkat prostokatny" << endl;
        cout << "Podaj dlugosc podstawy: ";
        cin >> bok1;
        cout << "Podaj wysokosc: ";
        cin >> bok2;
        pole = (bok1 * bok2) / 2;
        cout << "Pole trojkata prostokatnego: " << pole << endl;
        break;
    case 'k':
        cout << "Wybrano kwadrat" << endl;
        cout << "Podaj bok: ";
        cin >> bok1;
        pole = bok1 * bok1;
        cout << "Pole kwadratu: " << pole << endl;
        break;
    case 'p':
        cout << "Wybrano prostokat" << endl;
        cout << "Podaj dlugosc boku 1: ";
        cin >> bok1;
        cout << "Podaj dlugosc boku 2: ";
        cin >> bok2;
        pole = bok1 * bok2;
        cout << "Pole prostokata: " << pole << endl;
        break;
    default:
        cout << "Nieznany wybor" << endl;
    }
    return 0;
}