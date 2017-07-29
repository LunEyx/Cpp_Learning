#include <iostream>

using namespace std;

int main() {
    cout << "Enter a integer: ";

    int n;

    cin >> n;

    cout << "The value " << n << " is an ";

    if (n%2 == 0)
        cout << "even number.\n";
    else
        cout << "odd number.\n";

    return 0;
}
