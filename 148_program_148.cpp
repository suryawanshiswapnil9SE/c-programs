#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
Check if a number is a multiple of 4 OR 6
    if (num % 4 == 0 || num % 6 == 0) {
        cout << num << " is a multiple of 4 OR 6." << endl;
    } else {
        cout << num << " is neither a multiple of 4 nor 6." << endl;
    }
    return 0;
}
