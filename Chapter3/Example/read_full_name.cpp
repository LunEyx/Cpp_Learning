#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Please enter your first and second names\n";
    string first;
    string second;
    cin >> first >> second;     // read two string
    cout << "Hello, " << first << ' ' << second << '\n';
}
