#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
Check if a number is divisible by 7 and NOT by 5
    if (num % 7 == 0) {
        if (num % 5 != 0) {
            cout << num << " is divisible by 7 but NOT by 5." << endl;
        } else {
            cout << num << " is divisible by both 7 and 5." << endl;
        }
    } else {
        cout << num << " is not divisible by 7." << endl;
    }
    return 0;
}
