#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> answer = {1, 2, 3, 4};
    vector<int> user = {-1, -1, -1, -1};
    while (answer != user) {
        cout << "Guess four numbers from 0 to 9:\n";
        cin >> user[0] >> user[1] >> user[2] >> user[3];

        bool wrong_input = false;
        for (int i : user) {
            if (i < 0 || i > 9) {
                wrong_input = true;
                break;
            }
        }

        if (wrong_input) {
            cout << "Numbers should be 0 ~ 9" << endl << endl;
            continue;
        }

        int bull = 0;
        int cow = 0;

        for (int i = 0; i < 4; i++)
            if (answer[i] == user[i])
                bull++;

        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                if (i != j && answer[i] == user[j])
                    cow++;

        cout << "This turn you got " << bull << " bulls and " << cow << " cows." << endl << endl;
    }
    cout << "You Win!" << endl;
    return 0;
}
