#include <iostream>

using namespace std;

int main()
{
    const int rozmiar = 3;
    int macierz [rozmiar][rozmiar], wynik;
    for (int i=0; i<rozmiar; i++){
        for (int j = 0; j<rozmiar; j++){
            cout << "macierz[" << i << "][" << j << "]: ";
            cin >> macierz[i][j];
        }
    }
    for (int i = 0; i<rozmiar; i++){
            for (int j = 0; j<rozmiar; j++){
                cout << macierz [i][j] << " ";
            }
        cout << endl;
    }

    wynik = macierz[0][0]*macierz[1][1]*macierz[2][2]-macierz[0][0]*macierz[1][2]*macierz[2][1]-macierz[1][0]*macierz[0][1]*macierz[2][2]+macierz[1][0]*macierz[0][2]*macierz[2][1]+macierz[2][0]*macierz[0][1]*macierz[1][2]-macierz[2][0]*macierz[0][2]*macierz[1][1];
    cout << wynik;
}
