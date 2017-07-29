#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Enter a price followed by a unit (yen/eur/gbp): ";
    double price = 0;
    string unit = "";
    cin >> price >> unit;

    if (unit == "yen")
        cout << price << "yen = " << price*0.008898 << "usd\n";
    else if (unit == "eur")
        cout << price << "eur = " << price*1.14125 << "usd\n";
    else if (unit == "gbp")
        cout << price << "gbp = " << price*1.2996 << "usd\n";
    else
        cout << "Sorry, I don't know a unit called '" << unit << "'\n";

    return 0;
}
