#include <iostream>

using namespace std;

int main() {
    char c = 'a';

    while (c < ('z'+1)) {
        cout << c << '\t' << int{c} << endl;
        ++c;
    }

    return 0;
}
