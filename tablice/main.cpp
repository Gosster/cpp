#include <iostream>

using namespace std;

int main()
{

char koniec;

do{
    const int rozmiar = 7;
    float tablica[rozmiar];
    float wynik = 0;
    for (int i=0; i<rozmiar; i++){
        cout << "Podaj liczbe " << i+1 << " = ";
        cin >> tablica[i];
    }

    int wybor;
    cout << "Obliczam 1- suma, 2- srednia \n";
    cin >> wybor;

    for (int i=0; i<rozmiar; i++){
        wynik += tablica[i];
    }

    if (wybor == 1){
    cout << "Wynik wynosi: " << wynik << endl;
    }
    else if (wybor == 2){
    float srednia = wynik/rozmiar;
    cout << "Srednia wynosi: " << srednia << endl;
    }else{
    cout << "Wybrales zla liczbe\n";
    }
    cout << "Czy chcesz zakonczyc program? t-tak ";
    cin >> koniec;
}while(koniec!='t');

    return 0;
}
