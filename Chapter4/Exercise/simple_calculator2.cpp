#include <iostream>
#include <vector>

using namespace std;

int readNumber() {
    vector<string> number = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int d;
    string s;

    if (!(cin >> d)) {
        cin.clear();
        cin >> s;
        int count = 0;
        for (string word : number) {
            if (s == word)
                d = count;
            count++;
        }
    }
    return d;
}

int main() {
    constexpr char add = '+', sub = '-', multiple = '*', divide = '/', modulus = '%';

    cout << "Enter 2 operands and 1 operator.\n";

    int d1, d2;
    char sign;
    int result;
    d1 = readNumber();
    cin >> sign;
    d2 = readNumber();

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
            if (d2 == 0) {
                cout << "Error: Cannot divide by 0";
                exit(1);
            }
            result = d1 / d2;
            cout << "The division of " << d1 << " and " << d2 << " is " << result;
            break;
        case modulus:
            if (d2 == 0) {
                cout << "Error: Cannot divide by 0";
                exit(1);
            }
            result = d1 % d2;
            cout << "The modulus of " << d1 << " and " << d2 << " is " << result;
            break;
        default:
            cout << "Error, wrong input!";
            exit(1);
    }
}
