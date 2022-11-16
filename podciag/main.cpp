#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    const int rozmiar = 51;
    char ciag[rozmiar], podciag[rozmiar], wynik[rozmiar];

    cout << "Wylosowany ciag: \n";

    for (int i = 0; i<rozmiar-1; i++){
        ciag[i] = (char) (97+rand() % 26);
        cout << ciag[i];
    }

    cout << endl << "Podaj ciag do wyszukania: ";

    cin >> podciag;


    int podciagDlugosc = 0;

    for (int i = 0; i<rozmiar-1; i++){
        if (podciag[i] != NULL){
            podciagDlugosc++;
        }
    }

    if (podciagDlugosc>3){
    int poczatek = 0;
    int iloscSpacji = 0;

    for (int i=0; i<rozmiar-1; i++){
        if (ciag[i]==podciag[0]){
                poczatek = i;
            for (int j=0; j<podciagDlugosc; j++){
                if (ciag[i+j] == podciag[j] && ciag[i+j] != NULL){
                    wynik[j] = ciag[i+j];
                }
                else{
                    break;
                }
            }

        }
        else {
            iloscSpacji++;
        }

    }

    for (int i=0; i<poczatek; i++){
        cout << " ";
    }
    cout << podciag << endl;

    if (wynik == podciag){
    cout << "Jest taki ciag: " << podciag << ". Zaczyna sie na: " << poczatek << " miejscu.";
    }
    else{
        cout << "Nie ma takiego podciagu. ";
    }
    }
    else{
        cout << "Podales za maly ciag";
    }
}
