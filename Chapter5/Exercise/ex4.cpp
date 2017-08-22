#include <iostream>

using namespace std;

double ctok(double c) {
    try {
        if (c < -273.15) throw runtime_error("Cannot lower than absolute zero!");
    } catch (runtime_error &e) {
        cout << e.what() << endl;
        exit(1);
    }
    double k = c + 273.15;
    return k;
}

int main() {
    double c = 0;
    cin >> c;
    double k = ctok(c);
    cout << k << '\n';
}
