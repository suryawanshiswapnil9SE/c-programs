#include <iostream>
using namespace std;

int main() {
    int x, y;
    long long result = 1;
    cout << "Enter base (x) and exponent (y): ";
    cin >> x >> y;
Calculate x^y using a for loop
    for (int i = 0; i < y; i++) {
        result *= x;
    }

    cout << x << "^" << y << " = " << result << endl;
    return 0;
}
