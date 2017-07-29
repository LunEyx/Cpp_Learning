#include <iostream>

using namespace std;

int main() {
    for (char c = '0'; c < ('9'+1); ++c) {
        cout << c << '\t' << int{c} << endl;
    }

    for (char c = 'A'; c < ('Z'+1); ++c) {
        cout << c << '\t' << int{c} << endl;
    }

    for (char c = 'a'; c < ('z'+1); ++c) {
        cout << c << '\t' << int{c} << endl;
    }

    return 0;
}
