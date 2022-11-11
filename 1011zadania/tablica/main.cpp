#include <iostream>

using namespace std;

int main()
{
    const int rozmiar = 21;
    char wyraz[rozmiar];
    cout << "Podaj wyraz (maksymalnie " << rozmiar-1 << " znakow): ";
    cin >> wyraz;
    cout << "Podales: " << wyraz << endl;
    int dlugoscWyrazu = 0;
    for (int i=0; i<rozmiar; i++){
        if (wyraz[i] == NULL){
            break;
        }
        else{
            dlugoscWyrazu +=1;
        }
    }

    cout << "Wyraz ma: " << dlugoscWyrazu << " liter. \n";

    char slowo[dlugoscWyrazu+1];
    int b=0;

    for (int j=dlugoscWyrazu-1; j>=0; j--){
        cout << wyraz[j];
        slowo[b] += wyraz[j];
        b++;
    }
    cout << endl;

    for (int o=0; o<dlugoscWyrazu; o++){
        cout << o << " " << wyraz[o] << " pierwsze\n";
        cout << o << " " << slowo[o] << " drugie\n";
    }

    cout << "\n---\n";

int c=0;
int sprawdzenie = 0;
    for (int k=dlugoscWyrazu-1; k>0; k--){
        if (wyraz[c]== slowo[c]){
                cout << "dobrze";
        }else
        {
            sprawdzenie=1;
            break;
        }
        c++;
    }

    cout << sprawdzenie;

    return 0;
}
