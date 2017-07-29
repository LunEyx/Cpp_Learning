#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "How many primes you wants to find? ";

    int n;
    cin >> n;

    vector<int> primes;

    if (n > 0)
        primes.push_back(2);

    for (int i = 3; n > int(primes.size()); i++) {
        bool is_prime = true;
        for (int prime : primes)
            if (i%prime == 0) {
                is_prime = false;
                break;
            }
        if (is_prime)
            primes.push_back(i);
    }

    cout << "The first " << n << " primes are:\n";

    for (int prime : primes)
        cout << prime << endl;
}
