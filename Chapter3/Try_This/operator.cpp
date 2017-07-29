#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Please enter a integer value: ";
    int n;
    cin >> n;
    cout << "n == " << n
         << "\nn+1 == " << n+1
         << "\nthree times n == " << 3*n
         << "\nn squared == " << n*n
         << "\nhalf of n == " << n/2
         << "\nmodulo of n/2 == " << n%2
         << "\nis n and 2 are integer? " << (n/2*2+n%2==n)
         << "\nsquare root of n == " << sqrt(n)
         << '\n';   // print end of line
}
