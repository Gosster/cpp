#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    const int rzedy = 7;
    const int kolumny = 8;
    int tablicaDwuwymiarowa[rzedy][kolumny], szukana;
    cout << "Losuje elementy tablicy A[" << rzedy << "][" << kolumny << "]\n";

    for (int i=0; i<rzedy; i++){
        for (int j=0; j<kolumny; j++){
            tablicaDwuwymiarowa[i][j]=rand()%10;
            cout << tablicaDwuwymiarowa[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Podaj elementy do wyszukania: ";
    cin >> szukana;

    for (int i=0; i<rzedy; i++){
        for (int j=0; j<kolumny; j++){
            if (tablicaDwuwymiarowa[i][j] != szukana){

            }
            else if (tablicaDwuwymiarowa[i][j]==szukana){
                cout << "A[" << i << "][" << j << "] = " << szukana << " ";
            }
            else{

            }
        }

    }

}
