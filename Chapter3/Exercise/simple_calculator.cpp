#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Enter 1 operator and 2 operand(e.g. + 100 3.14):\n";

    string operation;
    double operand1, operand2, result = 0;

    cin >> operation >> operand1 >> operand2;

    if (operation == "+")
        result = operand1 + operand2;
    else if (operation == "-")
        result = operand1 - operand2;
    else if (operation == "*")
        result = operand1 * operand2;
    else if (operation == "/")
        result = operand1 / operand2;

    cout << operand1 << " " << operation << " " << operand2 << " = " << result << "\n";

    return 0;
}
