#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(void)
{
    string weekday = "";
    int value;
    int count_invaild = 0;
    vector<int> v(7);
    while (cin >> weekday >> value) {
        transform(weekday.begin(), weekday.end(), weekday.begin(), ::toupper);

        if (weekday == "SUNDAY" || weekday == "SUN")
            v[0] += value;
        else if (weekday == "MONDAY" || weekday == "MON")
            v[1] += value;
        else if (weekday == "TUESDAY" || weekday == "TUE")
            v[2] += value;
        else if (weekday == "WEDNESDAY" || weekday == "WED")
            v[3] += value;
        else if (weekday == "THURSDAY" || weekday == "THU")
            v[4] += value;
        else if (weekday == "FRIDAY" || weekday == "FRI")
            v[5] += value;
        else if (weekday == "SATURDAY" || weekday == "SAT")
            v[6] += value;
        else
            count_invaild += 1;
    }

    cout << setw(10) << "Sunday" << setw(10) << "MONDAY" << setw(10) << "TUESDAY" << setw(10) << "WEDNESDAY" << setw(10) << "THURSDAY" << setw(10) << "FRIDAY" << setw(10) << "SATURDAY" << endl;
    cout << setw(10) << v[0] << setw(10) << v[1] << setw(10) << v[2] << setw(10) << v[3] << setw(10) << v[4] << setw(10) << v[5] << setw(10) << v[6] << endl;

    cout << endl << "There are " << count_invaild << " invaild weekday inputs" << endl;

    return 0;
}
