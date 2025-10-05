#include <iostream>
using namespace std;

int main() {
    int day_num;
    cout << "Enter day number (1=Mon, 7=Sun): ";
    cin >> day_num;
Determine if a day is a weekday or weekend
    if (day_num >= 1 && day_num <= 5) {
        cout << "It is a Weekday." << endl;
    } else if (day_num == 6 || day_num == 7) {
        cout << "It is a Weekend." << endl;
    } else {
        cout << "Invalid day number." << endl;
    }
    return 0;
}
