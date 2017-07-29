#include <iostream>
#include <string>
#include <vector>

using namespace std;

void output_name_score(vector<string>, vector<int>);
void find_value(vector<string>, vector<int>);
void find_name(vector<string>, vector<int>, string);
void find_score(vector<string>, vector<int>, int);

int main() {
    vector<string> names;
    vector<int> scores;

    cout << "Enter a name followed by a score('NoName 0' to stop)\n";

    string name;
    int score;
    while (cin >> name >> score) {
        if (name == "NoName" && score == 0)
            break;
        bool is_name_unique = true;
        for (string s : names)
            if (s == name) {
                is_name_unique = false;
                break;
            }
        if (is_name_unique) {
            names.push_back(name);
            scores.push_back(score);
        } else
            cout << "Name Exist!\n";
    }

    cout << "These are the data:\n";
    output_name_score(names, scores);
    cout << "Now you can search for the corresponding value by enter the name or the score\n";
    find_value(names, scores);
}

void output_name_score(vector<string> names, vector<int> scores) {
    for (int i = 0; i < int(names.size()); i++)
        cout << names[i] << " " << scores[i] << endl;
}

void find_value(vector<string> names, vector<int> scores) {
    int score = -1;
    string name = "";
    while (cin >> score || (cin.clear(), cin >> name)) {
        if (name == "")
            find_score(names, scores, score);
        else
            find_name(names, scores, name);
        name = "";
    }
}

void find_name(vector<string> names, vector<int> scores, string name) {
    for (int i = 0; i < int(names.size()); i++)
        if (name == names[i]) {
            cout << name << " is " << scores[i] << " scores.\n";
            return;
        }
    cout << "name not found\n";
}

void find_score(vector<string> names, vector<int> scores, int score) {
    bool is_score_found = false;
    for (int i = 0; i < int(scores.size()); i++)
        if (score == scores[i]) {
            if (is_score_found)
                cout << ", ";
            cout << names[i];
            is_score_found = true;
        }
    if (is_score_found)
        cout << " are " << score << " scores.\n";
    else
        cout << "score not found\n";
}
