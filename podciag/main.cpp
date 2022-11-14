#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    const int rozmiar = 51;
    char ciag[rozmiar], podciag[rozmiar], wynik[rozmiar];

    cout << "Wylosowany ciag: ";

    for (int i = 0; i<rozmiar-1; i++){
        ciag[i] = (char) (97+rand() % 26);
        cout << ciag[i];
    }

    cout << endl << "Podaj ciag do wyszukania: ";

    cin >> podciag;



    for (int i=0; i<rozmiar-1; i++){
        if (ciag[i]==podciag[0]){

        }
    }

}
