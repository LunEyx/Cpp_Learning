#include <iostream>

using namespace std;

int square(int x) {
    int result = 0;

    for (int i = 0; i < x; ++i)
        result += x;

    return result;
}

int main() {
    int i = 0;
    while (i < 100) {
        cout << i << '\t' << square(i) << '\n';
        ++i;    // increment of i (i became i+1)
    }
}
