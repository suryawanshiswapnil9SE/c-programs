#include <iostream>
using namespace std;

int main() {
    int n;
    long long sum = 0;
    cout << "Enter a limit N: ";
    cin >> n;
Calculate sum of squares of EVEN numbers up to N
    for (int i = 2; i <= n; i += 2) {
        sum += (long long)i * i;
    }

    cout << "Sum of squares of even numbers = " << sum << endl;
    return 0;
}
