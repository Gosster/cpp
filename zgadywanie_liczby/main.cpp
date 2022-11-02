#include <iostream>

using namespace std;

int main()
{
int zgadywana, strzal;
int liczbastrzalow = 0;

cout << "Podaj zgadywana liczbe: ";
cin >> zgadywana;
system("cls");

do {
cout << "Podaj swoj strzal: ";
    cin >> strzal;
    if (strzal == zgadywana){
        cout << "Brawo! Zgadles za: " << liczbastrzalow << " razem.\n";
    }
    else if (strzal > zgadywana){
        cout << "Podales za duza liczbe!\n";
    }
    else {
        cout << "Podales za mala liczbe!\n";
    }
    liczbastrzalow++;
}
while (strzal != zgadywana);


return 0;
}
