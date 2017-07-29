#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Enter a number's word: ";
    
    string word;

    cin >> word;

    if (word == "zero")
        cout << 0;
    else if (word == "one")
        cout << 1;
    else if (word == "two")
        cout << 2;
    else if (word == "three")
        cout << 3;
    else if (word == "four")
        cout << 4;
    else
        cout << "not a number I know";
    cout << "\n";

    return 0;
}
