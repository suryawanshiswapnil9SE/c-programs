#include <iostream>
using namespace std;

int main() {
    int n, original, sum = 0, digit;
    cout << "Enter a 3-digit number: ";
    cin >> n;
    original = n;
    while (n > 0) {
        digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }
    if (sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong";
    return 0;
}
