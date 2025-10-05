#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
Check if a number is a multiple of 3
    if (num % 3 == 0) {
        cout << num << " is a multiple of 3." << endl;
    } else {
        cout << num << " is not a multiple of 3." << endl;
    }
    return 0;
}
