#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    cout << "Please enter a series of string and terminal with Ctrl-D\n";
    vector<string> words;

    string s;
    while (cin >> s)
        words.push_back(s);

    sort(words.begin(), words.end());

    vector<string> mode;
    int max_count = 0;
    int count = -1;
    string last = "";
    for (string word : words) {
        if (word == last)
            count++;
        else {
            if (count > max_count) {
                max_count = count;
                mode = {last};
            }
            else if (count == max_count)
                mode.push_back(last);
            last = word;
            count = 1;
        }
    }
    if (count > max_count)
        mode = {last};
    else if (count == max_count)
        mode.push_back(last);

    cout << "The minimum string is " << words[0] << endl;
    cout << "The maximum string is " << words[words.size()-1] << endl;
    cout << "The mode string is ";
    for (int i = 0; i < int(mode.size()); i++)
        if (i == int(mode.size())-1)
            cout << mode[i] << endl;
        else
            cout << mode[i] << ", ";
}
