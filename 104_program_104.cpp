#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number of terms N: ";
    cin >> n;
Calculate the sum of an arithmetic series (1 + 2 + 3 + ... + N)
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Sum of series = " << sum << endl;
    return 0;
}
