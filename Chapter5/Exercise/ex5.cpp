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

double ktoc(double k) {
    try {
        if (k < 0) throw runtime_error("Cannot lower than absolute zero!");
    } catch (runtime_error &e) {
        cout << e.what() << endl;
        exit(1);
    }
    double c = k - 273.15;
    return c;

}

int main() {
    double degree = 0;
    char unit;
    cout << "Enter degree with c/f" << endl;
    cin >> degree >> unit;
    double result;
    if (unit == 'c')
        result = ctok(degree);
    else
        result = ktoc(degree);
    cout << result << '\n';
}
