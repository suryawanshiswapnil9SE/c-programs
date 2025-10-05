#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;
Check if a number is single-digit, double-digit, or more
    if (num < 0) {
        cout << "Please enter a non-negative number." << endl;
    } else if (num < 10) {
        cout << "The number is Single-Digit." << endl;
    } else if (num < 100) {
        cout << "The number is Double-Digit." << endl;
    } else {
        cout << "The number has Three or More Digits." << endl;
    }
    return 0;
}
