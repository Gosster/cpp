#include <iostream>

using namespace std;

void dec_to_bin(long int n){
    const int rozmiar = 50;
    int wynik[rozmiar];
    int i = 0;
    do{
        if (n%2==0){
            wynik[i] = 0;
        }
        else{
            wynik[i] = 1;
        }
        n=n/2;
        i++;
    }
    while (n>1);
    for (int j=i-1; j>=0; j--){
        cout << wynik[j];
    }
}

int main()
{
    long int n;
    cout << "Podaj liczbe dziesietna do zmienienia na binarna: ";
    cin >> n;
    dec_to_bin(n);
    return 0;
}
