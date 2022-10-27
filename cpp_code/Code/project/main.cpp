#include <iostream>

using namespace std;

int main()
{
    char koniec, znak;
    do {

    cout << "Podaj znak: ";

    cin  >> znak;

    int dlugosc;

    cout << "Podaj dlugosc:";
    cin >> dlugosc;

    int wysokosc;

    cout << "Podaj wysokosc:";
    cin >> wysokosc;

    for (int i=0; i<dlugosc; i++){
        for (int j=0; j<wysokosc; j++){
            cout << znak;
        }
        cout << endl;
    }

    cout << "Czy chcesz zakonczyc program? \n";

    cin >> koniec;

    }while (koniec !='t');


    return 0;
}
