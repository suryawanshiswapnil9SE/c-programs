#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cout << "Enter date (day month year): ";
    cin >> day >> month >> year;
Simple check for valid date range (ignoring specific days per month)
    if (year > 0) {
        if (month >= 1 && month <= 12) {
            if (day >= 1 && day <= 31) {
                cout << "Date is within a Valid Range (simple check)." << endl;
            } else {
                cout << "Day is Invalid (must be 1-31)." << endl;
            }
        } else {
            cout << "Month is Invalid (must be 1-12)." << endl;
        }
    } else {
        cout << "Year is Invalid (must be positive)." << endl;
    }
    return 0;
}
