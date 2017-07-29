#include <iostream>

using namespace std;

int main() {
    double total = 0;
    double current = 0;
    cout << "index\t\trice\t\ttotal" << endl;
    for (int i = 1; i <= 64; i++) {
        if (i == 1)
            current = 1;
        else
            current *= 2;
        total += current;
        cout << i << "\t\t" << current << "\t\t" << total << endl;
    }
}

