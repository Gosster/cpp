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

void dec_to_hex(long int n){
    const int rozmiar = 50;
    int temp, i=1,j , r;
    char wynik[rozmiar];
    temp = n;
    while (temp != 0){
        r = temp % 16;
        if (r < 10){
            wynik[i++] = r + 48;
        }
        else{
            wynik[i++] = r + 55;
        }
        temp = temp / 16;
    }
    cout << "Heksadecymalna liczba " << n << " jest:";
    for (j=i; j > 0; j--){
        cout << wynik[j];
    }
}

int main()
{
    long int n;
    int wybor;

    cout << "Wybierz konwersje: " << endl;
    cout << "1. dec->bin, 2. dec->hex" << endl;
    cin >> wybor;

    switch(wybor){

    case 1:
        cout << "Podaj liczbe dziesietna do zmienienia na binarna: ";
        cin >> n;
        dec_to_bin(n);
    break;

    case 2:
        cout << "Podaj liczbe dziesietna do zmienienia na heksadecymalna: ";
        cin >> n;
        dec_to_hex(n);
    break;
    }
    return 0;
}
