#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2, s3;

    cout << "Enter three strings: ";
    cin >> s1 >> s2 >> s3;

    string tmp;

    if (s1 > s3) {
        tmp = s1;
        s1 = s3;
        s3 = tmp;
    }
    if (s1 > s2) {
        tmp = s1;
        s1 = s2;
        s2 = tmp;
    }
    if (s2 > s3) {
        tmp = s2;
        s2 = s3;
        s3 = tmp;
    }

    cout << s1 << "," << s2 << "," << s3 << "\n";

    return 0;
}

