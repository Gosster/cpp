#include <iostream>

using namespace std;

void prostPelny(int dlugosc,int wysokosc, char znak){
    for (int i=0; i<dlugosc; i++){
        for (int j=0; j<wysokosc; j++){
            cout << znak;
        }
        cout << endl;
    }
}

void prostPusty(int dlugosc,int wysokosc, char znak){
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
}

int main()
{
    char koniec, znak;
    int wybor;
    do {

    cout << "Podaj znak: ";
    cin  >> znak;

    int dlugosc, wysokosc;

    cout << "Podaj dlugosc:";
    cin >> dlugosc;

    cout << "Podaj wysokosc:";
    cin >> wysokosc;

    cout << "Wypelniony prostakat - 1 czy pusty - 2: ";

    cin >> wybor;

    switch (wybor){

    case 1:

    prostPelny(wysokosc, dlugosc, znak);

    break;

    case 2:

    prostPusty(wysokosc,dlugosc, znak);

    break;

    default:
        cout << "Zly wybor.\n\n";
    }

    cout << "Czy chcesz zakonczyc program? \n";

    cin >> koniec;

    }while (koniec !='t');


    return 0;
}
