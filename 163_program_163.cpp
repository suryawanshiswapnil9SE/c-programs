#include <iostream>
using namespace std;

int main() {
    int n, target_digit = 5, count = 0;
    cout << "Enter an integer: ";
    cin >> n;
Count how many times a specific digit (5) appears in a number
    int temp = abs(n);
    if (temp == 0 && target_digit == 0) {
        count = 1;
    } else {
        while (temp > 0) {
            if (temp % 10 == target_digit) {
                count++;
            }
            temp /= 10;
        }
    }
    cout << "The digit " << target_digit << " appears " << count << " times." << endl;
    return 0;
}
