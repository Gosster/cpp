#include <iostream>

using namespace std;

int main()
{
    char koniec;
    int wybor, wynik;

    do{
    cout << "Co chcesz obliczyc? 1-potega 2-silnia\n";
    cin >> wybor;

    if (wybor==1){

        int podstawa,wykladnik;

        cout << "Podaj podstawe: ";
        cin >> podstawa;

        cout << "Podaj wykladnik: ";
        cin >> wykladnik;

        wynik = 1;

        for (int i=0; i<wykladnik; i++){
            wynik *= podstawa;
        }

        cout << wynik << endl;
    }

    else if (wybor==2){

        int silnia;

        cout << "Podaj silnie: ";

        cin >> silnia;

        if (silnia>=13){
            cout << "Podana silnia jest za duza!\n";
        }
        else{

        wynik = 1;

        for(int i=1; i<=silnia; i++){
            wynik *=i;
        }

        cout << wynik << endl;
        }
    }
    else{
        cout << "Zly wybor\n";
    }

    cout << "Czy chcesz zakonczyc program? \n";
    cin >> koniec;
    }while (koniec !='t');

    return 0;
}
