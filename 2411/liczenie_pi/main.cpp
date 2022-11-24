#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include <math.h>

using namespace std;



double Monte_Pi(long int n){
    time_t t;
    srand((unsigned) time(&t));
    double x,y,wynik, pKola;
    for (int i = 0; i<n; i++){
    x=double(rand())/RAND_MAX;
    y=double(rand())/RAND_MAX;
    wynik = (x*x) + (y*y);
    if (wynik<1){
        pKola++;
    }
    }
    double pi = 4*(pKola/n);
    cout << "Pi wynosi: " << pi;

}

int main()
{
    int n;
    cout << "Podaj liczbe losowan: ";
    cin >> n;
    Monte_Pi(n);
    return 0;
}
