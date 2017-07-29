#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string disliked = "Broccoli";

    string word;
    while (cin >> word) {
        if (word == disliked)
            cout << "BLEEP\n";
        else
            cout << word << '\n';
    }
}
