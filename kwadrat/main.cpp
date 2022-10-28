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
            if (j==0 || i==0 || i==dlugosc-1 || j==wysokosc-1){
            cout << znak;
            }
        else{
            cout << " ";
        }
        }
        cout << endl;
    }

    cout << "Czy chcesz zakonczyc program? \n";

    cin >> koniec;

    }while (koniec !='t');


    return 0;
}
