#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;
    cout << "Enter a limit N: ";
    cin >> n;
Calculate the sum of reciprocals (1/1 + 1/2 + 1/3 + ... + 1/N)
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    cout << "Sum of reciprocals = " << sum << endl;
    return 0;
}
