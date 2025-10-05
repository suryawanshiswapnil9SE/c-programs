#include <iostream>
using namespace std;

int main() {
    int n, original, rev = 0, digit;
    cout << "Enter a number: ";
    cin >> n;
    original = n;
    while (n > 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    if (original == rev)
        cout << "Palindrome Number";
    else
        cout << "Not Palindrome";
    return 0;
}
