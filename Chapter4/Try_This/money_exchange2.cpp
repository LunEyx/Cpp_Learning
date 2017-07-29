#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Enter a price followed by a unit (y/e/g/r/c): ";
    double price = 0;
    char unit = ' ';
    cin >> price >> unit;

    switch (unit) {
        case 'y':
            cout << price << "yen = " << price*0.008898 << "usd\n";
            break;
        case 'e':
            cout << price << "eur = " << price*1.14125 << "usd\n";
            break;
        case 'g':
            cout << price << "gbp = " << price*1.2996 << "usd\n";
            break;
        case 'r':
            cout << price << "rmb = " << price*0.147504 << "usd\n";
            break;
        case 'c':
            cout << price << "czk = " << price*0.153473 << "usd\n";
            break;
        default:
            cout << "Sorry, I don't know a unit called '" << unit << "'\n";
    }

    return 0;
}
