#include <iostream>

using namespace std;

int main() {
    int penny, nickel, dime, quarter, half_dollar;

    cout << "How many pennies do you have? ";
    cin >> penny;
    cout << "How many nickels do you have? ";
    cin >> nickel;
    cout << "How many dimes do you have? ";
    cin >> dime;
    cout << "How many quarters do you have? ";
    cin >> quarter;
    cout << "How many half dollars do you have? ";
    cin >> half_dollar;

    cout << "You have " << penny << (penny == 1 ? " penny.\n" : " pennies.\n");
    cout << "You have " << nickel << (nickel == 1 ? " nickel.\n" : " nickels.\n");
    cout << "You have " << dime << (dime == 1 ? " dime.\n" : " dimes.\n");
    cout << "You have " << quarter << (quarter == 1 ? " quarter.\n" : " quarters.\n");
    cout << "You have " << half_dollar << (half_dollar == 1 ? " half_dollar.\n" : " half_dollars.\n");

    double total = penny*0.01 + nickel*0.05 + dime*0.1 + quarter*0.25 + half_dollar*0.5;

    cout << "The value of all of your coins is $" << total << ".\n";

    return 0;
}
