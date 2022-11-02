#include <iostream>

using namespace std;

int main()
{

char koniec;
int pierwszaliczba, drugaliczba;

do{
    cout << "Podaj pierwsza liczbe: ";
    cin >> pierwszaliczba;
    cout << "Podaj druga liczbe: ";
    cin >> drugaliczba;

    int licznik = pierwszaliczba * drugaliczba;

    if (pierwszaliczba <= 0 || drugaliczba <= 0){
        cout << "Podales zle liczby\n";
    }else{

    while (pierwszaliczba != drugaliczba) {
        if(pierwszaliczba > drugaliczba)
            pierwszaliczba = pierwszaliczba - drugaliczba;
        else
            drugaliczba = drugaliczba - pierwszaliczba;
    }

    int nww = licznik/pierwszaliczba;

    cout << "Najwiekszy wspolny dzielnik: " << pierwszaliczba << endl;
    cout << "Najwieksza wspolna wielokrotnosc: " << nww << endl;
    }

    cout << "Czy chcesz zakonczyc program? t-tak: ";
    cin >> koniec;
}while (koniec != 't');

return 0;
}
