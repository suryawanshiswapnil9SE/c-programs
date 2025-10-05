#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum_of_squares = 0;
    cout << "Enter a limit N: ";
    cin >> n;
Calculate the sum of squares of first N natural numbers (1^2 + 2^2 + ...)
    for (int i = 1; i <= n; i++) {
        sum_of_squares += (long long)i * i;
    }

    cout << "Sum of squares = " << sum_of_squares << endl;
    return 0;
}
