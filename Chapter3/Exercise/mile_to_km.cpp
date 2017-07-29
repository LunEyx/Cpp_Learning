#include <iostream>

using namespace std;

int main() {
    cout << "Enter a number(in miles): ";
    double mile = 0.0;
    double km = 0.0;
    cin >> mile;
    km = mile * 1.609;
    cout << mile << " mile(s) equals to " << km << " km.\n";

    return 0;
}
