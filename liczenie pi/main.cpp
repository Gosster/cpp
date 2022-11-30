#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include <math.h>

using namespace std;

double montePi(long int n){
    time_t t;
    srand((unsigned) time(&t));
    double x,y, pi;
    double pKola = 0, wynik;

    for (int i = 0; i<n; i++){
        x=double(rand())/RAND_MAX;
        y=double(rand())/RAND_MAX;
        wynik = x*x + y*y;
        if (wynik<1){
            pKola++;
        }
    }

    pi = 4*pKola/n;
    return pi;
}

double Liczba_Eulera(long int m){
    time_t t;
    srand((unsigned) time(&t));
    double x,y,wynik;
    for (int i = 0; i<m; i++){
    x=double(rand())/RAND_MAX;
    y=double(rand())/RAND_MAX;
}
}

int main()
{
    long int n, m;
    cout << "Podaj liczbe losowan PI: ";
    cin >> n;
    cout << "Pi wynosi: " << montePi(n) << endl;
    cout << "Dla porownania, liczba pi wedlug math.h wynosi: " << M_PI << endl;
    // cout << "Podaj liczbe losowan Eulera: ";
    // cin >> m;
    // Liczba_Eulera(m);
    return 0;
}
