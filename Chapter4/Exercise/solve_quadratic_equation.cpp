#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    cout << "Enter a, b, c for the equation ax^2 + bx + c\n";
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    cout << "c : ";
    cin >> c;

    double x1, x2;
    double delta;

    delta = sqrt(b*b-4*a*c);
    x1 = (-b+delta)/2/a;
    x2 = (-b-delta)/2/a;

    if (x1 == x2)
        cout << "x = " << x1 << endl;
    else
        cout << "x = " << x1 << ", x = " << x2 << endl;
}
