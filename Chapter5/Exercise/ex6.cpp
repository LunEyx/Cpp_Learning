#include <iostream>

using namespace std;

double ctof(double c) {
    double f = 9.0/5.0*c+32;
    return f;
}

double ftoc(double f) {
    double c = 5.0/9.0*(f-32);
    return c;
}

int main(void)
{
    double degree = 0;
    double result = 0;
    char unit;

    cout << "Enter degree with unit: ";
    cin >> degree >> unit;

    if (unit == 'c')
        result = ctof(degree);
    else if (unit == 'f')
        result = ftoc(degree);

    cout << degree << unit << " = " << result << (unit == 'c' ? 'f' : 'c') << endl;

    return 0;
}
