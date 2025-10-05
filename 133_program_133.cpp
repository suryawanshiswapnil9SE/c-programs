#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
Check if the year is a century leap year (divisible by 400) or not
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            cout << year << " is a Century Leap Year." << endl;
        } else {
            cout << year << " is a Century Year but NOT a Leap Year." << endl;
        }
    } else {
Simple leap year check for non-century years
        if (year % 4 == 0) {
            cout << year << " is a Leap Year." << endl;
        } else {
            cout << year << " is not a Leap Year." << endl;
        }
    }

    return 0;
}
