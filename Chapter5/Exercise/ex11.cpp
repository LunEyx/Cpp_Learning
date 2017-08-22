#include <iostream>

using namespace std;

int main(void)
{
    int last = 1;
    int current = 1;
    int temp;
    cout << last << endl;
    while (current >= last) {
        cout << current << endl;
        temp = current;
        current += last;
        last = temp;
    }
        
    return 0;
}
