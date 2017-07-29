#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Enter the name of the person you want to write to: ";
    string first_name;
    cin >> first_name;

    cout << "Enter the age of him/her: ";
    int age = -1;
    cin >> age;
    if(age <= 0 || age >= 110) {
        cerr << "you'r kidding!\n";
        exit(1);
    }

    cout << "Enter another friend's name: ";
    string friend_name;
    cin >> friend_name;

    cout << "Enter the sex of the friend('m' if male and 'f' if female): ";
    char friend_sex {0};
    cin >> friend_sex;

    cout << "Dear " << first_name << ",\n";

    cout << "\tHow are you? I am fine. I miss you.\n";

    cout << "\tHave you seen " << friend_name << " lately?\n";

    cout << "\tIf you see " << friend_name << " please ask ";
    if (friend_sex == 'm')
        cout << "him";
    else
        cout << "her";
    cout << " to call me.\n";

    cout << "\tI hear you just had a birthday and you are " << age << " years old.\n";

    if(age < 12)
        cout << "\tNext year you will be " << age+1 << ".\n";
    else if (age == 17)
        cout << "\tNext year you will be able to vote.\n";
    else if (age > 70)
        cout << "\tI hope you are enjoying retirement.\n";

    cout << "Yours sincerely,\n\n\n" << "Jerry\n";
}
