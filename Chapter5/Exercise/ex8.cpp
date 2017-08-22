#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    try {
        vector<int> numbers;

        cout << "Please enter the number of values you want to sum:" << endl;
        int n;
        cin >> n;
        if (n < 1) throw runtime_error("The number of value you want to sum should be positive");
        cout << "Please enter some integers (press '|' to stop):" << endl;
        int i;
        while (cin >> i)
            numbers.push_back(i);
        if (n > int(numbers.size()))
            throw runtime_error("Too few numbers");
        int sum = 0;
        cout << "The sum of the first " << n << " numbers (";
        for (int i = 0; i < n; i++) {
            if (i < n)
                cout << numbers[i];
            if (i < n-1)
                cout << ' ';
            sum += numbers[i];
        }
        cout << ") is " << sum << endl;
    } catch (runtime_error &e) {
        cout << e.what() << endl;
        exit(1);
    }

    return 0;
}
