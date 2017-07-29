#include <iostream>

using namespace std;

int main() {
    cout << "Enter two integers: ";
    int val1, val2;
    cin >> val1 >> val2;
    
    int max, min, sum, diff, product;

    if (val1 > val2) {
        max = val1;
        min = val2;
    } else {
        max = val2;
        min = val1;
    }

    sum = val1 + val2;
    diff = val1 - val2;
    product = val1 * val2;

    double ratio = val1 / val2;

    cout << "The maxium is " << max << ".\n";
    cout << "The minimum is " << min << ".\n";
    cout << "The sum is " << sum << ".\n";
    cout << "The difference is " << diff << ".\n";
    cout << "The product is " << product << ".\n";
    cout << "The ratio of " << val1 << " and " << val2 << " is " << ratio << ".\n";

    return 0;
}
