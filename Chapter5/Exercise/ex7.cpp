#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<double> solve_quadratic_equation(double a, double b, double c) {
    double delta = b*b - 4*a*c;
    if (delta < 0)
        throw runtime_error("No real solution");
    vector<double> x(2);
    x[0] = (-b - sqrt(delta))/2/a;
    x[1] = (-b + sqrt(delta))/2/a;
    
    return x;
}

int main(void)
{
    double a, b, c;
    cout << "Enter a,b,c for ax^2 + bx + c = 0" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    vector<double> x;
    try {
        x = solve_quadratic_equation(a, b, c);
    } catch (runtime_error &e) {
        cout << e.what() << endl;
        exit(1);
    }

    cout << "The solution of " << a << "x^2 + " << b << "x + " << c << " = 0 is x = " << x[0] << ", x = " << x[1] << endl;

    return 0;
}
