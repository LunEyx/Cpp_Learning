#include <iostream>
#include <random>
#include <vector>

using namespace std;

static default_random_engine e;

bool is_wrong_input(vector<int> user) {
    for (int i : user)
        if (i < 0 || i > 9)
            return true;
    return false;
}

int count_bull(vector<int> answer, vector<int> user) {
    int bull = 0;
    for (int i = 0; i < 4; i++)
        if (answer[i] == user[i])
            bull++;
    return bull;
}

int count_cow(vector<int> answer, vector<int> user) {
    int cow = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (i != j && answer[i] == user[j])
                cow++;
    return cow;
}

int randInt(int min, int max) {
    return uniform_int_distribution<int>{min, max}(e);
}

int main(void)
{
    cout << "Before the game start, lets set the seed: ";
    unsigned int seed;
    cin >> seed;
    e.seed(seed);
    while (true) {
        vector<int> answer(4);
        vector<int> user(4);

        cout << "Bull and Cow Guessing game" << endl;

        for (int i = 0; i < 4; i++)
            answer[i] = randInt(0, 10);

        while (answer != user) {
            cout << "Guess four numbers from 0 to 9:\n";
            cin >> user[0] >> user[1] >> user[2] >> user[3];

            if (is_wrong_input(user)) {
                cout << "Numbers should be 0 ~ 9" << endl << endl;
                continue;
            }

            cout << "This turn you got " << count_bull(answer, user) << " bulls and " << count_cow(answer, user) << " cows." << endl << endl;
        }
        cout << "You Win!" << endl;
    }
    return 0;
}
