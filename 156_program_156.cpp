#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter a number N: ";
    cin >> n;
Count the number of divisors of N
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    cout << "Number of divisors of " << n << " is: " << count << endl;
    return 0;
}
