#include <iostream>
using namespace std;

int main() {
    int n, product = 1;
    cout << "Enter an integer: ";
    cin >> n;
Calculate the product of digits of a number
    if (n == 0) {
        product = 0;
    } else {
        int temp = abs(n);
        while (temp > 0) {
            product *= temp % 10;
            temp /= 10;
        }
    }
    cout << "Product of digits = " << product << endl;
    return 0;
}
