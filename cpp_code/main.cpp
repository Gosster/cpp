#include <iostream>

using namespace std;

int main()
{
    int wybor, wynik;
    cout << "Co chcesz obliczyc? 1-potega 2-silnia\n";
    cin >> wybor;

    if (wybor==1){
    int podstawa,wykladnik;

    cout << "Podaj podstawe: ";
    cin >> podstawa;

    cout << "Podaj wykladnik: ";
    cin >> wykladnik;

    for (int i=0; i<wykladnik; i++){
        wynik *= podstawa;
    }

    cout << wynik;
    }
    else if (wybor==2){



    }
    else{
        cout << "Zly wybor";
    }
    return 0;
}
