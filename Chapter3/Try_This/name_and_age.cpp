#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Please enter your first name and age\n";
    string first_name = "???";  // string variable
                                // ("???" means "don't know name")
    double age = -1;                    // double variable (-1 mean "don't know age")
    cin >> first_name >> age;          // read a string and an age
    cout << "Hello, " << first_name << " (age " << age * 12 << "months)\n";
}
