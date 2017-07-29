#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> number = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cout << "Enter a word of a number(zero ~ nine): ";
    string n;
    cin >> n;
    int count = 0;
    for (string word : number) {
        if (n == word) {
            cout << n << " is " << count;
            break;
        }
        count++;
    }
    if (count > 9)
        cout << "Error: Unknown word\n";
}
