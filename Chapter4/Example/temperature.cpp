#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    vector<double> temps;           // temperatures
    
    for (double temp; cin>>temp;)   // read into temp
        temps.push_back(temp);      // put temp into vector

    // compute mean temperature:
    double sum = 0;
    
    for (int x : temps) sum += x;
    cout << "Averatge temperature: " << sum/temps.size() << '\n';

    // compute median temperature:
    sort(temps.begin(), temps.end());
    cout << "Median temperature: " << temps[temps.size()/2] << '\n';
}
