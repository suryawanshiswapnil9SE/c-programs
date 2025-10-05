#include <iostream>
using namespace std;

int main() {
    int n, sum_even_digits = 0;
    cout << "Enter an integer: ";
    cin >> n;
Print the sum of even digits of a number
    int temp = abs(n);
    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 == 0) {
            sum_even_digits += digit;
        }
        temp /= 10;
    }
    cout << "Sum of even digits = " << sum_even_digits << endl;
    return 0;
}
