#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> distances;
    double d;
    double sum = 0;
    double shortest = 99999999;
    double longest = 0;
    double mean;

    cout << "Enter the distance of a route from city A to city B: ";
    while (cin >> d) {
        if (d < 0) {
            cout << "Error: Please enter positive integer only";
            continue;
        }
        else if (d < shortest)
            shortest = d;
        else if (d > longest)
            longest = d;
        distances.push_back(d);
    }
    for (double distance : distances)
        sum += distance;

    mean = sum/distances.size();
    cout << "The shortest distance is " << shortest << '\n';
    cout << "The longest distance is " << longest << '\n';
    cout << "The sum of those distance is " << sum << '\n';
    cout << "The mean of those distanceq is " << mean << '\n';
}
