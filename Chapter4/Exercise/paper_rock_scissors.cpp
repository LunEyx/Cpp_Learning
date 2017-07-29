#include <iostream>
#include <string>
#include <vector>

using namespace std;

string wordOfChoice(int choice) {
    switch (choice) {
        case 0:
            return "Paper";
        case 1:
            return "Rock";
        case 2:
            return "Scissors";
        default:
            return "";
    }
}

int main() {
    vector<int> order = {0, 1, 2, 2, 0, 2, 1, 0, 0, 1, 2, 1, 0, 1, 2};

    cout << "Please enter a number for random: ";
    int n = 0;
    cin >> n;

    for (int i = n%order.size(); i < int(order.size()); i++) {
        cout << "Paper, Rock, Scissors! (p, r, s): ";
        char c;
        cin >> c;
        int choice;
        switch (c) {
            case 'p':
                choice = 0;
                break;
            case 'r':
                choice = 1;
                break;
            case 's':
                choice = 2;
                break;
            default:
                cout << "Error: Wrong Input!\n";
                i--;
                continue;
        }
        cout << "You choose " << wordOfChoice(choice) << " and I choose " << wordOfChoice(order[i]) << endl; 
        if (choice-order[i] == -1 || choice-order[i] == 2)
            cout << wordOfChoice(choice) << " beats " << wordOfChoice(order[i]) << endl << "You Win\n";
        else if (choice-order[i] == -2 || choice-order[i] == 1)
            cout << wordOfChoice(order[i]) << " beats " << wordOfChoice(choice) << endl << "You Lose\n";
        else
            cout << "Draw!\n";
        if (i == int(order.size())-1)
            i = 0;
    }
}
