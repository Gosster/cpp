#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    char koniec;

    do{

    int wybor;
    cout << "Obliczam 1-suma, 2-dlugosc, 3-iloczyn skalarny: ";
    cin >> wybor;


    if (wybor==1){
        float wektor[2];
        cout << "Podaj wspolrzedna wektora: ";
        cin >> wektor[0];
        cout << "Podaj wspolrzedna wektora: ";
        cin >> wektor[1];

        cout << "Suma wektorow wynosi: " << wektor[0]+wektor[1] << endl;


    }
    else if(wybor==2){
        float wektora[2], wektorb[2];

        cout << "Podaj wspolrzedna wektora a: ";
        cin >> wektora[0];
        cout << "Podaj wspolrzedna wektora a: ";
        cin >> wektora[1];


        cout << "Podaj wspolrzedna wektora b: ";
        cin >> wektorb[0];
        cout << "Podaj wspolrzedna wektora b: ";
        cin >> wektorb[1];

        float wektorasuma = wektora[0]+wektora[1];
        float wektorbsuma = wektorb[0]+wektorb[1];

        float pitagoras = sqrt((wektorasuma*wektorasuma)+(wektorbsuma*wektorbsuma));

        cout << pitagoras << endl;

    }
    else if(wybor==3){
        float wektora[2], wektorb[2];

        cout << "Podaj wspolrzedna wektora a: ";
        cin >> wektora[0];
        cout << "Podaj wspolrzedna wektora a: ";
        cin >> wektora[1];


        cout << "Podaj wspolrzedna wektora b: ";
        cin >> wektorb[0];
        cout << "Podaj wspolrzedna wektora b: ";
        cin >> wektorb[1];

        float iloczynskalarny = wektora[0]*wektorb[0]+wektora[1]*wektorb[1];

        cout << "Iloczyn skalarny wynosi: " << iloczynskalarny << endl;
    }
    else{
        cout << "zly wybor\n";
    }

    cout << "Czy chcesz zakonczyc program? t-tak ";
    cin >> koniec;

    }while(koniec!='t');

    return 0;
}
