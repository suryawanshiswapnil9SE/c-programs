#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
Check if a number is divisible by both 5 and 11
    if (num % 5 == 0 && num % 11 == 0) {
        cout << "The number is divisible by 5 and 11." << endl;
    } else {
        cout << "The number is NOT divisible by 5 and 11." << endl;
    }

    return 0;
}
