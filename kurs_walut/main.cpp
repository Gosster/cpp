#include <iostream>

using namespace std;

int main()
{
const float dolary = 4.89;
const float euro = 4.79;
const float funty = 5.47;

cout << "1. przelicznik zlote ---> dolary. \n";
cout << "2. przelicznik zlote ---> euro. \n";
cout << "3. przelicznik zlote ---> funty. \n\n";

int wybor;
cin >> wybor;
cout << endl;

float kwota;

switch (wybor){

case 1:
cout << "Podaj kwote ktora chcesz przeliczyc: ";
cin >> kwota;
cout << kwota / dolary << endl;
break;

case 2:
cout << "Podaj kwote ktora chcesz przeliczyc: ";
cin >> kwota;
cout << kwota / euro << endl;
break;

case 3:
cout << "Podaj kwote ktora chcesz przeliczyc: ";
cin >> kwota;
cout << kwota / funty << endl;
break;

default:
cout << "Podales zly numer." << endl;
}

return 0;
}
