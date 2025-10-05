#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
Check if a number is positive AND even
    if (num > 0) {
        if (num % 2 == 0) {
            cout << num << " is Positive and Even." << endl;
        } else {
            cout << num << " is Positive but Odd." << endl;
        }
    } else if (num < 0) {
        cout << num << " is Negative (not positive)." << endl;
    } else {
        cout << num << " is Zero (not positive)." << endl;
    }
    return 0;
}
