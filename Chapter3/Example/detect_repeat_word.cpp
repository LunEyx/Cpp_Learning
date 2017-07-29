#include <iostream>
#include <string>

using namespace std;

int main()
{
    string previous = " ";          // previous word, initialize as "not a word"
    string current;                 // current word
    while (cin >> current) {
        if (previous == current)    // check if the word is the same as last
            cout << "repeated word: " << current << '\n';
        previous = current;
    }
}
