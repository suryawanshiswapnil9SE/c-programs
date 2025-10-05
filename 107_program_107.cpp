#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int decimal_num;
    long long binary_num = 0;
    int remainder, i = 1;

    cout << "Enter a decimal number: ";
    cin >> decimal_num;
Convert decimal to binary using a while loop
    while (decimal_num != 0) {
        remainder = decimal_num % 2;
        decimal_num /= 2;
        binary_num += remainder * i;
        i *= 10;
    }

    cout << "Binary equivalent: " << binary_num << endl;
    return 0;
}
