#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3;

    cout << "Enter three integers: ";
    cin >> n1 >> n2 >> n3;

    int tmp;

    if (n1 > n3) {
        tmp = n1;
        n1 = n3;
        n3 = tmp;
    }
    if (n1 > n2) {
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    if (n2 > n3) {
        tmp = n2;
        n2 = n3;
        n3 = tmp;
    }

    cout << n1 << "," << n2 << "," << n3 << "\n";

    return 0;
}

