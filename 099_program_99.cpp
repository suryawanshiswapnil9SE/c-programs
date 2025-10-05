#include <iostream>
using namespace std;

int main() {
    int n, even_count = 0, odd_count = 0;
    cout << "Enter a number: ";
    cin >> n;
Count the number of even and odd digits in a number
    if (n == 0) {
        even_count = 1; // 0 is considered even
    } else {
        int temp = n;
        while (temp != 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
            }
            temp /= 10;
        }
    }
    cout << "Even digits count: " << even_count << endl;
    cout << "Odd digits count: " << odd_count << endl;
    return 0;
}
