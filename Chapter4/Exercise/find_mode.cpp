#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "Please enter a series of number and find the mode: ";
    vector<int> numbers;
    int n;
    while (cin >> n)
        if (n > 0)
            numbers.push_back(n);
    sort(numbers.begin(), numbers.end());
    // for (int a : numbers)
        // cout << a << ",";

    int max_count = 0;
    int count = 0;
    int last = 0;
    vector<int> mode;
    for (int num : numbers) {
        if (num == last)
            count++;
        else {
            if (count > max_count) {
                mode = {last};
                max_count = count;
            } else if (count == max_count)
                mode.push_back(last);
            last = num;
            count = 1;
        }
    }

    if (count > max_count)
        mode = {last};
    else if (count == max_count)
        mode.push_back(last);

    cout << "The mode is ";
    for (int i = 0; i < int(mode.size()); i++) {
        if (i == int(mode.size()-1))
            cout << mode[i] << endl;
        else
            cout << mode[i] << ", ";
    }
}
