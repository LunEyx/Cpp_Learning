#include <iostream>

using namespace std;

int main() {
    double d = 0;
    while (cin >> d) {          // repeat running the below statement
                                // if we input number continuously
        int i = d;              // try to squeeze double to int
        char c = i;             // try to squeeze int to char
        int i2 = c;             // get the value of the character
        cout << "d==" << d                  // original value of double
             << " i==" << i                 // convert to int
             << " i2==" << i2               // int value of the character
             << " char(" << c << ")\n";     // value of character
    }
}
