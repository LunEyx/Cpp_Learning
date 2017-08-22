#include <iostream>
#include <exception>
#include <vector>

using namespace std;

int main() {
    try {
        // fragment 1
/* 
        cout << "Success!\n";
        cout << "Success!\n";
        cout << "Success" << "!\n";
        cout << "Success!" << '\n';
        int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
 */
        // fragment 6
/* 
        vector<int> v(10); v[5] = 5; if (v[5]!=7) cout << "Success!\n";
        if (true) cout << "Success!\n"; else cout << "Fail!\n";
        bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n";
        string s = "ape"; [>bool<] c = "fool">s; if (c) cout << "Success!\n";
        [>string<] s = "ape"; if (s=="ape") cout << "Success!\n";
 */
        // fragment 11
/* 
        string s = "ape"; if (s!="fool") cout << "Success!\n";
        [>string<] s = "ape"; if (s!="fool") cout << "Success!\n";
        vector<char> v(5); for (int i=0; i<int(v.size()); ++i)
            ; cout << "Success!\n";
        [>vector<char> v(5);<] for (int i=0; i<=int(v.size()); ++i)
            ; cout << "Success!\n";
        [>string<] s = "Success!\n"; for (int i=0; i<int(v.size()); ++i) cout << s[i];
 */
        // fragment 16
/* 
        if (true) cout << "Success!\n"; else cout << "Fail!\n";
        int x = 2000; char c = x; if (c==char(2000)) cout << "Success!\n";
        string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
        vector<char> v(5); for (int i=0; i<=int(v.size()); ++i) 
            ;cout << "Success!\n";
        int i=0; int j=9; while (i<10) ++i; if (j<i) cout << "Success!\n";
 */
        // fragment 21

        // int x = 2; double d = 9.0/x; if (d==2*x+0.5) cout << "Success!\n";
        // string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
        // vector<int> v(5); for (int i=0; i<=int(v.size()); ++i)
            // ; cout << "Success!\n";
        // [> int */ x = 4; /* double <] d =17.0/(x-2); if (d==2*x+0.5) cout << "Success!\n";
        // cout << "Success!\n";

        return 0;
    }
    catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        return 1;
    }
    catch(...) {
        cerr << "Oops: unknown exception!\n";
        return 2;
    }
}
