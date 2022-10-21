#include <iostream>
#include <math.h>

using namespace std;

int main()
{
int a;
int b;
int c;

cout << "y= ax^2 + bx + c \n";
cout << "Podaj a: ";
cin >> a;
cout << "Podaj b: ";
cin >> b;
cout << "Podaj c: ";
cin >> c;

float delta = b*b-4*a*c;

float mzerowea = (-b-(sqrt(delta)))/2*a;
float mzeroweb = (-b+(sqrt(delta)))/2*a;

cout << "delta: " << delta << endl << "x1: " << mzerowea << endl <<"x2: " << mzeroweb << endl;

return 0;
}
