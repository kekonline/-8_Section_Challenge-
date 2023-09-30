#include <iostream>

using namespace std;
int main()
{
    int cents;

    cout << "Enter an amount of cents: " << endl;
    cin >> cents;

    cout << "dollar: " << cents / 100 << endl;
    cents = cents - (cents / 100) * 100;

    cout << "quarter: " << cents / 25 << endl;
    cents = cents - (cents / 25) * 25;

    cout << "dime: " << cents / 10 << endl;
    cents = cents - (cents / 10) * 10;

    cout << "nickel: " << cents / 5 << endl;
    cents = cents - (cents / 5) * 5;

    cout << "penny: " << cents << endl;

    return 0;
}