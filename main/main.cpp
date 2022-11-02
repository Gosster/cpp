#include <iostream>

using namespace std;

int main()
{
    int firstNumber;
    int secondNumber;
    int thirdNumber;

    cout << "Podaj pierwsza liczbe." << endl;
    cin >> firstNumber;
    cout << "Podaj druga liczbe." << endl;
    cin >> secondNumber;
    cout << "Podaj trzecia liczbe." << endl;
    cin >> thirdNumber;

    if (firstNumber + secondNumber > thirdNumber && firstNumber + thirdNumber > secondNumber && secondNumber + thirdNumber > firstNumber){
        cout << "Liczby: " << firstNumber << ", " << secondNumber << ", " << thirdNumber << ", " <<"spelniaja warunek trojkata.";
    }
    else {
        cout << "Takie liczby nie spelniaja warunku trojkata.";
    }
    return 0;
}
