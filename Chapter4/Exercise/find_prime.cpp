#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> primes;

    primes.push_back(2);

    for (int i = 3; i <= 100; i++) {
        bool is_prime = true;
        for (int prime : primes)
            if (i%prime == 0) {
                is_prime = false;
                break;
            }
        if (is_prime)
            primes.push_back(i);
    }

    cout << "These are the primes that between 1 to 100.\n";

    for (int prime : primes)
        cout << prime << endl;

    cout << "There are " << primes.size() << " primes in total.\n";
}
