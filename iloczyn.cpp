#include <iostream>

using namespace std;

int main()
{
    int numOne, numTwo, iloczyn;

    cout << "Podaj pierwszą liczbę: ";
    cin >> numOne;

    cout << "Podaj drugą liczbę: ";
    cin >> numTwo;

    iloczyn = numOne * numTwo;

    cout << "Iloczyn liczb " << numOne << " i " << numTwo << " wynosi " << iloczyn << "." << endl;

    return 0;
}