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

int l1 = mnozeniemianownikow;
int l2 = mnozenielicznikow;
int l3 = dodawanielicznikow;

    while (l1 != l2) {
        if(l1 > l2)
            l1 = l1 - l2;
        else
            l2 = l2 - l1;
    }

    while (l1 != l3) {
        if(l1 > l3)
            l1 = l1 - l3;
        else
            l3 = l3 - l1;
    }

int licznika = mnozenielicznikow/l2;
int mianownika = mnozeniemianownikow/l2;
int licznikb = dodawanielicznikow/l3;
int mianownikb = mnozeniemianownikow/l3;


cout << licznik1 << "/" << mianownik1 << "*" << licznik2 << "/" << mianownik2 << "=" << licznika << "/" << mianownika << endl;
cout << licznik1 << "/" << mianownik1 << "+" << licznik2 << "/" << mianownik2 << "=" << licznikb << "/" << mianownikb << endl;

    return 0;
}
