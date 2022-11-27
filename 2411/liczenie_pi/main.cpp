#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include <math.h>

using namespace std;

double Monte_Pi(long int n){
    time_t t;
    srand((unsigned) time(&t));
    double x,y,wynik;
    int pKola;
    for (int i = 0; i<n; i++){
    x=double(rand())/RAND_MAX;
    y=double(rand())/RAND_MAX;
    wynik = (x*x) + (y*y);
    if (wynik<1){
        pKola++;
    }
    }
    double pi = 4*pKola/n;
    cout << "Pi wynosi: " << pi << endl;
    cout << "Dla porownania, liczba pi wedlug math.h wynosi: " << M_PI << endl;
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
    Monte_Pi(n);
    cout << "Podaj liczbe losowan Eulera: ";
    cin >> m;
    Liczba_Eulera(m);
    return 0;
}
