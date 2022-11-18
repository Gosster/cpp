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

    char zgadywanie[dlugoscSlowa];
    int czyDobrze = 1;

    for (int i=0; i<dlugoscSlowa; i++){
    podpowiedz[i] = slowo[i];
    cout <<  "Wskazowka: ";
    for (int j = 0; j<i; j++){
        cout << podpowiedz[j];
    }

    cout << "\nZgadnij: ";
    cin >> zgadywanie;
    for (int j=0; j<dlugoscSlowa; j++){
        if (zgadywanie[j] != slowo[j]){
            czyDobrze = 0;
            break;
        }
    }
    if(czyDobrze==1){
        cout << "Brawo! Zgadles/as!";
        break;
    }
    else if(i==dlugoscSlowa-1){
        cout << "Nie udalo Ci sie zgadnac! Slowo to: " << slowo << endl;
        break;
    }
    czyDobrze = 1;
    }
}else{
cout << "Podales zly wyraz!";
}
}
