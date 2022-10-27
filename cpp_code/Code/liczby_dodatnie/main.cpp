#include <iostream>

using namespace std;

int main()
{
float liczba;
do
{
    cout << "Podaj liczbe dodatnia:" << endl;
    cin >> liczba;
    if (liczba < 0) cout << liczba <<" jest liczba ujemna" << endl;
    if (liczba == 0) cout  << liczba <<" nie jest dodatnie" << endl;

}while (liczba <=0);

cout << liczba <<" jest liczba dodatnia. Koniec" << endl;
}
