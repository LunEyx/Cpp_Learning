#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> words;

    for (string temp; cin>>temp;)   // read words seperated by space
        words.push_back(temp);      // read into vector
    cout << "Number of words: " << words.size() << '\n';

    sort(words.begin(), words.end());

    for (unsigned int i = 0; i<words.size(); ++i)
        if (i==0 || words[i-1]!=words[i])   // is this a new word?
            cout << words[i] << '\n';
}
