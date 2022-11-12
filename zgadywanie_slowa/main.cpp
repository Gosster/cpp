#include <iostream>

using namespace std;

int main()
{
    const int rozmiar = 21;
    char slowo[rozmiar], podpowiedz[rozmiar];
    cout << "Podaj slowo do zgadniecia (maksymalnie " << rozmiar-1 << " liter): ";
    cin >> slowo;
    system("cls");

    int dlugoscSlowa = 0;

    for (int i=0; i<rozmiar; i++){
        if (slowo[i]==NULL){
            break;
        }
        else if(i==rozmiar){
            dlugoscSlowa++;
            break;
        }
        else{
            dlugoscSlowa++;
        }
    }
    if (dlugoscSlowa<rozmiar && slowo>0){
    cout << "Wyraz ma: " <<dlugoscSlowa << " liter.\n";

    string zgadywanie;

    for (int i=-1; i<dlugoscSlowa-1; i++){
    podpowiedz[i] = slowo[i];
    cout <<  "Wskazowka: " << podpowiedz << endl;
    cout << "Zgadnij: ";
    cin >> zgadywanie;
    if(zgadywanie==slowo){
        cout << "Brawo! Zgadles/as!";
        break;
    }
    else if(i==dlugoscSlowa-2){
        cout << "Nie udalo Ci sie zgadnac! Slowo to: " << slowo << endl;
        break;
    }
    }
}else{
cout << "Podales zly wyraz!";
}
}
