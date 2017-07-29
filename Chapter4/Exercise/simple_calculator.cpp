#include <iostream>

using namespace std;

int main() {
    constexpr char add = '+', sub = '-', multiple = '*', divide = '/';

    cout << "Enter 2 operands and 1 operator.\n";

    double d1, d2;
    char sign;
    double result;
    cin >> d1 >> d2 >> sign;

    switch (sign) {
        case add:
            result = d1 + d2;
            cout << "The sum of " << d1 << " and " << d2 << " is " << result;
            break;
        case sub:
            result = d1 - d2;
            cout << "The subtraction of " << d1 << " and " << d2 << " is " << result;
            break;
        case multiple:
            result = d1 * d2;
            cout << "The mutiple of " << d1 << " and " << d2 << " is " << result;
            break;
        case divide:
            result = d1 / d2;
            cout << "The division of " << d1 << " and " << d2 << " is " << result;
            break;
        default:
            cout << "Error, wrong input!";
            exit(1);
    }
}
