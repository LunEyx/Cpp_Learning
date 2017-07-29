#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<double> data;
    double x;
    string unit;
    double smallest = 9999999;
    double largest = -9999999;
    double sum = 0;
    double count = 0;
    while (cin >> x >> unit) {
        double value;

        if (unit == "cm")
            value = 0.01*x;
        else if (unit == "m")
            value = x;
        else if (unit == "in")
            value = 0.01*2.54*x;
        else if (unit == "ft")
            value = 0.01*12*2.54*x;
        else {
            cout << "Wrong unit\n";
            continue;
        }
        
        data.push_back(value);
        sum += value;
        ++count;

        if (value > largest) {
            largest = value;
            cout << "The largest so far\n";
        }
        if (value < smallest) {
            smallest = value;
            cout << "The smallest so far\n";
        }
    }
    
    cout << "The smallest number is: " << smallest << "m\n";
    cout << "The largest number is: " << largest << "m\n";
    cout << "The sum of those numbers is: " << sum << "m\n";
    cout << "There are " << count << " numbers\n";
    sort(data.begin(), data.end());
    cout << "The values are:\n";
    for (double d : data)
        cout << d << "m\n";
}
