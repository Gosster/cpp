#include <iostream>
#include <cmath>

using namespace std;

int main()
{
int licznik1, mianownik1, licznik2, mianownik2;

cout << "Podaj pierwszy licznik: ";
cin >> licznik1;

cout << "Podaj pierwszy mianownik: ";
cin >> mianownik1;

cout << "Podaj drugi licznik: ";
cin >> licznik2;

cout << "Podaj drugi mianownik: ";
cin >> mianownik2;

int pomlicznik1 = licznik1 * mianownik2;
int pomlicznik2 = licznik2 * mianownik1;

int mnozenielicznikow = licznik1* licznik2;
int mnozeniemianownikow = mianownik1 * mianownik2;

int dodawanielicznikow = pomlicznik1 + pomlicznik2;

cout << licznik1 << "/" << mianownik1 << "*" << licznik2 << "/" << mianownik2 << "=" << mnozenielicznikow << "/" << mnozeniemianownikow << endl;
cout << licznik1 << "/" << mianownik1 << "+" << licznik2 << "/" << mianownik2 << "=" << dodawanielicznikow << "/" << mnozeniemianownikow << endl;

    return 0;
}
