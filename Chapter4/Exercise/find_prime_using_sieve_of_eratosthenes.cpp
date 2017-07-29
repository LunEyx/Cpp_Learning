#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;

    cout << "Enter a maximum for finding prime: ";
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
        numbers.push_back(i);

    for (int i = 0; i < int(numbers.size()); i++)
        for (int j = i+1; j < int(numbers.size());) {
            if (numbers[j]%numbers[i] == 0)
                numbers.erase(numbers.begin()+j);
            else
                j++;
        }

    cout << "These are the prime numbers.\n";

    for (int prime : numbers)
        cout << prime << endl;

    cout << "There are " << numbers.size() << " primes.\n";
}
