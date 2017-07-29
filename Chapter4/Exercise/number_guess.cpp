#include <iostream>

using namespace std;

int main()
{
    constexpr int min = 1;
    constexpr int max = 100;
    int local_min = min;
    int local_max = max;
    int guess_count = 0;
    cout << "Think about a number and I will guess it within 7 questions.\n";
    char ready = '?';
    bool is_continue;
    do {
        is_continue = false;
        cout << "Are you ready?(Y/N) ";
        cin >> ready;
        switch (ready) {
            case 'y': case 'Y':
                cout << "Let's start!!!\n";
                break;
            case 'n': case 'N':
                cout << "See you next time.\n";
                exit(1);
                break;
            default:
                cout << "sorry, i don't know this command.\n";
                is_continue = true;
        }
    } while (is_continue);
    while (local_max!=local_min) {
        is_continue = false;
        char response = '?';
        cout << "Is your number larger than " << (local_max+local_min)/2 << "?(Y/N) ";
        cin >> response;
        switch (response) {
            case 'y': case 'Y':
                local_min = (local_max+local_min)/2+1;
                break;
            case 'n': case 'N':
                local_max = (local_max+local_min)/2;
                break;
            default:
                cout << "sorry, i don't know this command.\n";
                is_continue = true;
        }
        if (is_continue) continue;
        ++guess_count;
    }
    cout << "Your number is " << local_max << ".\n";
    cout << "I guessed for " << guess_count << " times.\n";
}
