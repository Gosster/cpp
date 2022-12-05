#include <iostream>

using namespace std;

int main()
{
    const int rozmiar = 21;
    char wyraz[rozmiar], koniec;

    do{
    cout << "Podaj wyraz (maksymalnie " << rozmiar-1 << " znakow): ";
    cin >> wyraz;
    cout << "Podales: " << wyraz << endl;

    int dlugoscWyrazu = 0;
    for (int i=0; i<rozmiar; i++)
    {
        if (wyraz[i] == NULL)
        {
            break;
        }
        else
        {
            dlugoscWyrazu +=1;
        }
    }

    cout << "Wyraz ma: " << dlugoscWyrazu << " liter. \n";

    char naWspak[dlugoscWyrazu];
    cout << "Wyraz na wspak: ";
    int a=0;
    for (int i=dlugoscWyrazu-1; i>=0; i--){
        cout << wyraz[i];
        naWspak[a] = wyraz[i];
        a++;
    }
    cout << endl;

    int sprawdzenie = 0;

    for (int i=0; i<dlugoscWyrazu; i++){
        if (wyraz[i] != naWspak[i]){
            sprawdzenie = 1;
            break;
        }
    }

    if (sprawdzenie == 1)
    {
        cout << "Ten wyraz to nie palindron\n";
    }
    else
    {
        cout << "Ten wyraz to palindron\n";
    }

    cout << "Czy chcesz zakonczyc program? n-nie: ";

    cin >> koniec;

    }while(koniec=='n');

    return 0;
}
